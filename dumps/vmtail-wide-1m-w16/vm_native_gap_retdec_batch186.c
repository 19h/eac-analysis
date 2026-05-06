/*
 * Targeted RetDec C for native executable gap queue batch 186.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x56dd60-0x56e696 rank=65 name=fcn.0056dd60 kind=r2_discovered bytes=2358 uncovered=2358
 *   0x4fe280-0x4fec1e rank=66 name=method.std::basic_filebuf_char__std::char_traits_char___.virtual_96 kind=native_discovered bytes=2462 uncovered=2304
 *   0x515d80-0x516662 rank=67 name=method.std::num_get_wchar_t__std::istreambuf_iterator_wchar_t__std::char_traits_wchar_t_____.virtual_32 kind=native_discovered bytes=2274 uncovered=2274
 *   0x5153a0-0x515c7c rank=68 name=method.std::num_get_wchar_t__std::istreambuf_iterator_wchar_t__std::char_traits_wchar_t_____.virtual_64 kind=native_discovered bytes=2268 uncovered=2268
 *   0x55f800-0x5600d9 rank=69 name=method.std::num_get_char__std::istreambuf_iterator_char__std::char_traits_char_____.virtual_64 kind=native_discovered bytes=2265 uncovered=2265
 *   0x516790-0x517067 rank=70 name=fcn.00516790 kind=r2_discovered bytes=2263 uncovered=2263
 *   0x516760-0x517035 rank=71 name=method.std::num_get_wchar_t__std::istreambuf_iterator_wchar_t__std::char_traits_wchar_t_____.virtual_40 kind=native_discovered bytes=2261 uncovered=2261
 *   0x55f830-0x560104 rank=72 name=fcn.0055f830 kind=r2_discovered bytes=2260 uncovered=2260
 *   0x5615a0-0x561e6b rank=73 name=method.std::num_get_char__std::istreambuf_iterator_char__std::char_traits_char_____.virtual_32 kind=native_discovered bytes=2251 uncovered=2251
 *   0x560c00-0x5614bb rank=74 name=method.std::num_get_char__std::istreambuf_iterator_char__std::char_traits_char_____.virtual_40 kind=native_discovered bytes=2235 uncovered=2235
 *   0x529a20-0x52a2b6 rank=75 name=fcn.00529a20 kind=r2_discovered bytes=2198 uncovered=2198
 *   0x4d9310-0x4d9ea1 rank=76 name=fcn.004d9310 kind=r2_discovered bytes=2961 uncovered=2191
 *   0x4d0060-0x4d08dd rank=77 name=fcn.004d0060 kind=r2_discovered bytes=2173 uncovered=2173
 *   0x4baf40-0x4bb7aa rank=78 name=fcn.004baf40 kind=r2_discovered bytes=2154 uncovered=2154
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
extern int g41;
extern int g42;
extern int g43;
extern int g44;
extern int g45;
extern int g46;
extern int g47;
extern int g48;
extern int g49;
extern int g50;
extern int g51;
extern int g52;
extern int g53;
extern int g54;
extern int g55;
extern int g56;
extern int g57;
extern int g58;
extern int g59;
extern int g60;
extern int g61;
extern int g62;
extern int g63;
extern int g64;
extern int g65;
extern int g66;
extern int g67;
extern int g68;
extern int g69;
extern int g70;
extern int g71;
extern int g72;
extern int g73;
extern int g74;
extern int g75;
extern int g76;
extern int g77;
extern int g78;
extern int g79;
extern int g80;
extern int g81;
extern int g82;
extern int g83;
extern int g84;
extern int g85;
extern int g86;
extern int g87;
extern int g88;
extern int g89;
extern int g90;
extern int g91;
extern int g92;
extern int g93;
extern int g94;
extern int g95;
extern int g96;
extern int g97;
extern int g98;
extern int g99;
extern int g100;
extern int g101;
extern int g102;
extern int g103;
extern int g104;
extern int g105;
extern int g106;
extern int g107;
int64_t entry_point();
unsigned char llvm_ctpop_i8(unsigned char value);
uint16_t llvm_bswap_i16(uint16_t value);
uint32_t llvm_bswap_i32(uint32_t value);
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
void __asm_movq(int64_t value, int128_t dst);
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
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
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
void __asm_movups_133();
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

int64_t function_259ce();
int64_t function_451f2();
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4b0ac0();
int64_t function_4b0be0();
int64_t function_4b0d80();
int64_t function_4b0df0();
int64_t function_4b1220();
int64_t function_4b1590();
int64_t function_4b1680();
int64_t function_4b19a0();
int64_t function_4b1ac0();
int64_t function_4b38b0();
int64_t function_4b95a0();
int64_t function_4b9690();
int64_t function_4b9f70();
int64_t function_4b9ff0();
int64_t function_4ba380();
int64_t function_4ba580();
int64_t function_4ba6b0();
int64_t function_4ba7d0();
int64_t function_4ba880();
int64_t function_4baf40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4cfef0();
int64_t function_4d0060(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_4d9310(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5);
int64_t function_4eeb40();
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_4f1770();
int64_t function_4f17f0();
int64_t function_4f3410();
int64_t function_4f39b0();
int64_t function_4f4170();
int64_t function_4f47e0();
int64_t function_4fe280(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4fe3d0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4fe530(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4febd8(void);
int64_t function_50a420();
int64_t function_50d7a0();
int64_t function_50e0e0();
int64_t function_50f6f0();
int64_t function_50f7d0();
int64_t function_514a00();
int64_t function_5153a0(void);
int64_t function_5153b0(int64_t a1);
int64_t function_5153d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_515d80(void);
int64_t function_515d90(int64_t a1);
int64_t function_515db0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_516760(void);
int64_t function_516770(int64_t a1);
int64_t function_516790(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_5245c0();
int64_t function_524600();
int64_t function_5246d0();
int64_t function_529a20(int64_t a1, int64_t a2);
int64_t function_53f9c0();
int64_t function_53fac0();
int64_t function_5423f0();
int64_t function_549920();
int64_t function_552550();
int64_t function_554420();
int64_t function_558300();
int64_t function_55ee70();
int64_t function_55f800(void);
int64_t function_55f810(int64_t a1);
int64_t function_55f830(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_560290();
int64_t function_560c00(void);
int64_t function_560c10(int64_t a1);
int64_t function_560c30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8);
int64_t function_5615a0(void);
int64_t function_5615b0(int64_t a1);
int64_t function_5615d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t result6);
int64_t function_565f30();
int64_t function_566390();
int64_t function_567a10();
int64_t function_569070();
int64_t function_56afb0();
int64_t function_56b2c0();
int64_t function_56dd60(int64_t a1, int64_t a2);

// Address range: 0x4baf40 - 0x4bb7aa
int64_t function_4baf40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4baf40
    int64_t v1; // bp-536, 0x4baf40
    function_4b0870(&v1);
    int64_t v2; // bp-504, 0x4baf40
    function_4b0870(&v2);
    int64_t v3 = a1 + 152; // 0x4baf85
    if ((int32_t)function_4b0df0(v3, 0) != 1) {
        // 0x4bb180
        return 0xffffb080;
    }
    int64_t * v4 = (int64_t *)(a1 + 184); // 0x4bafa5
    int64_t v5 = *v4 < 384; // 0x4bafba
    int64_t v6 = v5 + 5 & 0xffffffff; // 0x4bafbc
    int64_t v7 = v6; // 0x4bafc6
    char v8 = 0; // 0x4bafc6
    if ((int32_t)function_4b1590(a4 + 24, a1 + 104) == 0) {
        // 0x4bb1c0
        v7 = v6;
        v8 = 0;
        if ((int32_t)function_4b1590(a4, a1 + 80) == 0) {
            // 0x4bb1d5
            v7 = v5 + 6 & 0xffffffff;
            v8 = 1;
        }
    }
    uint64_t v9 = *v4; // 0x4bafd1
    int64_t v10 = 2; // 0x4bafdf
    int32_t v11 = 1; // 0x4bafdf
    int32_t v12 = 2; // 0x4bafdf
    uint64_t v13 = 2; // 0x4bafdf
    if (v13 < v9) {
        // 0x4bafe5
        v11 = (int32_t)v7 % 256 - 1;
        uint32_t v14 = 1 << v11 % 32;
        v10 = v14 % 256;
        v12 = 0x1000000 * v14 / 0x1000000;
    }
    uint64_t v15 = v9 - 1 + v13; // 0x4bb009
    uint64_t v16 = v15 / v13;
    int64_t v17; // 0x4baf40
    int64_t v18; // 0x4baf40
    if (v8 != 0) {
        int64_t v19 = *(int64_t *)(a1 + 232); // 0x4bb0d8
        v18 = v19;
        v17 = v13;
        if (v19 == 0) {
            goto lab_0x4bb021;
        } else {
            goto lab_0x4bb0ee;
        }
    } else {
        goto lab_0x4bb021;
    }
  lab_0x4bb112:;
    // 0x4bb112
    int64_t v20; // 0x4baf40
    if (v8 == 0) {
        // 0x4bb119
        if ((char)v12 != 0) {
            int64_t v21 = v20 + (int64_t)(72 * ((v12 + 255) % 256) + 72); // 0x4bb134
            int64_t v22 = v20 + 72; // 0x4bb143
            function_4ba6b0(v20);
            while (v22 != v21) {
                int64_t v23 = v22;
                v22 = v23 + 72;
                function_4ba6b0(v23);
            }
        }
        // 0x4bb151
        free((int64_t *)v20);
    }
    // 0x4bb15b
    int64_t v24; // 0x4baf40
    int64_t v25 = v24 & 0xffffffff;
    function_4b0890(&v1);
    function_4b0890(&v2);
    if ((int32_t)v24 == 0) {
        // 0x4bb180
        return v25 & 0xffffffff;
    }
    // 0x4bb176
    function_4ba6b0(a2);
    // 0x4bb180
    return v25 & 0xffffffff;
  lab_0x4bb34e_3:;
    // 0x4bb34e
    int64_t v26; // bp-408, 0x4baf40
    function_4ba6b0((int64_t)&v26);
    int64_t v27; // 0x4baf40
    v20 = v27;
    int64_t v28; // 0x4baf40
    v24 = v28;
    goto lab_0x4bb112;
  lab_0x4bb512:;
    // 0x4bb512
    int64_t v29; // bp-472, 0x4baf40
    function_4b0890(&v29);
    int64_t v30; // bp-440, 0x4baf40
    function_4b0890(&v30);
    int64_t v31; // 0x4baf40
    v28 = v31;
    goto lab_0x4bb34e_3;
  lab_0x4bb021:;
    uint32_t nmemb = v12 % 256;
    int64_t * mem = calloc(nmemb, 72); // 0x4bb033
    if (mem == NULL) {
        // 0x4bb448
        function_4b0890(&v1);
        function_4b0890(&v2);
        // 0x4bb176
        function_4ba6b0(a2);
        // 0x4bb180
        return 0xffffb280;
    }
    int64_t v32 = (int64_t)mem; // 0x4bb033
    int64_t v33 = function_4ba7d0(v32, a4); // 0x4bb04c
    v20 = v32;
    v24 = v33;
    int64_t v34; // 0x4baf40
    int64_t v35; // bp-328, 0x4baf40
    char v36; // 0x4baf40
    int64_t v37; // 0x4bb021
    int64_t v38; // 0x4baf40
    uint32_t v39; // 0x4baf40
    uint32_t v40; // 0x4baf40
    int64_t v41; // 0x4bb396
    int64_t v42; // 0x4baf40
    if ((int32_t)v33 == 0) {
        // 0x4bb074
        v37 = nmemb;
        int64_t v43; // bp-648, 0x4baf40
        v38 = (int64_t)&v43 + 320;
        v39 = v11 % 32;
        int64_t * v44 = NULL; // 0x4baf40
        int64_t v45 = 1; // 0x4baf40
        int64_t v46 = 72 * (v45 % 256) + v32; // 0x4bb07b
        int64_t v47 = function_4ba7d0(v46, 72 * (v45 / 2 % 128) + v32); // 0x4bb093
        v20 = v32;
        v24 = v47;
        while ((int32_t)v47 == 0) {
            // 0x4bb09c
            if (v13 <= v15) {
                int64_t v48 = function_4b9690(a1, v46, v46); // 0x4bb0c6
                v20 = v32;
                v24 = v48;
                if ((int32_t)v48 != 0) {
                    // break (via goto) -> 0x4bb112
                    goto lab_0x4bb112;
                }
                int64_t v49 = 1; // 0x4bb0b0
                int64_t v50 = v49; // 0x4bb0b7
                while (v49 != v16) {
                    // 0x4bb0bd
                    v48 = function_4b9690(a1, v46, v46);
                    v20 = v32;
                    v24 = v48;
                    if ((int32_t)v48 != 0) {
                        // break (via goto) -> 0x4bb112
                        goto lab_0x4bb112;
                    }
                    // 0x4bb0b0
                    v49 = v50 + 1;
                    v50 = v49;
                }
            }
            int64_t v51 = (int64_t)v44;
            int64_t v52 = 2 * v45; // 0x4bb36a
            uint64_t v53 = v51 + 1; // 0x4bb36c
            *(int64_t *)((8 * v51 & 2040) + v38) = v46;
            int64_t v54 = v52 & 254; // 0x4bb379
            v44 = (int64_t *)(v53 % 256);
            v45 = v52 & 0xfffffffe;
            if ((v39 == 0 ? v54 : (int64_t)((int32_t)v54 >> v39)) != 0) {
                // 0x4bb386
                v40 = v11 % 256;
                int64_t v55 = function_4b9ff0(a1, &v35, (char)v53, v40); // 0x4bb3a8
                v20 = v32;
                v24 = v55;
                if ((int32_t)v55 != 0) {
                    goto lab_0x4bb112;
                } else {
                    // 0x4bb3d1
                    v41 = 0x100000000000000 * v13 / 0x100000000000000;
                    v42 = v32 - 72;
                    v36 = 1;
                    v34 = 0;
                    goto lab_0x4bb3d1_2;
                }
            }
            v46 = 72 * (v45 % 256) + v32;
            v47 = function_4ba7d0(v46, 72 * (v45 / 2 % 128) + v32);
            v20 = v32;
            v24 = v47;
        }
    }
    goto lab_0x4bb112;
  lab_0x4bb0ee:
    // 0x4bb0ee
    v27 = v18;
    int64_t v56 = function_4b0df0(a3, 0); // 0x4bb0f3
    int64_t v57 = function_4b0ac0(&v1, a3); // 0x4bb103
    v20 = v27;
    v24 = v57;
    int64_t v58; // 0x4baf40
    int64_t v59; // 0x4bb32e
    if ((int32_t)v57 == 0) {
        int64_t v60 = function_4b19a0(&v2, v3, a3); // 0x4bb1f8
        v20 = v27;
        v24 = v60;
        if ((int32_t)v60 != 0) {
            goto lab_0x4bb112;
        } else {
            int64_t v61 = function_4b0be0(&v1, &v2, (int64_t)((int32_t)v56 != 1)); // 0x4bb221
            v20 = v27;
            v24 = v61;
            if ((int32_t)v61 != 0) {
                goto lab_0x4bb112;
            } else {
                // 0x4bb230
                memset2((void *)(int64_t)(&v35), 0, (int32_t)v16 + 1);
                v58 = 0x100000000000000 * (int64_t)&v35 >> 56;
                if (v13 <= v15) {
                    int64_t v62 = 0; // 0x4bb266
                    char * v63 = (char *)(v62 + v58); // 0x4bb270
                    int64_t v64 = v62; // 0x4bb27d
                    int64_t v65 = (int64_t)*v63; // 0x4bb27d
                    int64_t v66 = 0;
                    int64_t v67 = function_4b0df0((int64_t)&v1, (int32_t)v64); // 0x4bb28b
                    int64_t v68 = v66 + 1; // 0x4bb292
                    uint32_t v69 = (int32_t)v66 % 32; // 0x4bb296
                    int64_t v70 = (v69 == 0 ? v67 : (int64_t)((int32_t)v67 << v69)) | v65;
                    *v63 = (char)v70;
                    v64 += v16;
                    v65 = v70 & 0xffffffff;
                    while (v68 != v17) {
                        // 0x4bb280
                        v66 = v68;
                        v67 = function_4b0df0((int64_t)&v1, (int32_t)v64);
                        v68 = v66 + 1;
                        v69 = (int32_t)v66 % 32;
                        v70 = (v69 == 0 ? v67 : (int64_t)((int32_t)v67 << v69)) | v65;
                        *v63 = (char)v70;
                        v64 += v16;
                        v65 = v70 & 0xffffffff;
                    }
                    // 0x4bb2a6
                    v62++;
                    while (v62 != v16) {
                        // 0x4bb270
                        v63 = (char *)(v62 + v58);
                        v64 = v62;
                        v65 = (int64_t)*v63;
                        v66 = 0;
                        v67 = function_4b0df0((int64_t)&v1, (int32_t)v64);
                        v68 = v66 + 1;
                        v69 = (int32_t)v66 % 32;
                        v70 = (v69 == 0 ? v67 : (int64_t)((int32_t)v67 << v69)) | v65;
                        *v63 = (char)v70;
                        v64 += v16;
                        v65 = v70 & 0xffffffff;
                        while (v68 != v17) {
                            // 0x4bb280
                            v66 = v68;
                            v67 = function_4b0df0((int64_t)&v1, (int32_t)v64);
                            v68 = v66 + 1;
                            v69 = (int32_t)v66 % 32;
                            v70 = (v69 == 0 ? v67 : (int64_t)((int32_t)v67 << v69)) | v65;
                            *v63 = (char)v70;
                            v64 += v16;
                            v65 = v70 & 0xffffffff;
                        }
                        // 0x4bb2a6
                        v62++;
                    }
                    int64_t v71 = 1; // 0x4bb2cd
                    int32_t v72; // 0x4baf40
                    int64_t v73 = (uint32_t)v72 % 256;
                    int64_t v74 = v58 | 1;
                    int64_t v75 = 0;
                    v71++;
                    uint64_t v76 = v73 ^ v75;
                    int64_t v77 = v76 % 2 ^ 1; // 0x4bb2e7
                    char * v78 = (char *)(v74 - 1); // 0x4bb2f0
                    unsigned char v79 = *v78; // 0x4bb2f0
                    int64_t v80 = v77 * (int64_t)v79; // 0x4bb2f0
                    *v78 = 128 * (char)v77 | v79;
                    *(char *)v74 = (char)(v80 ^ v76);
                    while (v16 >= v71) {
                        int64_t v81 = v74 + 1; // 0x4bb306
                        int64_t v82 = v80 & v76 | v73 & v75; // 0x4bb2d0
                        v73 = (int64_t)*(char *)v81;
                        v74 = v81;
                        v75 = v82;
                        v71++;
                        v76 = v73 ^ v75;
                        v77 = v76 % 2 ^ 1;
                        v78 = (char *)(v74 - 1);
                        v79 = *v78;
                        v80 = v77 * (int64_t)v79;
                        *v78 = 128 * (char)v77 | v79;
                        *(char *)v74 = (char)(v80 ^ v76);
                    }
                }
                // 0x4bb30f
                function_4ba580(&v26);
                v59 = v16 + v58;
                char v83 = *(char *)v59; // 0x4bb337
                int64_t v84 = function_4ba380(a1, a2, v27, v10, v83); // 0x4bb33f
                v28 = v84;
                if ((int32_t)v84 == 0) {
                    int64_t v85 = a2 + 48; // 0x4bb473
                    int64_t v86 = function_4b0d80(v85, 1); // 0x4bb47a
                    v28 = v86;
                    if ((int32_t)v86 != 0) {
                        goto lab_0x4bb34e_3;
                    } else {
                        if (a5 != 0) {
                            // 0x4bb495
                            function_4b0870(&v29);
                            function_4b0870(&v30);
                            int64_t v87 = (int64_t)&v29;
                            function_4b38b0(&v29, (*(int64_t *)(a1 + 176) + 7) / 8, a5, a6);
                            int64_t result = function_4b1590(v87, a1 + 8); // 0x4bb4f1
                            int64_t v88; // 0x4bb507
                            while ((int32_t)result >= 0) {
                                // 0x4bb4fa
                                v88 = function_4b1220(&v29, 1);
                                v31 = v88;
                                if ((int32_t)v88 != 0) {
                                    goto lab_0x4bb512;
                                }
                                result = function_4b1590(v87, a1 + 8);
                            }
                            int32_t v89 = 11; // 0x4bb531
                            while (v89 != 0) {
                                // 0x4bb53c
                                if ((int32_t)function_4b1680(&v29, 1) >= 1) {
                                    int64_t v90 = function_4b1ac0(v85, v85, &v29); // 0x4bb564
                                    v31 = v90;
                                    if ((int32_t)v90 != 0) {
                                        goto lab_0x4bb512;
                                    } else {
                                        // 0x4bb56f
                                        if ((int32_t)function_4b95a0(v85, a1) != 0) {
                                            goto lab_0x4bb512;
                                        } else {
                                            int64_t v91 = (int64_t)&v30; // 0x4bb588
                                            g37++;
                                            int64_t v92 = function_4b1ac0(v91, v87, &v29); // 0x4bb59b
                                            v31 = v92;
                                            if ((int32_t)v92 != 0) {
                                                goto lab_0x4bb512;
                                            } else {
                                                int64_t v93 = function_4b95a0(v91, a1); // 0x4bb5b5
                                                v31 = v93;
                                                if ((int32_t)v93 != 0) {
                                                    goto lab_0x4bb512;
                                                } else {
                                                    // 0x4bb5c4
                                                    g37++;
                                                    int64_t v94 = function_4b1ac0(a2, a2, &v30); // 0x4bb5dc
                                                    v31 = v94;
                                                    if ((int32_t)v94 != 0) {
                                                        goto lab_0x4bb512;
                                                    } else {
                                                        int64_t v95 = function_4b95a0(a2, a1); // 0x4bb5f3
                                                        v31 = v95;
                                                        if ((int32_t)v95 != 0) {
                                                            goto lab_0x4bb512;
                                                        } else {
                                                            // 0x4bb602
                                                            g37++;
                                                            int64_t v96 = function_4b1ac0(v91, v91, &v29); // 0x4bb61d
                                                            v31 = v96;
                                                            if ((int32_t)v96 != 0) {
                                                                goto lab_0x4bb512;
                                                            } else {
                                                                int64_t v97 = function_4b95a0(v91, a1); // 0x4bb637
                                                                v31 = v97;
                                                                if ((int32_t)v97 != 0) {
                                                                    goto lab_0x4bb512;
                                                                } else {
                                                                    // 0x4bb646
                                                                    g37++;
                                                                    int64_t v98 = a2 + 24; // 0x4bb65b
                                                                    int64_t v99 = function_4b1ac0(v98, v98, &v30); // 0x4bb665
                                                                    v31 = v99;
                                                                    if ((int32_t)v99 != 0) {
                                                                        goto lab_0x4bb512;
                                                                    } else {
                                                                        int64_t v100 = function_4b95a0(v98, a1); // 0x4bb67a
                                                                        v31 = v100;
                                                                        if ((int32_t)v100 != 0) {
                                                                            goto lab_0x4bb512;
                                                                        } else {
                                                                            // 0x4bb689
                                                                            g37++;
                                                                            function_4b0890(&v29);
                                                                            function_4b0890(&v30);
                                                                            goto lab_0x4bb6ab;
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
                                int32_t v101 = v89;
                                function_4b38b0(&v29, (*(int64_t *)(a1 + 176) + 7) / 8, a5, a6);
                                result = function_4b1590(v87, a1 + 8);
                                while ((int32_t)result >= 0) {
                                    // 0x4bb4fa
                                    v88 = function_4b1220(&v29, 1);
                                    v31 = v88;
                                    if ((int32_t)v88 != 0) {
                                        goto lab_0x4bb512;
                                    }
                                    result = function_4b1590(v87, a1 + 8);
                                }
                                // 0x4bb531
                                v89 = v101 - 1;
                            }
                            // 0x4bb7c4
                            return result;
                        }
                        goto lab_0x4bb6ab;
                    }
                } else {
                    goto lab_0x4bb34e_3;
                }
            }
        }
    } else {
        goto lab_0x4bb112;
    }
  lab_0x4bb6ab:;
    int64_t v102 = (int64_t)&v26;
    int64_t v103 = v59; // 0x4bb6b5
    while (v103 != v58) {
        int64_t v104 = function_4b9690(a1, a2, a2); // 0x4bb6cc
        v28 = v104;
        if ((int32_t)v104 != 0) {
            goto lab_0x4bb34e_3;
        }
        int64_t v105 = v103 - 1; // 0x4bb6d5
        char v106 = *(char *)v105; // 0x4bb6d5
        int64_t v107 = function_4ba380(a1, v102, v27, v10, v106); // 0x4bb6eb
        v28 = v107;
        if ((int32_t)v107 != 0) {
            goto lab_0x4bb34e_3;
        }
        int64_t v108 = function_4ba880(a1, a2, a2, v102); // 0x4bb709
        v28 = v108;
        v103 = v105;
        if ((int32_t)v108 != 0) {
            goto lab_0x4bb34e_3;
        }
    }
    // 0x4bb788
    function_4ba6b0(v102);
    return function_4b9f70(a1, a2, (int32_t)((int32_t)v56 != 1));
  lab_0x4bb3d1_2:;
    int64_t v109 = v34;
    unsigned char v110 = v36;
    int64_t v111 = v109; // 0x4bb3da
    int64_t v112; // 0x4baf40
    int64_t v113; // 0x4baf40
    int64_t v114; // 0x4baf40
    int64_t v115; // 0x4bb3d1
    if (v110 == 0) {
        goto lab_0x4bb719;
    } else {
        // 0x4bb3e0
        v115 = v110;
        v114 = v109;
        v112 = v115;
        v113 = v42 + 144 * v115;
        goto lab_0x4bb427;
    }
  lab_0x4bb719:;
    int64_t v116 = v111;
    unsigned char v117 = 2 * v110; // 0x4bb719
    int64_t v118 = v117; // 0x4bb727
    if (v39 == 0) {
        goto lab_dec_label_pc_unknown;
    } else {
        v118 = (int32_t)v117 >> v39;
        goto lab_dec_label_pc_unknown;
    }
  lab_dec_label_pc_unknown:
    v36 = v117;
    v34 = v116;
    if (v118 == 0) {
        goto lab_0x4bb3d1_2;
    } else {
        int64_t v119 = function_4b9ff0(a1, &v35, (char)v116, v40); // 0x4bb74f
        v20 = v32;
        v24 = v119;
        if ((int32_t)v119 != 0) {
            goto lab_0x4bb112;
        } else {
            // 0x4bb75e
            v18 = v32;
            v17 = v41;
            if (v8 == 0) {
                goto lab_0x4bb0ee;
            } else {
                // 0x4bb769
                *(int64_t *)(a1 + 232) = v32;
                *(int64_t *)(a1 + 240) = v37;
                v18 = v32;
                v17 = v41;
                goto lab_0x4bb0ee;
            }
        }
    }
  lab_0x4bb427:;
    int64_t v120 = v113;
    int64_t v121 = function_4ba880(a1, v120, v120 + -72 * v115, 72 * v115 + v32); // 0x4bb434
    v20 = v32;
    v24 = v121;
    if ((int32_t)v121 == 0) {
        int64_t v122 = v114 + 1 & 0xffffffff; // 0x4bb40e
        *(int64_t *)((8 * v114 & 2040) + v38) = v120;
        int64_t v123 = v112 - 1; // 0x4bb41d
        v114 = v122;
        v112 = v123;
        v113 = v120 - 72;
        v111 = v122;
        if (v123 == 0) {
            goto lab_0x4bb719;
        } else {
            goto lab_0x4bb427;
        }
    } else {
        goto lab_0x4bb112;
    }
}

// Address range: 0x4d0060 - 0x4d08dd
int64_t function_4d0060(int64_t a1, int64_t a2, uint64_t a3) {
    // 0x4d0060
    int64_t v1; // bp-264, 0x4d0060
    __asm_rep_stosq_memset((char *)&v1, 0, 8);
    int64_t v2 = a1 + 4;
    int64_t v3; // 0x4d0060
    int64_t v4; // 0x4d0060
    int64_t v5; // 0x4d0060
    int64_t v6; // 0x4d0060
    if (v2 % 2 != 0) {
        int64_t v7 = a1 + 5; // 0x4d08a6
        *(char *)v2 = 0;
        v5 = 271;
        v3 = v7;
        v6 = 269;
        v4 = v7;
        if ((v7 & 2) == 0) {
            goto lab_0x4d00a6;
        } else {
            goto lab_0x4d08ba;
        }
    } else {
        // 0x4d009c
        v5 = 272;
        v3 = v2;
        v6 = 270;
        v4 = v2;
        if ((v2 & 2) != 0) {
            goto lab_0x4d08ba;
        } else {
            goto lab_0x4d00a6;
        }
    }
  lab_0x4d00a6:;
    int64_t v8 = v5; // 0x4d00aa
    int64_t v9 = v3; // 0x4d00aa
    if ((v3 & 4) != 0) {
        // 0x4d08d0
        *(int32_t *)v3 = 0;
        return 0;
    }
    goto lab_0x4d00b0;
  lab_0x4d08ba:
    // 0x4d08ba
    *(int16_t *)v4 = 0;
    int64_t v146 = v4 + 2; // 0x4d08bf
    v8 = v6;
    v9 = v146;
    if ((v146 & 4) != 0) {
        // 0x4d08d0
        *(int32_t *)v146 = 0;
        return 0;
    }
    goto lab_0x4d00b0;
  lab_0x4d00b0:;
    uint64_t v10 = v8 / 8 % 0x20000000; // 0x4d00b4
    __asm_rep_stosq_memset((char *)v9, 0, v10);
    bool v11; // 0x4d0060
    int64_t v12 = v10 * (v11 ? -8 : 8) + v9; // 0x4d00ba
    int64_t v13 = v12; // 0x4d00bd
    if ((v8 & 4) != 0) {
        // 0x4d00bf
        *(int32_t *)v12 = 0;
        v13 = v12 + 4;
    }
    int64_t v14 = v13; // 0x4d00cc
    if ((v8 & 2) != 0) {
        // 0x4d00ce
        *(int16_t *)v13 = 0;
        v14 = v13 + 2;
    }
    if (v8 % 2 != 0) {
        // 0x4d00dc
        *(char *)v14 = 0;
    }
    // 0x4d00df
    int64_t v15; // 0x4d0060
    switch ((int32_t)a3) {
        case 192: {
        }
        case 256: {
            // 0x4d0870
            *(int32_t *)a1 = 4;
            v15 = a3 / 8 % 0x20000000;
            // break -> 0x4d0126
            break;
        }
        case 128: {
            // 0x4d0119
            *(int32_t *)a1 = 3;
            v15 = 16;
            // break -> 0x4d0126
            break;
        }
        default: {
            // 0x4d0107
            return 0xffffffdc;
        }
    }
    int64_t v16 = 0; // 0x4d0128
    char v17 = *(char *)(v16 + a2); // 0x4d0130
    *(char *)(v16 + (int64_t)&v1) = v17;
    int64_t v18 = v16 + 1; // 0x4d0138
    v16 = v18;
    while (v15 > v18) {
        // 0x4d0130
        v17 = *(char *)(v16 + a2);
        *(char *)(v16 + (int64_t)&v1) = v17;
        v18 = v16 + 1;
        v16 = v18;
    }
    uint32_t v19; // 0x4d00df
    if (v19 == 192) {
        // 0x4d0886
        int64_t v20; // bp-248, 0x4d0060
        int64_t v21 = (int64_t)&v20;
        *(char *)(v21 + 8) = -1 - *(char *)v21;
        int64_t v22; // bp-240, 0x4d0060
        while (v21 + 1 != (int64_t)&v22) {
            // 0x4d0890
            int64_t v23; // 0x4d0060
            v21 = v23;
            char v24 = *(char *)v21; // 0x4d0890
            *(char *)(v21 + 8) = -1 - v24;
            int64_t v25 = v21 + 1; // 0x4d0898
            v23 = v25;
        }
    }
    int64_t v26 = (int64_t)&g9;
    unsigned char v27 = *(char *)v26; // 0x4d0160
    unsigned char v28 = *(char *)(v26 | 1); // 0x4d0163
    unsigned char v29 = *(char *)(v26 | 3); // 0x4d016f
    unsigned char v30 = *(char *)(v26 | 2); // 0x4d0175
    unsigned char v31 = *(char *)(v26 | 5); // 0x4d017e
    int64_t v32; // 0x4d007c
    *(int32_t *)v32 = 0x10000 * (int32_t)v28 | 0x1000000 * (int32_t)v27 | (int32_t)v29 | 256 * (int32_t)v30;
    unsigned char v33 = *(char *)(v26 | 4); // 0x4d0184
    unsigned char v34 = *(char *)(v26 | 7); // 0x4d0190
    unsigned char v35 = *(char *)(v26 | 6); // 0x4d0196
    int64_t v36 = v26 + 8; // 0x4d019a
    *(int32_t *)(v32 | 4) = 0x1000000 * (int32_t)v33 | 0x10000 * (int32_t)v31 | (int32_t)v34 | 256 * (int32_t)v35;
    int64_t v37 = v32 + 8; // 0x4d01ad
    while (v36 != (int64_t)&g10) {
        // 0x4d0160
        v27 = *(char *)v36;
        v28 = *(char *)(v36 | 1);
        v29 = *(char *)(v36 | 3);
        v30 = *(char *)(v36 | 2);
        v31 = *(char *)(v36 | 5);
        *(int32_t *)v37 = 0x10000 * (int32_t)v28 | 0x1000000 * (int32_t)v27 | (int32_t)v29 | 256 * (int32_t)v30;
        v33 = *(char *)(v36 | 4);
        v34 = *(char *)(v36 | 7);
        v35 = *(char *)(v36 | 6);
        v36 += 8;
        *(int32_t *)(v37 | 4) = 0x1000000 * (int32_t)v33 | 0x10000 * (int32_t)v31 | (int32_t)v34 | 256 * (int32_t)v35;
        v37 += 8;
    }
    // 0x4d01af
    int32_t v38; // bp-200, 0x4d0060
    int64_t v39 = (int64_t)&v38; // 0x4d01af
    __asm_rep_stosq_memset((char *)&v38, 0, 8);
    int64_t v40; // 0x4d0083
    int64_t v41 = v40 | 1; // 0x4d01cd
    int64_t v42 = v40 | 3; // 0x4d01db
    int64_t v43 = v40 | 2; // 0x4d01e3
    int64_t v44 = 0;
    int64_t v45 = 4 * v44; // 0x4d01c8
    unsigned char v46 = *(char *)(v45 + v40); // 0x4d01c8
    unsigned char v47 = *(char *)(v45 + v41); // 0x4d01cd
    unsigned char v48 = *(char *)(v45 + v42); // 0x4d01db
    int32_t v49 = 256 * (int32_t)*(char *)(v45 + v43); // 0x4d01e9
    *(int32_t *)(v45 + v39) = 0x10000 * (int32_t)v47 | 0x1000000 * (int32_t)v46 | (int32_t)v48 | v49;
    int64_t v50 = v44 + 1; // 0x4d01f3
    while (v50 != 8) {
        // 0x4d01c8
        v45 = 4 * v50;
        v46 = *(char *)(v45 + v40);
        v47 = *(char *)(v45 + v41);
        v48 = *(char *)(v45 + v42);
        v49 = 256 * (int32_t)*(char *)(v45 + v43);
        *(int32_t *)(v45 + v39) = 0x10000 * (int32_t)v47 | 0x1000000 * (int32_t)v46 | (int32_t)v48 | v49;
        v50++;
    }
    // 0x4d01fd
    uint32_t v51; // 0x4d0060
    int32_t v52 = v38 ^ v51; // bp-168, 0x4d0219
    uint32_t v53; // 0x4d0060
    uint32_t v54; // 0x4d0060
    int32_t v55 = v54 ^ v53; // bp-160, 0x4d023d
    int64_t v56; // bp-312, 0x4d0060
    function_4cfef0((int64_t *)&v52, &v56, (int64_t *)&v55, v49);
    int64_t v57; // bp-304, 0x4d0060
    function_4cfef0((int64_t *)&v55, &v57, (int64_t *)&v52, v49);
    int32_t v58; // bp-152, 0x4d0060
    int64_t v59 = (int64_t)&v58; // 0x4d026b
    int64_t v60 = (int64_t)&v52;
    int32_t * v61 = (int32_t *)v60; // 0x4d0275
    *v61 = *v61 ^ *(int32_t *)(v60 - 32);
    int64_t v62 = v60 + 4; // 0x4d0277
    while (v62 != v59) {
        // 0x4d0272
        v61 = (int32_t *)v62;
        *v61 = *v61 ^ *(int32_t *)(v62 - 32);
        v62 += 4;
    }
    int32_t v63 = v59; // 0x4d0293
    int64_t v64; // bp-296, 0x4d0060
    function_4cfef0((int64_t *)&v52, &v64, (int64_t *)&v55, v63);
    int64_t v65; // bp-288, 0x4d0060
    function_4cfef0((int64_t *)&v55, &v65, (int64_t *)&v52, v63);
    int32_t v66; // bp-144, 0x4d0060
    if (v19 >= 129) {
        // 0x4d02b1
        v58 = v52 ^ v51;
        v66 = v55 ^ v54;
        int64_t v67; // bp-280, 0x4d0060
        function_4cfef0((int64_t *)&v58, &v67, (int64_t *)&v66, v63);
        int64_t v68; // bp-272, 0x4d0060
        function_4cfef0((int64_t *)&v66, &v68, (int64_t *)&v58, v63);
    }
    // 0x4d032d
    uint32_t v69; // 0x4d0060
    uint32_t v70; // 0x4d0060
    uint32_t v71 = v70 ^ v69; // 0x4d0227
    uint32_t v72; // 0x4d0060
    uint32_t v73; // 0x4d0060
    uint32_t v74 = v73 ^ v72; // 0x4d024b
    int64_t v75; // 0x4d0060
    int64_t v76 = 16 * v75;
    int64_t v77; // bp-120, 0x4d0060
    int64_t v78 = (int64_t)&v77; // 0x4d033e
    int32_t v79 = 16 * (int32_t)v75;
    int64_t v80 = v76 + (int64_t)&g11;
    int64_t v81 = 15;
    uint32_t v82; // 0x4d0060
    uint32_t v83; // 0x4d03a6
    uint32_t v84; // 0x4d03ac
    if (*(char *)v80 != 0) {
        // 0x4d038c
        v82 = (int32_t)v81;
        v83 = v82 % 32;
        v84 = -v82 % 32;
        *(int32_t *)v78 = v69 >> v84 ^ v38 << v83;
        *(int32_t *)(v78 | 4) = v53 >> v84 ^ v69 << v83;
        *(int32_t *)(v78 + 8) = v72 >> v84 ^ v53 << v83;
        *(int32_t *)(v78 + 12) = v38 >> v84 ^ v72 << v83;
    }
    int64_t v85 = v80 + 1; // 0x4d0427
    int64_t v86 = v78 + 16; // 0x4d0432
    int64_t v87 = v81 + 15 & 0xffffffff; // 0x4d0432
    while (v79 + (int32_t)&g11 + 4 != (int32_t)v85) {
        // 0x4d0383
        v81 = v87;
        int64_t v88 = v86;
        if (*(char *)v85 != 0) {
            // 0x4d038c
            v82 = (int32_t)v81;
            v83 = v82 % 32;
            v84 = -v82 % 32;
            *(int32_t *)v88 = v69 >> v84 ^ v38 << v83;
            *(int32_t *)(v88 | 4) = v53 >> v84 ^ v69 << v83;
            *(int32_t *)(v88 + 8) = v72 >> v84 ^ v53 << v83;
            *(int32_t *)(v88 + 12) = v38 >> v84 ^ v72 << v83;
        }
        // 0x4d0424
        v85++;
        v86 = v88 + 16;
        v87 = v81 + 15 & 0xffffffff;
    }
    int64_t v89 = 80 * v75; // 0x4d044a
    int64_t v90 = v89 + (int64_t)&g12; // 0x4d044e
    int64_t v91 = v32 + 176;
    int64_t v92 = (int32_t)&g12 ^ (int32_t)&g12; // 0x4d0453
    int64_t v93 = v92;
    char v94 = *(char *)(v90 + v93); // 0x4d0458
    int32_t v95; // 0x4d0463
    if (v94 != -1) {
        // 0x4d0463
        v95 = *(int32_t *)(4 * v93 + v91);
        *(int32_t *)(4 * (int64_t)v94 + v2) = v95;
    }
    // 0x4d046e
    v92 = v93 + 1;
    while (v93 != 19) {
        // 0x4d0458
        v93 = v92;
        v94 = *(char *)(v90 + v93);
        if (v94 != -1) {
            // 0x4d0463
            v95 = *(int32_t *)(4 * v93 + v91);
            *(int32_t *)(4 * (int64_t)v94 + v2) = v95;
        }
        // 0x4d046e
        v92 = v93 + 1;
    }
    if (v19 >= 129) {
        int64_t v96 = v76 + (int64_t)&g11 + 4;
        int64_t v97 = 15;
        uint32_t v98; // 0x4d0060
        uint32_t v99; // 0x4d04fe
        uint32_t v100; // 0x4d0504
        if (*(char *)v96 != 0) {
            // 0x4d04db
            v98 = (int32_t)v97;
            v99 = -v98 % 32;
            v100 = v98 % 32;
            *(int32_t *)v78 = v70 >> v99 ^ v51 << v100;
            *(int32_t *)(v78 | 4) = v54 >> v99 ^ v70 << v100;
            *(int32_t *)(v78 + 8) = v73 >> v99 ^ v54 << v100;
            *(int32_t *)(v78 + 12) = v51 >> v99 ^ v73 << v100;
        }
        int64_t v101 = v96 + 1; // 0x4d0579
        int64_t v102 = v78 + 16; // 0x4d0584
        int64_t v103 = v97 + 15 & 0xffffffff; // 0x4d0584
        while (v79 + (int32_t)&g11 + 8 != (int32_t)v101) {
            // 0x4d04d1
            v97 = v103;
            int64_t v104 = v102;
            if (*(char *)v101 != 0) {
                // 0x4d04db
                v98 = (int32_t)v97;
                v99 = -v98 % 32;
                v100 = v98 % 32;
                *(int32_t *)v104 = v70 >> v99 ^ v51 << v100;
                *(int32_t *)(v104 | 4) = v54 >> v99 ^ v70 << v100;
                *(int32_t *)(v104 + 8) = v73 >> v99 ^ v54 << v100;
                *(int32_t *)(v104 + 12) = v51 >> v99 ^ v73 << v100;
            }
            // 0x4d0576
            v101++;
            v102 = v104 + 16;
            v103 = v97 + 15 & 0xffffffff;
        }
        int64_t v105 = v89 + (int64_t)&g12 + 20; // 0x4d0590
        int64_t v106 = 0;
        char v107 = *(char *)(v105 + v106); // 0x4d0590
        int32_t v108; // 0x4d059c
        if (v107 != -1) {
            // 0x4d059c
            v108 = *(int32_t *)(4 * v106 + v91);
            *(int32_t *)(4 * (int64_t)v107 + v2) = v108;
        }
        int64_t v109 = v106 + 1; // 0x4d05a7
        while (v109 != 20) {
            // 0x4d0590
            v106 = v109;
            v107 = *(char *)(v105 + v106);
            if (v107 != -1) {
                // 0x4d059c
                v108 = *(int32_t *)(4 * v106 + v91);
                *(int32_t *)(4 * (int64_t)v107 + v2) = v108;
            }
            // 0x4d05a7
            v109 = v106 + 1;
        }
    }
    int64_t v110 = v76 + (int64_t)&g11 + 8;
    int64_t v111 = 15;
    uint32_t v112; // 0x4d0060
    uint32_t v113; // 0x4d062a
    uint32_t v114; // 0x4d0630
    if (*(char *)v110 != 0) {
        // 0x4d0607
        v112 = (int32_t)v111;
        v113 = -v112 % 32;
        v114 = v112 % 32;
        *(int32_t *)v78 = v71 >> v113 ^ v52 << v114;
        *(int32_t *)(v78 | 4) = v55 >> v113 ^ v71 << v114;
        *(int32_t *)(v78 + 8) = v74 >> v113 ^ v55 << v114;
        *(int32_t *)(v78 + 12) = v52 >> v113 ^ v74 << v114;
    }
    int64_t v115 = v110 + 1; // 0x4d06a5
    int64_t v116 = v78 + 16; // 0x4d06b0
    int64_t v117 = v111 + 15 & 0xffffffff; // 0x4d06b0
    while (v79 + (int32_t)&g11 + 12 != (int32_t)v115) {
        // 0x4d05fd
        v111 = v117;
        int64_t v118 = v116;
        if (*(char *)v115 != 0) {
            // 0x4d0607
            v112 = (int32_t)v111;
            v113 = -v112 % 32;
            v114 = v112 % 32;
            *(int32_t *)v118 = v71 >> v113 ^ v52 << v114;
            *(int32_t *)(v118 | 4) = v55 >> v113 ^ v71 << v114;
            *(int32_t *)(v118 + 8) = v74 >> v113 ^ v55 << v114;
            *(int32_t *)(v118 + 12) = v52 >> v113 ^ v74 << v114;
        }
        // 0x4d06a2
        v115++;
        v116 = v118 + 16;
        v117 = v111 + 15 & 0xffffffff;
    }
    int64_t v119 = v89 + (int64_t)&g12 + 40; // 0x4d06c0
    int64_t v120 = 0;
    char v121 = *(char *)(v119 + v120); // 0x4d06c0
    int32_t v122; // 0x4d06cc
    if (v121 != -1) {
        // 0x4d06cc
        v122 = *(int32_t *)(4 * v120 + v91);
        *(int32_t *)(4 * (int64_t)v121 + v2) = v122;
    }
    int64_t v123 = v120 + 1; // 0x4d06d7
    while (v123 != 20) {
        // 0x4d06c0
        v120 = v123;
        v121 = *(char *)(v119 + v120);
        if (v121 != -1) {
            // 0x4d06cc
            v122 = *(int32_t *)(4 * v120 + v91);
            *(int32_t *)(4 * (int64_t)v121 + v2) = v122;
        }
        // 0x4d06d7
        v123 = v120 + 1;
    }
    if (v19 >= 129) {
        int64_t v124 = v76 + (int64_t)&g11 + 12;
        int64_t v125 = 15;
        int32_t v126; // 0x4d0060
        int32_t v127; // 0x4d0060
        uint32_t v128; // 0x4d0060
        uint32_t v129; // 0x4d0760
        uint32_t v130; // 0x4d0766
        if (*(char *)v124 != 0) {
            // 0x4d0746
            v128 = (int32_t)v125;
            v129 = v128 % 32;
            v130 = -v128 % 32;
            *(int32_t *)v78 = v127 >> v130 ^ v58 << v129;
            *(int32_t *)(v78 | 4) = v66 >> v130 ^ v127 << v129;
            *(int32_t *)(v78 + 8) = v126 >> v130 ^ v66 << v129;
            *(int32_t *)(v78 + 12) = v58 >> v130 ^ v126 << v129;
        }
        int64_t v131 = v124 + 1; // 0x4d07e1
        int64_t v132 = v78 + 16; // 0x4d07ec
        int64_t v133 = v125 + 15 & 0xffffffff; // 0x4d07ec
        while (v79 + (int32_t)&g11 + 16 != (int32_t)v131) {
            // 0x4d073d
            v125 = v133;
            int64_t v134 = v132;
            if (*(char *)v131 != 0) {
                // 0x4d0746
                v128 = (int32_t)v125;
                v129 = v128 % 32;
                v130 = -v128 % 32;
                *(int32_t *)v134 = v127 >> v130 ^ v58 << v129;
                *(int32_t *)(v134 | 4) = v66 >> v130 ^ v127 << v129;
                *(int32_t *)(v134 + 8) = v126 >> v130 ^ v66 << v129;
                *(int32_t *)(v134 + 12) = v58 >> v130 ^ v126 << v129;
            }
            // 0x4d07de
            v131++;
            v132 = v134 + 16;
            v133 = v125 + 15 & 0xffffffff;
        }
        int64_t v135 = v89 + (int64_t)&g12 + 60; // 0x4d07f8
        int64_t v136 = 0;
        char v137 = *(char *)(v135 + v136); // 0x4d07f8
        int32_t v138; // 0x4d0803
        if (v137 != -1) {
            // 0x4d0803
            v138 = *(int32_t *)(4 * v136 + v91);
            *(int32_t *)(4 * (int64_t)v137 + v2) = v138;
        }
        int64_t v139 = v136 + 1; // 0x4d080e
        while (v139 != 20) {
            // 0x4d07f8
            v136 = v139;
            v137 = *(char *)(v135 + v136);
            if (v137 != -1) {
                // 0x4d0803
                v138 = *(int32_t *)(4 * v136 + v91);
                *(int32_t *)(4 * (int64_t)v137 + v2) = v138;
            }
            // 0x4d080e
            v139 = v136 + 1;
        }
    }
    int64_t v140 = 20 * v75 + (int64_t)&g13; // 0x4d082a
    int64_t v141 = (48 * v75 | 128) + v2;
    int64_t v142 = 0;
    char v143 = *(char *)(v140 + v142); // 0x4d0848
    int32_t v144; // 0x4d0852
    if (v143 != -1) {
        // 0x4d0852
        v144 = *(int32_t *)(4 * (int64_t)v143 + v2);
        *(int32_t *)(v141 + 4 * v142) = v144;
    }
    int64_t v145 = v142 + 1; // 0x4d085a
    while (v145 != 20) {
        // 0x4d0848
        v142 = v145;
        v143 = *(char *)(v140 + v142);
        if (v143 != -1) {
            // 0x4d0852
            v144 = *(int32_t *)(4 * (int64_t)v143 + v2);
            *(int32_t *)(v141 + 4 * v142) = v144;
        }
        // 0x4d085a
        v145 = v142 + 1;
    }
    // 0x4d0107
    return 0;
}

// Address range: 0x4d9310 - 0x4d9ea1
int64_t function_4d9310(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5) {
    int32_t v1 = *(int32_t *)(a2 + 16); // 0x4d9325
    int32_t v2 = *(int32_t *)(a2 + 20); // 0x4d9328
    int32_t v3 = *(int32_t *)(a2 + 24); // 0x4d932c
    int32_t v4 = *(int32_t *)(a2 + 28); // 0x4d9330
    int32_t v5 = *(int32_t *)(a2 + 32); // 0x4d9333
    int32_t v6 = *(int32_t *)(a2 + 36); // 0x4d9337
    int64_t v7; // 0x4d9310
    int32_t v8 = v7;
    int32_t v9 = *(int32_t *)(a2 + 40); // 0x4d9346
    int32_t v10 = *(int32_t *)(a2 + 44); // 0x4d9349
    int32_t v11 = *(int32_t *)(a2 + 4); // 0x4d934d
    int32_t v12 = *(int32_t *)(a2 + 48); // 0x4d9356
    int32_t v13 = *(int32_t *)(a2 + 8); // 0x4d935a
    int32_t v14 = *(int32_t *)(a2 + 52); // 0x4d9362
    int32_t v15 = *(int32_t *)(a2 + 12); // 0x4d9365
    int32_t v16 = *(int32_t *)(a2 + 56); // 0x4d936e
    int32_t v17 = *(int32_t *)(a2 + 60); // 0x4d9391
    int32_t * v18 = (int32_t *)(a1 + 20); // 0x4d9394
    int32_t v19 = *v18; // 0x4d9394
    int32_t * v20 = (int32_t *)(a1 + 24); // 0x4d9398
    int32_t v21 = *v20; // 0x4d9398
    int32_t * v22 = (int32_t *)(a1 + 16); // 0x4d93ac
    int32_t v23 = *v22; // 0x4d93ac
    int32_t * v24 = (int32_t *)(a1 + 28); // 0x4d93af
    int32_t v25 = *v24; // 0x4d93af
    int32_t v26 = v19 + v13 + *(int32_t *)(a1 + 4); // 0x4d93c6
    int32_t v27 = v8 + (int32_t)v7 + v23; // 0x4d93d7
    uint32_t v28 = v27 ^ (int32_t)a4; // 0x4d93de
    int32_t v29 = v28 / 0x10000 | 0x10000 * v28; // 0x4d93e4
    uint32_t v30 = v26 ^ (int32_t)(a4 / 0x100000000); // 0x4d93e7
    int32_t v31 = v29 + 0x6a09e667; // 0x4d93f1
    int32_t v32 = v30 / 0x10000 | 0x10000 * v30; // 0x4d93f7
    uint32_t v33 = v31 ^ v23; // 0x4d93fa
    int32_t v34 = v32 - 0x4498517b; // 0x4d93fc
    int32_t v35 = v33 / 0x1000 | 0x100000 * v33; // 0x4d9403
    uint32_t v36 = v34 ^ v19; // 0x4d9406
    int32_t v37 = v27 + v11 + v35; // 0x4d9409
    int32_t v38 = v36 / 0x1000 | 0x100000 * v36; // 0x4d940b
    uint32_t v39 = v37 ^ v29; // 0x4d940f
    int32_t v40 = v26 + v15 + v38; // 0x4d9411
    int32_t v41 = v39 / 256 | 0x1000000 * v39; // 0x4d9414
    uint32_t v42 = v40 ^ v32; // 0x4d9417
    int32_t v43 = v41 + v31; // 0x4d941a
    int32_t v44 = v42 / 256 | 0x1000000 * v42; // 0x4d941c
    uint32_t v45 = v43 ^ v35; // 0x4d941f
    int32_t v46 = v44 + v34; // 0x4d9425
    int32_t v47 = v45 / 128 | 0x2000000 * v45; // 0x4d9428
    uint32_t v48 = v46 ^ v38; // 0x4d942b
    int32_t v49 = v48 / 128 | 0x2000000 * v48; // 0x4d9434
    uint32_t v50 = v21 + v1 + *(int32_t *)(a1 + 8); // 0x4d943a
    int32_t v51 = 0x10000 * (v50 ^ (int32_t)a3 % 256) | v50 / 0x10000; // 0x4d9447
    int32_t v52 = v51 + 0x3c6ef372; // 0x4d944a
    uint32_t v53 = v52 ^ v21; // 0x4d9451
    int32_t v54 = v53 / 0x1000 | 0x100000 * v53; // 0x4d9454
    uint32_t v55 = v25 + v3 + *(int32_t *)(a1 + 12); // 0x4d945a
    int32_t v56 = v50 + v2 + v54; // 0x4d946c
    int32_t v57 = 0x10000 * (v55 ^ (int32_t)a5 % 256) | v55 / 0x10000; // 0x4d9473
    int32_t v58 = v37 + v5 + v49; // 0x4d9477
    uint32_t v59 = v56 ^ v51; // 0x4d947a
    int32_t v60 = v57 - 0x5ab00ac6; // 0x4d947d
    int32_t v61 = v59 / 256 | 0x1000000 * v59; // 0x4d9484
    uint32_t v62 = v60 ^ v25; // 0x4d9487
    int32_t v63 = v61 + v52; // 0x4d948a
    int32_t v64 = v62 / 0x1000 | 0x100000 * v62; // 0x4d948d
    uint32_t v65 = v63 ^ v54; // 0x4d9490
    int32_t v66 = v55 + v4 + v64; // 0x4d9493
    int32_t v67 = v65 / 128 | 0x2000000 * v65; // 0x4d9496
    uint32_t v68 = v66 ^ v57; // 0x4d9499
    int32_t v69 = v68 / 256 | 0x1000000 * v68; // 0x4d949c
    int32_t v70 = v69 + v60; // 0x4d94a0
    uint32_t v71 = v58 ^ v69; // 0x4d94a3
    int32_t v72 = v71 / 0x10000 | 0x10000 * v71; // 0x4d94aa
    uint32_t v73 = v70 ^ v64; // 0x4d94ae
    int32_t v74 = v72 + v63; // 0x4d94b1
    int32_t v75 = v73 / 128 | 0x2000000 * v73; // 0x4d94b4
    uint32_t v76 = v74 ^ v49; // 0x4d94b7
    int32_t v77 = v76 / 0x1000 | 0x100000 * v76; // 0x4d94ba
    int32_t v78 = v58 + v6 + v77; // 0x4d94be
    uint32_t v79 = v78 ^ v72; // 0x4d94c1
    int32_t v80 = v79 / 256 | 0x1000000 * v79; // 0x4d94c4
    int32_t v81 = v80 + v74; // 0x4d94c8
    int32_t v82 = v40 + v9 + v67; // 0x4d94da
    int32_t v83 = v56 + v12 + v75; // 0x4d94dd
    uint32_t v84 = v81 ^ v77; // 0x4d94e5
    uint32_t v85 = v82 ^ v41; // 0x4d94e8
    uint32_t v86 = v83 ^ v44; // 0x4d94eb
    int32_t v87 = v85 / 0x10000 | 0x10000 * v85; // 0x4d94f8
    int32_t v88 = v86 / 0x10000 | 0x10000 * v86; // 0x4d94fb
    int32_t v89 = v87 + v70; // 0x4d9503
    int32_t v90 = v88 + v43; // 0x4d9506
    int32_t v91 = v84 / 128 | 0x2000000 * v84; // 0x4d9509
    uint32_t v92 = v89 ^ v67; // 0x4d950d
    uint32_t v93 = v90 ^ v75; // 0x4d9510
    int32_t v94 = v92 / 0x1000 | 0x100000 * v92; // 0x4d9513
    int32_t v95 = v93 / 0x1000 | 0x100000 * v93; // 0x4d9516
    int32_t v96 = v82 + v10 + v94; // 0x4d9519
    int32_t v97 = v83 + v14 + v95; // 0x4d951c
    uint32_t v98 = v96 ^ v87; // 0x4d951f
    uint32_t v99 = v97 ^ v88; // 0x4d9522
    int32_t v100 = v98 / 256 | 0x1000000 * v98; // 0x4d9525
    int32_t v101 = v99 / 256 | 0x1000000 * v99; // 0x4d9528
    int32_t v102 = v100 + v89; // 0x4d952b
    int32_t v103 = v101 + v90; // 0x4d952e
    uint32_t v104 = v102 ^ v94; // 0x4d9531
    uint32_t v105 = v103 ^ v95; // 0x4d9534
    int32_t v106 = v104 / 128 | 0x2000000 * v104; // 0x4d9537
    int32_t v107 = v105 / 128 | 0x2000000 * v105; // 0x4d953a
    int32_t v108 = v66 + v16 + v47; // 0x4d953d
    uint32_t v109 = v108 ^ v61; // 0x4d9540
    int32_t v110 = v109 / 0x10000 | 0x10000 * v109; // 0x4d954c
    int32_t v111 = v110 + v46; // 0x4d9554
    int32_t v112 = v96 + v15 + v91; // 0x4d9557
    uint32_t v113 = v111 ^ v47; // 0x4d955a
    uint32_t v114 = v112 ^ v101; // 0x4d955d
    int32_t v115 = v113 / 0x1000 | 0x100000 * v113; // 0x4d9560
    int32_t v116 = v114 / 0x10000 | 0x10000 * v114; // 0x4d9563
    int32_t v117 = v108 + v17 + v115; // 0x4d9566
    uint32_t v118 = v117 ^ v110; // 0x4d9569
    int32_t v119 = v118 / 256 | 0x1000000 * v118; // 0x4d956c
    int32_t v120 = v119 + v111; // 0x4d956f
    uint32_t v121 = v120 ^ v115; // 0x4d9572
    int32_t v122 = v116 + v120; // 0x4d9575
    int32_t v123 = v121 / 128 | 0x2000000 * v121; // 0x4d9578
    int32_t v124 = v78 + v13 + v123; // 0x4d957b
    uint32_t v125 = v124 ^ v100; // 0x4d957d
    int32_t v126 = v125 / 0x10000 | 0x10000 * v125; // 0x4d9583
    int32_t v127 = v126 + v103; // 0x4d9586
    uint32_t v128 = v127 ^ v123; // 0x4d9589
    int32_t v129 = v128 / 0x1000 | 0x100000 * v128; // 0x4d958c
    int32_t v130 = v124 + v3 + v129; // 0x4d958f
    uint32_t v131 = v130 ^ v126; // 0x4d9591
    int32_t v132 = v131 / 256 | 0x1000000 * v131; // 0x4d9593
    int32_t v133 = v132 + v127; // 0x4d9596
    uint32_t v134 = v133 ^ v129; // 0x4d9599
    int32_t v135 = v134 / 128 | 0x2000000 * v134; // 0x4d959c
    uint32_t v136 = v122 ^ v91; // 0x4d959f
    int32_t v137 = v97 + v4 + v106; // 0x4d95ac
    int32_t v138 = v117 + v1 + v107; // 0x4d95b7
    uint32_t v139 = v137 ^ v119; // 0x4d95ba
    int32_t v140 = v136 / 0x1000 | 0x100000 * v136; // 0x4d95c7
    int32_t v141 = v139 / 0x10000 | 0x10000 * v139; // 0x4d95cb
    uint32_t v142 = v138 ^ v80; // 0x4d95ce
    int32_t v143 = v112 + v9 + v140; // 0x4d95d1
    int32_t v144 = v141 + v81; // 0x4d95d9
    int32_t v145 = v142 / 0x10000 | 0x10000 * v142; // 0x4d95dc
    uint32_t v146 = v143 ^ v116; // 0x4d95df
    uint32_t v147 = v144 ^ v106; // 0x4d95e2
    int32_t v148 = v145 + v102; // 0x4d95e5
    int32_t v149 = v146 / 256 | 0x1000000 * v146; // 0x4d95e8
    int32_t v150 = v147 / 0x1000 | 0x100000 * v147; // 0x4d95eb
    uint32_t v151 = v148 ^ v107; // 0x4d95ee
    int32_t v152 = v149 + v122; // 0x4d95f1
    int32_t v153 = v137 + v8 + v150; // 0x4d95f4
    int32_t v154 = v151 / 0x1000 | 0x100000 * v151; // 0x4d95f7
    uint32_t v155 = v152 ^ v140; // 0x4d95fa
    uint32_t v156 = v153 ^ v141; // 0x4d95fd
    int32_t v157 = v138 + v14 + v154; // 0x4d9600
    int32_t v158 = v155 / 128 | 0x2000000 * v155; // 0x4d9603
    int32_t v159 = v156 / 256 | 0x1000000 * v156; // 0x4d9607
    int32_t v160 = v159 + v144; // 0x4d960a
    uint32_t v161 = v160 ^ v150; // 0x4d960d
    int32_t v162 = v161 / 128 | 0x2000000 * v161; // 0x4d9610
    uint32_t v163 = v157 ^ v145; // 0x4d9613
    int32_t v164 = v130 + v11 + v158; // 0x4d961f
    int32_t v165 = v143 + v12 + v162; // 0x4d9622
    int32_t v166 = v163 / 256 | 0x1000000 * v163; // 0x4d9625
    int32_t v167 = v166 + v148; // 0x4d9628
    uint32_t v168 = v165 ^ v132; // 0x4d962b
    uint32_t v169 = v164 ^ v166; // 0x4d962e
    int32_t v170 = v169 / 0x10000 | 0x10000 * v169; // 0x4d9635
    int32_t v171 = v168 / 0x10000 | 0x10000 * v168; // 0x4d9638
    uint32_t v172 = v167 ^ v154; // 0x4d963b
    int32_t v173 = v170 + v160; // 0x4d9642
    int32_t v174 = v171 + v167; // 0x4d9645
    int32_t v175 = v172 / 128 | 0x2000000 * v172; // 0x4d9648
    uint32_t v176 = v173 ^ v158; // 0x4d964b
    uint32_t v177 = v174 ^ v162; // 0x4d964e
    int32_t v178 = v176 / 0x1000 | 0x100000 * v176; // 0x4d9651
    int32_t v179 = v177 / 0x1000 | 0x100000 * v177; // 0x4d9655
    int32_t v180 = v164 + v10 + v178; // 0x4d9658
    int32_t v181 = v165 + v2 + v179; // 0x4d965b
    uint32_t v182 = v180 ^ v170; // 0x4d965e
    uint32_t v183 = v181 ^ v171; // 0x4d9660
    int32_t v184 = v182 / 256 | 0x1000000 * v182; // 0x4d9663
    int32_t v185 = v183 / 256 | 0x1000000 * v183; // 0x4d9666
    int32_t v186 = v184 + v173; // 0x4d9669
    int32_t v187 = v185 + v174; // 0x4d966c
    uint32_t v188 = v186 ^ v178; // 0x4d9677
    uint32_t v189 = v187 ^ v179; // 0x4d967a
    int32_t v190 = v188 / 128 | 0x2000000 * v188; // 0x4d967d
    int32_t v191 = v189 / 128 | 0x2000000 * v189; // 0x4d9681
    int32_t v192 = v157 + v17 + v135; // 0x4d968d
    uint32_t v193 = v192 ^ v159; // 0x4d9695
    int32_t v194 = v153 + v6 + v175; // 0x4d9698
    int32_t v195 = v193 / 0x10000 | 0x10000 * v193; // 0x4d96a0
    uint32_t v196 = v194 ^ v149; // 0x4d96a3
    int32_t v197 = v195 + v152; // 0x4d96ab
    int32_t v198 = v196 / 0x10000 | 0x10000 * v196; // 0x4d96ae
    uint32_t v199 = v197 ^ v135; // 0x4d96b1
    int32_t v200 = v198 + v133; // 0x4d96b4
    int32_t v201 = v199 / 0x1000 | 0x100000 * v199; // 0x4d96b7
    uint32_t v202 = v200 ^ v175; // 0x4d96ba
    int32_t v203 = v192 + v5 + v201; // 0x4d96bd
    int32_t v204 = v202 / 0x1000 | 0x100000 * v202; // 0x4d96c0
    uint32_t v205 = v203 ^ v195; // 0x4d96c3
    int32_t v206 = v194 + v16 + v204; // 0x4d96c6
    int32_t v207 = v205 / 256 | 0x1000000 * v205; // 0x4d96c9
    uint32_t v208 = v206 ^ v198; // 0x4d96cc
    int32_t v209 = v207 + v197; // 0x4d96cf
    int32_t v210 = v208 / 256 | 0x1000000 * v208; // 0x4d96d2
    uint32_t v211 = v209 ^ v201; // 0x4d96d5
    int32_t v212 = v210 + v200; // 0x4d96d8
    int32_t v213 = v211 / 128 | 0x2000000 * v211; // 0x4d96db
    uint32_t v214 = v212 ^ v204; // 0x4d96de
    int32_t v215 = v180 + v15 + v213; // 0x4d96e1
    int32_t v216 = v214 / 128 | 0x2000000 * v214; // 0x4d96e3
    uint32_t v217 = v215 ^ v185; // 0x4d96e6
    int32_t v218 = v217 / 0x10000 | 0x10000 * v217; // 0x4d96e8
    int32_t v219 = v181 + v9 + v190; // 0x4d96f4
    int32_t v220 = v218 + v212; // 0x4d96f7
    uint32_t v221 = v219 ^ v210; // 0x4d96ff
    uint32_t v222 = v220 ^ v213; // 0x4d9702
    int32_t v223 = v206 + v14 + v191; // 0x4d970a
    int32_t v224 = v221 / 0x10000 | 0x10000 * v221; // 0x4d970d
    int32_t v225 = v222 / 0x1000 | 0x100000 * v222; // 0x4d9710
    uint32_t v226 = v223 ^ v207; // 0x4d9713
    int32_t v227 = v224 + v209; // 0x4d9716
    int32_t v228 = v215 + v1 + v225; // 0x4d9719
    int32_t v229 = v226 / 0x10000 | 0x10000 * v226; // 0x4d971b
    uint32_t v230 = v227 ^ v190; // 0x4d971e
    uint32_t v231 = v228 ^ v218; // 0x4d9721
    int32_t v232 = v229 + v186; // 0x4d9723
    int32_t v233 = v230 / 0x1000 | 0x100000 * v230; // 0x4d9726
    int32_t v234 = v231 / 256 | 0x1000000 * v231; // 0x4d972a
    uint32_t v235 = v232 ^ v191; // 0x4d972d
    int32_t v236 = v219 + v12 + v233; // 0x4d9730
    int32_t v237 = v234 + v220; // 0x4d9733
    int32_t v238 = v235 / 0x1000 | 0x100000 * v235; // 0x4d9736
    uint32_t v239 = v236 ^ v224; // 0x4d9739
    uint32_t v240 = v237 ^ v225; // 0x4d973c
    int32_t v241 = v239 / 256 | 0x1000000 * v239; // 0x4d973f
    int32_t v242 = v240 / 128 | 0x2000000 * v240; // 0x4d9742
    int32_t v243 = v241 + v227; // 0x4d9745
    uint32_t v244 = v243 ^ v233; // 0x4d9750
    int32_t v245 = v244 / 128 | 0x2000000 * v244; // 0x4d9753
    int32_t v246 = v203 + v4 + v216; // 0x4d9761
    int32_t v247 = v223 + v13 + v238; // 0x4d9764
    uint32_t v248 = v246 ^ v184; // 0x4d976b
    int32_t v249 = v228 + v3 + v245; // 0x4d9773
    uint32_t v250 = v247 ^ v229; // 0x4d9776
    int32_t v251 = v248 / 0x10000 | 0x10000 * v248; // 0x4d9779
    int32_t v252 = v250 / 256 | 0x1000000 * v250; // 0x4d977c
    int32_t v253 = v251 + v187; // 0x4d977f
    int32_t v254 = v252 + v232; // 0x4d9782
    uint32_t v255 = v253 ^ v216; // 0x4d9785
    uint32_t v256 = v254 ^ v238; // 0x4d9788
    int32_t v257 = v255 / 0x1000 | 0x100000 * v255; // 0x4d978b
    int32_t v258 = v256 / 128 | 0x2000000 * v256; // 0x4d978e
    int32_t v259 = v246 + v16 + v257; // 0x4d9791
    uint32_t v260 = v259 ^ v251; // 0x4d9794
    int32_t v261 = v260 / 256 | 0x1000000 * v260; // 0x4d9797
    int32_t v262 = v261 + v253; // 0x4d979a
    uint32_t v263 = v249 ^ v261; // 0x4d979d
    int32_t v264 = v263 / 0x10000 | 0x10000 * v263; // 0x4d97a3
    uint32_t v265 = v262 ^ v257; // 0x4d97a6
    int32_t v266 = v264 + v254; // 0x4d97a9
    int32_t v267 = v265 / 128 | 0x2000000 * v265; // 0x4d97ac
    uint32_t v268 = v266 ^ v245; // 0x4d97af
    int32_t v269 = v268 / 0x1000 | 0x100000 * v268; // 0x4d97b2
    int32_t v270 = v249 + v2 + v269; // 0x4d97b6
    uint32_t v271 = v270 ^ v264; // 0x4d97b9
    int32_t v272 = v271 / 256 | 0x1000000 * v271; // 0x4d97bb
    int32_t v273 = v272 + v266; // 0x4d97c2
    int32_t v274 = v236 + v6 + v258; // 0x4d97cf
    uint32_t v275 = v273 ^ v269; // 0x4d97d6
    int32_t v276 = v247 + v10 + v267; // 0x4d97d9
    uint32_t v277 = v274 ^ v234; // 0x4d97dc
    int32_t v278 = v277 / 0x10000 | 0x10000 * v277; // 0x4d97e9
    uint32_t v279 = v276 ^ v241; // 0x4d97ec
    int32_t v280 = v275 / 128 | 0x2000000 * v275; // 0x4d97f4
    int32_t v281 = v279 / 0x10000 | 0x10000 * v279; // 0x4d97f8
    int32_t v282 = v278 + v262; // 0x4d97fb
    int32_t v283 = v281 + v237; // 0x4d97fe
    uint32_t v284 = v282 ^ v258; // 0x4d9801
    uint32_t v285 = v283 ^ v267; // 0x4d9804
    int32_t v286 = v284 / 0x1000 | 0x100000 * v284; // 0x4d9807
    int32_t v287 = v285 / 0x1000 | 0x100000 * v285; // 0x4d980a
    int32_t v288 = v274 + v8 + v286; // 0x4d980d
    int32_t v289 = v276 + v17 + v287; // 0x4d9810
    uint32_t v290 = v288 ^ v278; // 0x4d9813
    uint32_t v291 = v289 ^ v281; // 0x4d9816
    int32_t v292 = v290 / 256 | 0x1000000 * v290; // 0x4d9819
    int32_t v293 = v291 / 256 | 0x1000000 * v291; // 0x4d981c
    int32_t v294 = v292 + v282; // 0x4d981f
    int32_t v295 = v293 + v283; // 0x4d9822
    uint32_t v296 = v294 ^ v286; // 0x4d9825
    uint32_t v297 = v295 ^ v287; // 0x4d9828
    int32_t v298 = v296 / 128 | 0x2000000 * v296; // 0x4d982b
    int32_t v299 = v297 / 128 | 0x2000000 * v297; // 0x4d982e
    int32_t v300 = v259 + v5 + v242; // 0x4d9831
    uint32_t v301 = v300 ^ v252; // 0x4d983d
    int32_t v302 = v288 + v12 + v280; // 0x4d9845
    int32_t v303 = v301 / 0x10000 | 0x10000 * v301; // 0x4d9848
    uint32_t v304 = v302 ^ v293; // 0x4d984b
    int32_t v305 = v303 + v243; // 0x4d984e
    int32_t v306 = v304 / 0x10000 | 0x10000 * v304; // 0x4d9851
    uint32_t v307 = v305 ^ v242; // 0x4d9854
    int32_t v308 = v307 / 0x1000 | 0x100000 * v307; // 0x4d9857
    int32_t v309 = v300 + v11 + v308; // 0x4d985a
    uint32_t v310 = v309 ^ v303; // 0x4d985d
    int32_t v311 = v310 / 256 | 0x1000000 * v310; // 0x4d9860
    int32_t v312 = v311 + v305; // 0x4d9863
    uint32_t v313 = v312 ^ v308; // 0x4d9866
    int32_t v314 = v306 + v312; // 0x4d9869
    int32_t v315 = v313 / 128 | 0x2000000 * v313; // 0x4d986c
    int32_t v316 = v270 + v9 + v315; // 0x4d986f
    uint32_t v317 = v316 ^ v292; // 0x4d9871
    int32_t v318 = v317 / 0x10000 | 0x10000 * v317; // 0x4d9877
    int32_t v319 = v318 + v295; // 0x4d987a
    uint32_t v320 = v319 ^ v315; // 0x4d987d
    int32_t v321 = v320 / 0x1000 | 0x100000 * v320; // 0x4d9880
    int32_t v322 = v316 + v4 + v321; // 0x4d9883
    uint32_t v323 = v322 ^ v318; // 0x4d9885
    int32_t v324 = v323 / 256 | 0x1000000 * v323; // 0x4d9887
    int32_t v325 = v324 + v319; // 0x4d988a
    uint32_t v326 = v325 ^ v321; // 0x4d988d
    int32_t v327 = v326 / 128 | 0x2000000 * v326; // 0x4d9890
    uint32_t v328 = v314 ^ v280; // 0x4d9893
    int32_t v329 = v289 + v16 + v298; // 0x4d98a0
    int32_t v330 = v309 + v14 + v299; // 0x4d98ab
    uint32_t v331 = v329 ^ v311; // 0x4d98ae
    int32_t v332 = v328 / 0x1000 | 0x100000 * v328; // 0x4d98bb
    int32_t v333 = v331 / 0x10000 | 0x10000 * v331; // 0x4d98bf
    uint32_t v334 = v330 ^ v272; // 0x4d98c2
    int32_t v335 = v302 + v6 + v332; // 0x4d98c5
    int32_t v336 = v333 + v273; // 0x4d98cd
    int32_t v337 = v334 / 0x10000 | 0x10000 * v334; // 0x4d98d0
    uint32_t v338 = v335 ^ v306; // 0x4d98d3
    uint32_t v339 = v336 ^ v298; // 0x4d98d6
    int32_t v340 = v337 + v294; // 0x4d98d9
    int32_t v341 = v338 / 256 | 0x1000000 * v338; // 0x4d98dc
    int32_t v342 = v339 / 0x1000 | 0x100000 * v339; // 0x4d98df
    uint32_t v343 = v340 ^ v299; // 0x4d98e2
    int32_t v344 = v341 + v314; // 0x4d98e5
    int32_t v345 = v329 + v15 + v342; // 0x4d98e8
    int32_t v346 = v343 / 0x1000 | 0x100000 * v343; // 0x4d98eb
    uint32_t v347 = v344 ^ v332; // 0x4d98ee
    uint32_t v348 = v345 ^ v333; // 0x4d98f1
    int32_t v349 = v330 + v17 + v346; // 0x4d98f4
    int32_t v350 = v347 / 128 | 0x2000000 * v347; // 0x4d98f7
    int32_t v351 = v348 / 256 | 0x1000000 * v348; // 0x4d98fb
    int32_t v352 = v351 + v336; // 0x4d98fe
    uint32_t v353 = v352 ^ v342; // 0x4d9901
    int32_t v354 = v353 / 128 | 0x2000000 * v353; // 0x4d9904
    uint32_t v355 = v349 ^ v337; // 0x4d9907
    int32_t v356 = v322 + v1 + v350; // 0x4d9913
    int32_t v357 = v335 + v10 + v354; // 0x4d9916
    int32_t v358 = v355 / 256 | 0x1000000 * v355; // 0x4d9919
    int32_t v359 = v358 + v340; // 0x4d991c
    uint32_t v360 = v357 ^ v324; // 0x4d991f
    uint32_t v361 = v356 ^ v358; // 0x4d9922
    int32_t v362 = v361 / 0x10000 | 0x10000 * v361; // 0x4d9929
    int32_t v363 = v360 / 0x10000 | 0x10000 * v360; // 0x4d992c
    uint32_t v364 = v359 ^ v346; // 0x4d992f
    int32_t v365 = v362 + v352; // 0x4d9936
    int32_t v366 = v363 + v359; // 0x4d9939
    int32_t v367 = v364 / 128 | 0x2000000 * v364; // 0x4d993c
    uint32_t v368 = v365 ^ v350; // 0x4d993f
    uint32_t v369 = v366 ^ v354; // 0x4d9942
    int32_t v370 = v368 / 0x1000 | 0x100000 * v368; // 0x4d9945
    int32_t v371 = v369 / 0x1000 | 0x100000 * v369; // 0x4d9949
    int32_t v372 = v356 + v8 + v370; // 0x4d994c
    int32_t v373 = v357 + v13 + v371; // 0x4d994f
    uint32_t v374 = v372 ^ v362; // 0x4d9952
    uint32_t v375 = v373 ^ v363; // 0x4d9954
    int32_t v376 = v374 / 256 | 0x1000000 * v374; // 0x4d9957
    int32_t v377 = v375 / 256 | 0x1000000 * v375; // 0x4d995a
    int32_t v378 = v376 + v365; // 0x4d995d
    int32_t v379 = v377 + v366; // 0x4d9960
    uint32_t v380 = v378 ^ v370; // 0x4d996b
    uint32_t v381 = v379 ^ v371; // 0x4d996e
    int32_t v382 = v380 / 128 | 0x2000000 * v380; // 0x4d9971
    int32_t v383 = v381 / 128 | 0x2000000 * v381; // 0x4d9975
    int32_t v384 = v349 + v11 + v327; // 0x4d9981
    uint32_t v385 = v384 ^ v351; // 0x4d9989
    int32_t v386 = v345 + v2 + v367; // 0x4d998c
    int32_t v387 = v385 / 0x10000 | 0x10000 * v385; // 0x4d9994
    uint32_t v388 = v386 ^ v341; // 0x4d9997
    int32_t v389 = v387 + v344; // 0x4d999f
    int32_t v390 = v388 / 0x10000 | 0x10000 * v388; // 0x4d99a2
    uint32_t v391 = v389 ^ v327; // 0x4d99a5
    int32_t v392 = v390 + v325; // 0x4d99a8
    int32_t v393 = v391 / 0x1000 | 0x100000 * v391; // 0x4d99ab
    uint32_t v394 = v392 ^ v367; // 0x4d99ae
    int32_t v395 = v384 + v3 + v393; // 0x4d99b1
    int32_t v396 = v394 / 0x1000 | 0x100000 * v394; // 0x4d99b4
    uint32_t v397 = v395 ^ v387; // 0x4d99b7
    int32_t v398 = v386 + v5 + v396; // 0x4d99ba
    int32_t v399 = v397 / 256 | 0x1000000 * v397; // 0x4d99bd
    uint32_t v400 = v398 ^ v390; // 0x4d99c0
    int32_t v401 = v399 + v389; // 0x4d99c3
    int32_t v402 = v400 / 256 | 0x1000000 * v400; // 0x4d99c6
    uint32_t v403 = v401 ^ v393; // 0x4d99c9
    int32_t v404 = v402 + v392; // 0x4d99cc
    int32_t v405 = v403 / 128 | 0x2000000 * v403; // 0x4d99cf
    uint32_t v406 = v404 ^ v396; // 0x4d99d2
    int32_t v407 = v372 + v12 + v405; // 0x4d99d5
    int32_t v408 = v406 / 128 | 0x2000000 * v406; // 0x4d99d7
    uint32_t v409 = v407 ^ v377; // 0x4d99da
    int32_t v410 = v409 / 0x10000 | 0x10000 * v409; // 0x4d99dc
    int32_t v411 = v410 + v404; // 0x4d99e8
    int32_t v412 = v373 + v6 + v382; // 0x4d99eb
    uint32_t v413 = v411 ^ v405; // 0x4d99ee
    uint32_t v414 = v412 ^ v402; // 0x4d99f1
    int32_t v415 = v413 / 0x1000 | 0x100000 * v413; // 0x4d99f9
    int32_t v416 = v414 / 0x10000 | 0x10000 * v414; // 0x4d99fc
    int32_t v417 = v407 + v14 + v415; // 0x4d99ff
    int32_t v418 = v416 + v401; // 0x4d9a01
    uint32_t v419 = v417 ^ v410; // 0x4d9a04
    uint32_t v420 = v418 ^ v382; // 0x4d9a06
    int32_t v421 = v419 / 256 | 0x1000000 * v419; // 0x4d9a09
    int32_t v422 = v420 / 0x1000 | 0x100000 * v420; // 0x4d9a0c
    int32_t v423 = v421 + v411; // 0x4d9a10
    int32_t v424 = v412 + v10 + v422; // 0x4d9a13
    uint32_t v425 = v423 ^ v415; // 0x4d9a16
    uint32_t v426 = v424 ^ v416; // 0x4d9a19
    int32_t v427 = v425 / 128 | 0x2000000 * v425; // 0x4d9a1c
    int32_t v428 = v426 / 256 | 0x1000000 * v426; // 0x4d9a1f
    int32_t v429 = v428 + v418; // 0x4d9a2b
    int32_t v430 = v398 + v17 + v383; // 0x4d9a2e
    uint32_t v431 = v429 ^ v422; // 0x4d9a31
    uint32_t v432 = v430 ^ v399; // 0x4d9a38
    int32_t v433 = v431 / 128 | 0x2000000 * v431; // 0x4d9a3b
    int32_t v434 = v432 / 0x10000 | 0x10000 * v432; // 0x4d9a3f
    int32_t v435 = v434 + v378; // 0x4d9a42
    uint32_t v436 = v435 ^ v383; // 0x4d9a45
    int32_t v437 = v436 / 0x1000 | 0x100000 * v436; // 0x4d9a48
    int32_t v438 = v395 + v16 + v408; // 0x4d9a55
    int32_t v439 = v430 + v9 + v437; // 0x4d9a58
    uint32_t v440 = v438 ^ v376; // 0x4d9a5f
    int32_t v441 = v417 + v4 + v433; // 0x4d9a67
    uint32_t v442 = v439 ^ v434; // 0x4d9a6a
    int32_t v443 = v440 / 0x10000 | 0x10000 * v440; // 0x4d9a6d
    int32_t v444 = v442 / 256 | 0x1000000 * v442; // 0x4d9a70
    int32_t v445 = v443 + v379; // 0x4d9a73
    int32_t v446 = v444 + v435; // 0x4d9a76
    uint32_t v447 = v445 ^ v408; // 0x4d9a79
    uint32_t v448 = v446 ^ v437; // 0x4d9a7c
    int32_t v449 = v447 / 0x1000 | 0x100000 * v447; // 0x4d9a7f
    int32_t v450 = v448 / 128 | 0x2000000 * v448; // 0x4d9a82
    int32_t v451 = v438 + v5 + v449; // 0x4d9a85
    uint32_t v452 = v451 ^ v443; // 0x4d9a88
    int32_t v453 = v452 / 256 | 0x1000000 * v452; // 0x4d9a8b
    int32_t v454 = v453 + v445; // 0x4d9a8e
    uint32_t v455 = v441 ^ v453; // 0x4d9a91
    int32_t v456 = v455 / 0x10000 | 0x10000 * v455; // 0x4d9a97
    uint32_t v457 = v454 ^ v449; // 0x4d9a9a
    int32_t v458 = v456 + v446; // 0x4d9a9d
    int32_t v459 = v457 / 128 | 0x2000000 * v457; // 0x4d9aa0
    uint32_t v460 = v458 ^ v433; // 0x4d9aa3
    int32_t v461 = v460 / 0x1000 | 0x100000 * v460; // 0x4d9aa6
    int32_t v462 = v441 + v13 + v461; // 0x4d9aaa
    uint32_t v463 = v462 ^ v456; // 0x4d9aad
    int32_t v464 = v463 / 256 | 0x1000000 * v463; // 0x4d9aaf
    int32_t v465 = v464 + v458; // 0x4d9ab2
    int32_t v466 = v424 + v2 + v450; // 0x4d9ac3
    int32_t v467 = v439 + v8 + v459; // 0x4d9ac6
    uint32_t v468 = v465 ^ v461; // 0x4d9acd
    uint32_t v469 = v466 ^ v421; // 0x4d9ad0
    uint32_t v470 = v467 ^ v428; // 0x4d9ad3
    int32_t v471 = v469 / 0x10000 | 0x10000 * v469; // 0x4d9ae0
    int32_t v472 = v470 / 0x10000 | 0x10000 * v470; // 0x4d9ae3
    int32_t v473 = v471 + v454; // 0x4d9aeb
    int32_t v474 = v472 + v423; // 0x4d9aee
    int32_t v475 = v468 / 128 | 0x2000000 * v468; // 0x4d9af1
    uint32_t v476 = v473 ^ v450; // 0x4d9af5
    uint32_t v477 = v474 ^ v459; // 0x4d9af8
    int32_t v478 = v476 / 0x1000 | 0x100000 * v476; // 0x4d9afb
    int32_t v479 = v477 / 0x1000 | 0x100000 * v477; // 0x4d9afe
    int32_t v480 = v466 + v15 + v478; // 0x4d9b01
    int32_t v481 = v467 + v11 + v479; // 0x4d9b04
    uint32_t v482 = v480 ^ v471; // 0x4d9b07
    uint32_t v483 = v481 ^ v472; // 0x4d9b0a
    int32_t v484 = v482 / 256 | 0x1000000 * v482; // 0x4d9b0d
    int32_t v485 = v483 / 256 | 0x1000000 * v483; // 0x4d9b10
    int32_t v486 = v484 + v473; // 0x4d9b13
    int32_t v487 = v485 + v474; // 0x4d9b16
    uint32_t v488 = v486 ^ v478; // 0x4d9b19
    uint32_t v489 = v487 ^ v479; // 0x4d9b1c
    int32_t v490 = v488 / 128 | 0x2000000 * v488; // 0x4d9b1f
    int32_t v491 = v489 / 128 | 0x2000000 * v489; // 0x4d9b22
    int32_t v492 = v451 + v3 + v427; // 0x4d9b25
    uint32_t v493 = v492 ^ v444; // 0x4d9b2c
    int32_t v494 = v493 / 0x10000 | 0x10000 * v493; // 0x4d9b39
    int32_t v495 = v480 + v10 + v475; // 0x4d9b3c
    int32_t v496 = v494 + v429; // 0x4d9b3f
    uint32_t v497 = v495 ^ v485; // 0x4d9b42
    uint32_t v498 = v496 ^ v427; // 0x4d9b45
    int32_t v499 = v497 / 0x10000 | 0x10000 * v497; // 0x4d9b48
    int32_t v500 = v498 / 0x1000 | 0x100000 * v498; // 0x4d9b4b
    int32_t v501 = v492 + v1 + v500; // 0x4d9b4e
    uint32_t v502 = v501 ^ v494; // 0x4d9b51
    int32_t v503 = v502 / 256 | 0x1000000 * v502; // 0x4d9b54
    int32_t v504 = v503 + v496; // 0x4d9b57
    uint32_t v505 = v504 ^ v500; // 0x4d9b5a
    int32_t v506 = v499 + v504; // 0x4d9b5d
    int32_t v507 = v505 / 128 | 0x2000000 * v505; // 0x4d9b60
    int32_t v508 = v462 + v6 + v507; // 0x4d9b63
    uint32_t v509 = v508 ^ v484; // 0x4d9b65
    int32_t v510 = v509 / 0x10000 | 0x10000 * v509; // 0x4d9b6b
    int32_t v511 = v510 + v487; // 0x4d9b6e
    uint32_t v512 = v511 ^ v507; // 0x4d9b71
    int32_t v513 = v512 / 0x1000 | 0x100000 * v512; // 0x4d9b74
    int32_t v514 = v508 + v16 + v513; // 0x4d9b77
    uint32_t v515 = v514 ^ v510; // 0x4d9b79
    int32_t v516 = v515 / 256 | 0x1000000 * v515; // 0x4d9b7b
    int32_t v517 = v516 + v511; // 0x4d9b7e
    uint32_t v518 = v517 ^ v513; // 0x4d9b81
    int32_t v519 = v518 / 128 | 0x2000000 * v518; // 0x4d9b84
    uint32_t v520 = v506 ^ v475; // 0x4d9b87
    int32_t v521 = v481 + v5 + v490; // 0x4d9b94
    int32_t v522 = v501 + v17 + v491; // 0x4d9b9f
    uint32_t v523 = v521 ^ v503; // 0x4d9ba2
    int32_t v524 = v520 / 0x1000 | 0x100000 * v520; // 0x4d9baf
    int32_t v525 = v523 / 0x10000 | 0x10000 * v523; // 0x4d9bb3
    uint32_t v526 = v522 ^ v464; // 0x4d9bb6
    int32_t v527 = v495 + v2 + v524; // 0x4d9bb9
    int32_t v528 = v525 + v465; // 0x4d9bc1
    int32_t v529 = v526 / 0x10000 | 0x10000 * v526; // 0x4d9bc4
    uint32_t v530 = v527 ^ v499; // 0x4d9bc7
    uint32_t v531 = v528 ^ v490; // 0x4d9bca
    int32_t v532 = v529 + v486; // 0x4d9bcd
    int32_t v533 = v530 / 256 | 0x1000000 * v530; // 0x4d9bd0
    int32_t v534 = v531 / 0x1000 | 0x100000 * v531; // 0x4d9bd3
    uint32_t v535 = v532 ^ v491; // 0x4d9bd6
    int32_t v536 = v533 + v506; // 0x4d9bd9
    int32_t v537 = v521 + v12 + v534; // 0x4d9bdc
    int32_t v538 = v535 / 0x1000 | 0x100000 * v535; // 0x4d9bdf
    uint32_t v539 = v536 ^ v524; // 0x4d9be2
    uint32_t v540 = v537 ^ v525; // 0x4d9be5
    int32_t v541 = v522 + v11 + v538; // 0x4d9be8
    int32_t v542 = v539 / 128 | 0x2000000 * v539; // 0x4d9beb
    int32_t v543 = v540 / 256 | 0x1000000 * v540; // 0x4d9bef
    int32_t v544 = v543 + v528; // 0x4d9bf2
    uint32_t v545 = v544 ^ v534; // 0x4d9bf5
    int32_t v546 = v545 / 128 | 0x2000000 * v545; // 0x4d9bf8
    uint32_t v547 = v541 ^ v529; // 0x4d9bfb
    int32_t v548 = v514 + v14 + v542; // 0x4d9c07
    int32_t v549 = v527 + v8 + v546; // 0x4d9c0a
    int32_t v550 = v547 / 256 | 0x1000000 * v547; // 0x4d9c0d
    int32_t v551 = v550 + v532; // 0x4d9c10
    uint32_t v552 = v549 ^ v516; // 0x4d9c13
    uint32_t v553 = v548 ^ v550; // 0x4d9c16
    int32_t v554 = v553 / 0x10000 | 0x10000 * v553; // 0x4d9c1d
    int32_t v555 = v552 / 0x10000 | 0x10000 * v552; // 0x4d9c20
    uint32_t v556 = v551 ^ v538; // 0x4d9c23
    int32_t v557 = v554 + v544; // 0x4d9c2a
    int32_t v558 = v555 + v551; // 0x4d9c2d
    int32_t v559 = v556 / 128 | 0x2000000 * v556; // 0x4d9c30
    uint32_t v560 = v557 ^ v542; // 0x4d9c33
    uint32_t v561 = v558 ^ v546; // 0x4d9c36
    int32_t v562 = v560 / 0x1000 | 0x100000 * v560; // 0x4d9c39
    int32_t v563 = v561 / 0x1000 | 0x100000 * v561; // 0x4d9c3d
    int32_t v564 = v548 + v15 + v562; // 0x4d9c40
    int32_t v565 = v549 + v9 + v563; // 0x4d9c43
    uint32_t v566 = v564 ^ v554; // 0x4d9c46
    uint32_t v567 = v565 ^ v555; // 0x4d9c48
    int32_t v568 = v566 / 256 | 0x1000000 * v566; // 0x4d9c4b
    int32_t v569 = v567 / 256 | 0x1000000 * v567; // 0x4d9c4e
    int32_t v570 = v568 + v557; // 0x4d9c51
    int32_t v571 = v569 + v558; // 0x4d9c54
    uint32_t v572 = v570 ^ v562; // 0x4d9c5b
    uint32_t v573 = v571 ^ v563; // 0x4d9c5e
    int32_t v574 = v572 / 128 | 0x2000000 * v572; // 0x4d9c61
    int32_t v575 = v573 / 128 | 0x2000000 * v573; // 0x4d9c65
    int32_t v576 = v537 + v13 + v559; // 0x4d9c6d
    uint32_t v577 = v576 ^ v533; // 0x4d9c70
    int32_t v578 = v577 / 0x10000 | 0x10000 * v577; // 0x4d9c81
    int32_t v579 = v578 + v517; // 0x4d9c88
    int32_t v580 = v541 + v1 + v519; // 0x4d9c8b
    uint32_t v581 = v579 ^ v559; // 0x4d9c8e
    uint32_t v582 = v580 ^ v543; // 0x4d9c91
    int32_t v583 = v581 / 0x1000 | 0x100000 * v581; // 0x4d9c99
    int32_t v584 = v582 / 0x10000 | 0x10000 * v582; // 0x4d9c9c
    int32_t v585 = v576 + v3 + v583; // 0x4d9c9f
    int32_t v586 = v584 + v536; // 0x4d9ca2
    uint32_t v587 = v585 ^ v578; // 0x4d9ca5
    uint32_t v588 = v586 ^ v519; // 0x4d9ca8
    int32_t v589 = v587 / 256 | 0x1000000 * v587; // 0x4d9cab
    int32_t v590 = v588 / 0x1000 | 0x100000 * v588; // 0x4d9cae
    int32_t v591 = v589 + v579; // 0x4d9cb1
    int32_t v592 = v580 + v4 + v590; // 0x4d9cb4
    uint32_t v593 = v591 ^ v583; // 0x4d9cb7
    uint32_t v594 = v592 ^ v584; // 0x4d9cba
    int32_t v595 = v593 / 128 | 0x2000000 * v593; // 0x4d9cbd
    int32_t v596 = v594 / 256 | 0x1000000 * v594; // 0x4d9cc0
    int32_t v597 = v596 + v586; // 0x4d9cc3
    uint32_t v598 = v597 ^ v590; // 0x4d9cc6
    int32_t v599 = v598 / 128 | 0x2000000 * v598; // 0x4d9cc9
    int32_t v600 = v564 + v10 + v599; // 0x4d9ccc
    uint32_t v601 = v600 ^ v569; // 0x4d9cce
    int32_t v602 = v601 / 0x10000 | 0x10000 * v601; // 0x4d9cd0
    int32_t v603 = v565 + v2 + v574; // 0x4d9cdc
    int32_t v604 = v602 + v591; // 0x4d9cdf
    uint32_t v605 = v603 ^ v589; // 0x4d9ce7
    uint32_t v606 = v604 ^ v599; // 0x4d9cea
    int32_t v607 = v585 + v11 + v575; // 0x4d9cf2
    int32_t v608 = v605 / 0x10000 | 0x10000 * v605; // 0x4d9cf5
    int32_t v609 = v606 / 0x1000 | 0x100000 * v606; // 0x4d9cf8
    uint32_t v610 = v607 ^ v596; // 0x4d9cfb
    int32_t v611 = v608 + v597; // 0x4d9cfe
    int32_t v612 = v600 + v17 + v609; // 0x4d9d01
    int32_t v613 = v610 / 0x10000 | 0x10000 * v610; // 0x4d9d03
    uint32_t v614 = v611 ^ v574; // 0x4d9d06
    uint32_t v615 = v612 ^ v602; // 0x4d9d09
    int32_t v616 = v613 + v570; // 0x4d9d0b
    int32_t v617 = v614 / 0x1000 | 0x100000 * v614; // 0x4d9d0e
    int32_t v618 = v615 / 256 | 0x1000000 * v615; // 0x4d9d12
    uint32_t v619 = v616 ^ v575; // 0x4d9d15
    int32_t v620 = v603 + v8 + v617; // 0x4d9d18
    int32_t v621 = v618 + v604; // 0x4d9d1b
    int32_t v622 = v619 / 0x1000 | 0x100000 * v619; // 0x4d9d1e
    uint32_t v623 = v620 ^ v608; // 0x4d9d21
    uint32_t v624 = v621 ^ v609; // 0x4d9d24
    int32_t v625 = v623 / 256 | 0x1000000 * v623; // 0x4d9d27
    int32_t v626 = v624 / 128 | 0x2000000 * v624; // 0x4d9d2a
    int32_t v627 = v625 + v611; // 0x4d9d2d
    uint32_t v628 = v627 ^ v617; // 0x4d9d38
    int32_t v629 = v628 / 128 | 0x2000000 * v628; // 0x4d9d3b
    int32_t v630 = v592 + v5 + v595; // 0x4d9d49
    int32_t v631 = v607 + v6 + v622; // 0x4d9d4c
    uint32_t v632 = v630 ^ v568; // 0x4d9d53
    int32_t v633 = v612 + v16 + v629; // 0x4d9d5b
    uint32_t v634 = v631 ^ v613; // 0x4d9d5e
    int32_t v635 = v632 / 0x10000 | 0x10000 * v632; // 0x4d9d61
    int32_t v636 = v634 / 256 | 0x1000000 * v634; // 0x4d9d64
    int32_t v637 = v635 + v571; // 0x4d9d67
    int32_t v638 = v636 + v616; // 0x4d9d6a
    uint32_t v639 = v637 ^ v595; // 0x4d9d6d
    uint32_t v640 = v638 ^ v622; // 0x4d9d70
    int32_t v641 = v639 / 0x1000 | 0x100000 * v639; // 0x4d9d73
    int32_t v642 = v640 / 128 | 0x2000000 * v640; // 0x4d9d76
    int32_t v643 = v630 + v3 + v641; // 0x4d9d79
    uint32_t v644 = v643 ^ v635; // 0x4d9d7c
    int32_t v645 = v644 / 256 | 0x1000000 * v644; // 0x4d9d7f
    int32_t v646 = v645 + v637; // 0x4d9d82
    uint32_t v647 = v633 ^ v645; // 0x4d9d85
    int32_t v648 = v647 / 0x10000 | 0x10000 * v647; // 0x4d9d8b
    uint32_t v649 = v646 ^ v641; // 0x4d9d8e
    int32_t v650 = v648 + v638; // 0x4d9d91
    int32_t v651 = v649 / 128 | 0x2000000 * v649; // 0x4d9d94
    uint32_t v652 = v650 ^ v629; // 0x4d9d97
    int32_t v653 = v652 / 0x1000 | 0x100000 * v652; // 0x4d9d9a
    int32_t v654 = v633 + v9 + v653; // 0x4d9d9e
    uint32_t v655 = v654 ^ v648; // 0x4d9dab
    int32_t v656 = v655 / 256 | 0x1000000 * v655; // 0x4d9dad
    int32_t v657 = v656 + v650; // 0x4d9db0
    int32_t v658 = v620 + v13 + v642; // 0x4d9dbd
    int32_t v659 = v631 + v15 + v651; // 0x4d9dc0
    uint32_t v660 = v658 ^ v618; // 0x4d9dc8
    uint32_t v661 = v659 ^ v625; // 0x4d9dcb
    int32_t v662 = v643 + v4 + v626; // 0x4d9dce
    int32_t v663 = v660 / 0x10000 | 0x10000 * v660; // 0x4d9dd6
    int32_t v664 = v661 / 0x10000 | 0x10000 * v661; // 0x4d9dd9
    uint32_t v665 = v662 ^ v636; // 0x4d9de1
    int32_t v666 = v663 + v646; // 0x4d9de4
    int32_t v667 = v664 + v621; // 0x4d9de7
    int32_t v668 = v665 / 0x10000 | 0x10000 * v665; // 0x4d9dea
    uint32_t v669 = v666 ^ v642; // 0x4d9ded
    uint32_t v670 = v667 ^ v651; // 0x4d9df0
    int32_t v671 = v668 + v627; // 0x4d9df3
    int32_t v672 = v669 / 0x1000 | 0x100000 * v669; // 0x4d9df6
    int32_t v673 = v670 / 0x1000 | 0x100000 * v670; // 0x4d9df9
    uint32_t v674 = v671 ^ v626; // 0x4d9dfc
    int32_t v675 = v658 + v12 + v672; // 0x4d9dff
    int32_t v676 = v659 + v1 + v673; // 0x4d9e02
    int32_t v677 = v674 / 0x1000 | 0x100000 * v674; // 0x4d9e05
    uint32_t v678 = v675 ^ v663; // 0x4d9e09
    uint32_t v679 = v676 ^ v664; // 0x4d9e0c
    int32_t v680 = v678 / 256 | 0x1000000 * v678; // 0x4d9e0f
    int32_t v681 = v679 / 256 | 0x1000000 * v679; // 0x4d9e12
    int32_t v682 = v680 + v666; // 0x4d9e15
    int32_t v683 = v681 + v667; // 0x4d9e18
    int32_t v684 = v662 + v14 + v677; // 0x4d9e23
    int128_t v685 = __asm_movd(v657 ^ v676); // 0x4d9e29
    uint32_t v686 = v682 ^ v672; // 0x4d9e2e
    uint32_t v687 = v684 ^ v668; // 0x4d9e31
    int128_t v688 = __asm_movd(v683 ^ v654); // 0x4d9e37
    uint32_t v689 = v683 ^ v673; // 0x4d9e3b
    int32_t v690 = v687 / 256 | 0x1000000 * v687; // 0x4d9e3e
    int32_t v691 = v690 + v671; // 0x4d9e4e
    int128_t v692 = __asm_punpckldq(v685, __asm_movd(v682 ^ v684)); // 0x4d9e51
    uint32_t v693 = v691 ^ v677; // 0x4d9e5a
    *v20 = (v686 / 128 | 0x2000000 * v686) ^ v690;
    int128_t v694 = __asm_movd(v691 ^ v675); // 0x4d9e6a
    *v24 = (v689 / 128 | 0x2000000 * v689) ^ v656;
    int128_t v695 = __asm_punpcklqdq(__asm_punpckldq(v688, v694), v692); // 0x4d9e7e
    *v22 = (v693 / 128 | 0x2000000 * v693) ^ v680;
    uint32_t v696 = v657 ^ v653; // 0x4d9e86
    int64_t v697; // 0x4d9310
    __asm_movups(*(int128_t *)&v697, v695);
    uint32_t result = (v696 / 128 | 0x2000000 * v696) ^ v681; // 0x4d9e90
    *v18 = result;
    return result;
}

// Address range: 0x4fe280 - 0x4fe3d0
// From class:    __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
// Type:          virtual member function
int64_t function_4fe280(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 200); // 0x4fe291
    if (v1 == 0) {
        // 0x4fe3c1
        return function_5423f0(0);
    }
    int64_t v2 = a1 + 120; // 0x4fe28d
    int64_t v3 = *(int64_t *)v1; // 0x4fe2a5
    if ((char)v3 == 0 | (*(char *)v2 & 17) == 0 || *(char *)(a1 + 169) != 0) {
        // 0x4fe348
        return function_53f9c0(a1, a2, a3);
    }
    int64_t * v4 = (int64_t *)(a1 + 40); // 0x4fe2cb
    int64_t v5 = *v4; // 0x4fe2cb
    int64_t * v6 = (int64_t *)(a1 + 48); // 0x4fe2cf
    int64_t v7 = *v6 - v5; // 0x4fe2d3
    char * v8 = (char *)(a1 + 170); // 0x4fe2d6
    int64_t v9 = v7; // 0x4fe2dd
    if (*v8 == 0) {
        uint64_t v10 = *(int64_t *)(a1 + 160); // 0x4fe2df
        v9 = v10 < 2 ? v7 : v10 - 1;
    }
    int64_t v11 = v9;
    int64_t v12 = v11 - (int64_t)&g7; // 0x4fe2f2
    int64_t v13 = v12 < 0 == ((v12 ^ v11) & (v11 ^ (int64_t)&g7)) < 0 ? (int64_t)&g7 : v11; // 0x4fe2fd
    if (v13 > a3) {
        // 0x4fe348
        return function_53f9c0(a1, a2, a3);
    }
    int64_t * v14 = (int64_t *)(a1 + 32); // 0x4fe306
    int64_t v15 = *v14; // 0x4fe306
    int64_t v16 = v5 - v15; // 0x4fe314
    int64_t v17 = function_4f17f0(a1 + 104, v15, v16, a2, a3); // 0x4fe31d
    int64_t v18; // 0x4fe32d
    if (v16 + a3 != v17) {
        // 0x4fe327
        v18 = v16 - v17;
        return v18 < 0 == ((v18 ^ v16) & (v16 ^ v17)) < 0 ? 0 : v17 - v16;
    }
    int64_t v19 = *(int64_t *)(a1 + 152); // 0x4fe363
    *(int64_t *)(a1 + 8) = v19;
    *(int64_t *)(a1 + 16) = v19;
    *(int64_t *)(a1 + 24) = v19;
    int64_t v20; // 0x4fe280
    if ((*(int32_t *)v2 & 17) == 0) {
        goto lab_0x4fe3a7;
    } else {
        uint64_t v21 = *(int64_t *)(a1 + 160); // 0x4fe380
        if (v21 < 2) {
            goto lab_0x4fe3a7;
        } else {
            // 0x4fe38d
            *v4 = v19;
            *v14 = v19;
            v20 = v19 - 1 + v21;
            goto lab_0x4fe39e;
        }
    }
  lab_0x4fe3a7:
    // 0x4fe3a7
    *v4 = 0;
    *v14 = 0;
    v20 = 0;
    goto lab_0x4fe39e;
  lab_0x4fe39e:
    // 0x4fe39e
    *v6 = v20;
    *v8 = 1;
    // 0x4fe327
    v18 = v16 - v17;
    return v18 < 0 == ((v18 ^ v16) & (v16 ^ v17)) < 0 ? 0 : v17 - v16;
}

// Address range: 0x4fe3d0 - 0x4fe530
// From class:    __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          virtual member function
int64_t function_4fe3d0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = *(int64_t *)(a1 + 200); // 0x4fe3e1
    if (v1 == 0) {
        // 0x4fe524
        return function_5423f0(0);
    }
    int64_t v2 = a1 + 120; // 0x4fe3dd
    int64_t v3 = *(int64_t *)v1; // 0x4fe3f5
    if ((char)v3 == 0 | (*(char *)v2 & 17) == 0 || *(char *)(a1 + 169) != 0) {
        // 0x4fe4a0
        return function_53fac0(a1, a2, a3);
    }
    int64_t * v4 = (int64_t *)(a1 + 40); // 0x4fe41f
    int64_t v5 = *v4; // 0x4fe41f
    int64_t * v6 = (int64_t *)(a1 + 48); // 0x4fe423
    int64_t v7 = *v6 - v5 >> 2; // 0x4fe42a
    char * v8 = (char *)(a1 + 170); // 0x4fe42e
    int64_t v9 = v7; // 0x4fe435
    if (*v8 == 0) {
        uint64_t v10 = *(int64_t *)(a1 + 160); // 0x4fe437
        v9 = v10 < 2 ? v7 : v10 - 1;
    }
    int64_t v11 = v9;
    int64_t v12 = v11 - (int64_t)&g7; // 0x4fe44a
    int64_t v13 = v12 < 0 == ((v12 ^ v11) & (v11 ^ (int64_t)&g7)) < 0 ? (int64_t)&g7 : v11; // 0x4fe455
    if (v13 > a3) {
        // 0x4fe4a0
        return function_53fac0(a1, a2, a3);
    }
    int64_t * v14 = (int64_t *)(a1 + 32); // 0x4fe45e
    int64_t v15 = *v14; // 0x4fe45e
    int64_t v16 = v5 - v15 >> 2; // 0x4fe46f
    int64_t v17 = function_4f17f0(a1 + 104, v15, v16, a2, a3); // 0x4fe479
    int64_t v18; // 0x4fe489
    if (v16 + a3 != v17) {
        // 0x4fe483
        v18 = v16 - v17;
        return v18 < 0 == ((v18 ^ v16) & (v16 ^ v17)) < 0 ? 0 : v17 - v16;
    }
    int64_t v19 = *(int64_t *)(a1 + 152); // 0x4fe4c3
    *(int64_t *)(a1 + 8) = v19;
    *(int64_t *)(a1 + 16) = v19;
    *(int64_t *)(a1 + 24) = v19;
    int64_t v20; // 0x4fe3d0
    if ((*(int32_t *)v2 & 17) == 0) {
        goto lab_0x4fe50a;
    } else {
        uint64_t v21 = *(int64_t *)(a1 + 160); // 0x4fe4e0
        if (v21 < 2) {
            goto lab_0x4fe50a;
        } else {
            // 0x4fe4ed
            *v4 = v19;
            *v14 = v19;
            v20 = v19 - 4 + 4 * v21;
            goto lab_0x4fe4fe;
        }
    }
  lab_0x4fe50a:
    // 0x4fe50a
    *v4 = 0;
    *v14 = 0;
    v20 = 0;
    goto lab_0x4fe4fe;
  lab_0x4fe4fe:
    // 0x4fe4fe
    *v6 = v20;
    *v8 = 1;
    // 0x4fe483
    v18 = v16 - v17;
    return v18 < 0 == ((v18 ^ v16) & (v16 ^ v17)) < 0 ? 0 : v17 - v16;
}

// Address range: 0x4fe530 - 0x4feae0
// From class:    __gnu_cxx::stdio_filebuf<wchar_t, std::char_traits<wchar_t> >
// Type:          virtual member function
int64_t function_4fe530(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4fe530
    int64_t v1; // bp-72, 0x4fe530
    int64_t v2 = (int64_t)&v1; // 0x4fe53a
    __readfsqword(40);
    char * v3 = (char *)(a1 + 120); // 0x4fe54e
    int64_t result = 0xffffffff; // 0x4fe552
    int64_t v4 = a1; // 0x4fe552
    char * v5; // 0x4fe530
    int64_t * v6; // 0x4fe530
    int64_t * v7; // 0x4fe530
    int64_t * v8; // 0x4fe530
    int64_t * v9; // 0x4fe530
    int64_t v10; // 0x4fe530
    int64_t v11; // 0x4fe530
    int64_t v12; // 0x4fe530
    int64_t v13; // 0x4fe530
    if ((*v3 & 8) == 0) {
        goto lab_0x4fe7c0;
    } else {
        char * v14 = (char *)(a1 + 170); // 0x4fe558
        if (*v14 != 0) {
            // 0x4fe7a8
            result = a1;
            v4 = a1;
            if ((int32_t)a1 != -1) {
                char * v15 = (char *)(a1 + 192);
                int64_t * v16 = (int64_t *)(a1 + 152);
                int64_t v17 = *v16; // 0x4fe8a7
                *(int64_t *)(a1 + 40) = 0;
                *(int64_t *)(a1 + 32) = 0;
                *(int64_t *)(a1 + 48) = 0;
                *v14 = 0;
                int64_t * v18 = (int64_t *)(a1 + 8);
                *v18 = v17;
                int64_t * v19 = (int64_t *)(a1 + 16);
                *v19 = v17;
                int64_t * v20 = (int64_t *)(a1 + 24);
                *v20 = v17;
                v12 = v17;
                v9 = v20;
                v8 = v16;
                v7 = v18;
                v6 = v19;
                v5 = v15;
                v11 = v17;
                if (*v15 == 0) {
                    goto lab_0x4fe586;
                } else {
                    goto lab_0x4fe8df;
                }
            } else {
                goto lab_0x4fe7c0;
            }
        } else {
            char * v21 = (char *)(a1 + 192);
            int64_t * v22 = (int64_t *)(a1 + 16);
            int64_t v23 = *v22; // 0x4fe56f
            if (*v21 != 0) {
                // 0x4fe568
                v9 = (int64_t *)(a1 + 24);
                v8 = (int64_t *)(a1 + 152);
                v7 = (int64_t *)(a1 + 8);
                v6 = v22;
                v5 = v21;
                v11 = v23;
                goto lab_0x4fe8df;
            } else {
                // 0x4fe568
                v10 = v23;
                v13 = *(int64_t *)(a1 + 24);
                goto lab_0x4fe57d;
            }
        }
    }
  lab_0x4fe7c0:;
    int64_t v24 = v4; // 0x4fe7ce
    if (*(int64_t *)(v2 + 8) == __readfsqword(40)) {
        // 0x4fe7d4
        return result;
    }
    goto lab_0x4fead6;
  lab_0x4fead6:
    // 0x4fead6
    __stack_chk_fail();
    // 0x4feadb
    return function_5423f0(v24);
  lab_0x4fe586:;
    uint64_t v25 = *(int64_t *)(a1 + 160); // 0x4fe586
    int64_t * v26 = (int64_t *)(a1 + 200); // 0x4fe594
    int64_t v27 = *v26; // 0x4fe594
    if (v27 == 0) {
        // 0x4feadb
        return function_5423f0(0);
    }
    int64_t v28 = v25 >= 2 ? v25 : 2; // 0x4fe59b
    int64_t v29 = v28 - 1; // 0x4fe5a6
    int64_t v30 = *(int64_t *)v27; // 0x4fe5b1
    int64_t v31; // 0x4fe530
    int64_t v32; // 0x4fe530
    int64_t v33; // 0x4fe530
    int64_t v34; // 0x4fe530
    int64_t v35; // 0x4fe530
    int64_t v36; // 0x4fe530
    int64_t v37; // 0x4fe530
    int64_t v38; // 0x4fe530
    int64_t v39; // 0x4fe530
    int64_t v40; // 0x4fe530
    int64_t v41; // 0x4fe530
    int64_t v42; // 0x4fe530
    int64_t v43; // 0x4fe530
    int64_t * v44; // 0x4fe5de
    int64_t v45; // 0x4fe5de
    int64_t * v46; // 0x4fe530
    int64_t v47; // 0x4fe5ef
    int64_t v48; // 0x4fe5fd
    int64_t * v49; // 0x4fe530
    int64_t v50; // 0x4fe608
    if ((char)v30 != 0) {
        int64_t v51 = a1 + 104; // 0x4fe7ec
        int64_t v52 = function_4f1770(v51, *(int64_t *)(a1 + 8), v29); // 0x4fe7f3
        v42 = v51;
        v36 = 0;
        if (v52 == 0) {
            goto lab_0x4fe853;
        } else {
            // 0x4fe801
            v41 = v51;
            v37 = v52;
            if (v52 > 0) {
                goto lab_0x4fe807;
            } else {
                goto lab_0x4fe920;
            }
        }
    } else {
        int64_t v53 = 0x100000000 * v30 >> 32;
        int64_t v54 = v53 * v29;
        v35 = (int32_t)v30 < 1 ? v28 - 2 + v53 : v54;
        int64_t v55 = (int32_t)v30 < 1 ? v29 : v54;
        v44 = (int64_t *)(a1 + 224);
        v45 = *v44;
        v46 = (int64_t *)(a1 + 232);
        v47 = *v46 - v45;
        int64_t v56 = v55 - v47; // 0x4fe5f2
        v48 = v56 == 0 | v56 < 0 != ((v56 ^ v55) & (v47 ^ v55)) < 0 ? 0 : v56;
        v49 = (int64_t *)(a1 + 216);
        v50 = *v49;
        v43 = v12;
        if (*(char *)(a1 + 169) == 0) {
            goto lab_0x4fe61f;
        } else {
            int64_t v57 = *(int64_t *)(a1 + 8); // 0x4fe611
            v43 = v57;
            if (*(int64_t *)(a1 + 24) == v57) {
                if (v47 == 0) {
                    // 0x4feab5
                    v34 = v48;
                    if (v35 > v50) {
                        // 0x4feaba
                        v32 = v48;
                        v38 = function_4eec00(v35, v45, v57);
                        goto lab_0x4fea40;
                    } else {
                        goto lab_0x4fea87;
                    }
                } else {
                    if (v35 > v50) {
                        // 0x4fea93
                        v31 = 0;
                        v40 = function_4eec00(v35, v45, v57);
                        goto lab_0x4feaa1;
                    } else {
                        // 0x4fea72
                        v33 = 0;
                        v39 = *(int64_t *)(a1 + 208);
                        goto lab_0x4fea7c;
                    }
                }
            } else {
                goto lab_0x4fe61f;
            }
        }
    }
  lab_0x4fe8df:;
    int64_t * v58 = (int64_t *)(a1 + 176); // 0x4fe8e5
    *v5 = 0;
    *v7 = *v8;
    int64_t v59 = 4 * (int64_t)(*v7 != v11) + *v58; // 0x4fe901
    int64_t v60 = *(int64_t *)(a1 + 184); // 0x4fe905
    *v58 = v59;
    *v6 = v59;
    *v9 = v60;
    v10 = v59;
    v13 = v60;
    goto lab_0x4fe57d;
  lab_0x4fe57d:
    // 0x4fe57d
    v12 = v13;
    int64_t v61 = v10; // 0x4fe580
    int64_t v62 = a1; // 0x4fe580
    if (v13 > v10) {
        goto lab_0x4fe847;
    } else {
        goto lab_0x4fe586;
    }
  lab_0x4fe847:
    // 0x4fe847
    result = (int64_t)*(int32_t *)v61;
    v4 = v62;
    goto lab_0x4fe7c0;
  lab_0x4fe853:;
    int64_t v63 = *(int64_t *)(a1 + 152); // 0x4fe857
    int64_t v64 = v63; // 0x4fe85e
    int64_t v65 = v42; // 0x4fe85e
    int64_t v66 = v36; // 0x4fe85e
    if ((*v3 & 16) == 0) {
        goto lab_0x4fe998;
    } else {
        // 0x4fe864
        *(int64_t *)(a1 + 8) = v63;
        *(int64_t *)(a1 + 16) = v63;
        *(int64_t *)(a1 + 24) = v63;
        *(int64_t *)(a1 + 40) = 0;
        *(int64_t *)(a1 + 32) = 0;
        *(int64_t *)(a1 + 48) = 0;
        *(char *)(a1 + 169) = 0;
        result = 0xffffffff;
        v4 = v42;
        goto lab_0x4fe7c0;
    }
  lab_0x4fe61f:;
    int64_t v67; // 0x4fe530
    int64_t v68; // 0x4fe530
    if (v35 > v50) {
        int64_t v69 = function_4eec00(v35, v45, v43); // 0x4fea33
        v32 = v48;
        v38 = v69;
        v31 = v48;
        v40 = v69;
        if (v47 != 0) {
            goto lab_0x4feaa1;
        } else {
            goto lab_0x4fea40;
        }
    } else {
        int64_t v70 = *(int64_t *)(a1 + 208); // 0x4fe62b
        v67 = v48;
        v68 = v70;
        v33 = v48;
        v39 = v70;
        if (v47 != 0) {
            goto lab_0x4fea7c;
        } else {
            goto lab_0x4fe638;
        }
    }
  lab_0x4fe998:
    // 0x4fe998
    *(int64_t *)(a1 + 8) = v64;
    *(int64_t *)(a1 + 16) = v64;
    int64_t * v71 = (int64_t *)(a1 + 24);
    *v71 = v64;
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 32) = 0;
    *(int64_t *)(a1 + 48) = 0;
    *(char *)(a1 + 169) = 0;
    result = 0xffffffff;
    v4 = v65;
    int64_t * v72; // 0x4fe530
    int64_t v73; // 0x4fe530
    int64_t v74; // 0x4fe530
    if ((int32_t)v66 != 1) {
        goto lab_0x4fe7c0;
    } else {
        // 0x4fe9cd
        v72 = v71;
        v73 = function_549920("basic_filebuf::underflow incomplete character in file");
        v74 = (int64_t)"basic_filebuf::underflow incomplete character in file";
        goto lab_0x4fe9e0;
    }
  lab_0x4fe807:;
    int64_t v75 = *(int64_t *)(a1 + 152); // 0x4fe80b
    *(int64_t *)(a1 + 8) = v75;
    *(int64_t *)(a1 + 16) = v75;
    int64_t v76; // 0x4fe530
    int64_t v77; // 0x4fe530
    if ((*v3 & 8) == 0) {
        // 0x4fe807
        v72 = (int64_t *)(a1 + 24);
        v73 = v75;
        v74 = v41;
        goto lab_0x4fe9e0;
    } else {
        // 0x4fe820
        *(int64_t *)(a1 + 24) = v75 + 4 * v37;
        v76 = v75;
        v77 = v41;
        goto lab_0x4fe828;
    }
  lab_0x4fe920:;
    int64_t v78 = function_549920("basic_filebuf::underflow error reading the file"); // 0x4fe92c
    int64_t v79 = (int64_t)"basic_filebuf::underflow error reading the file"; // 0x4fe92c
    int64_t v80; // 0x4fe530
    int64_t v81 = v80; // 0x4fe92c
    goto lab_0x4fe930;
  lab_0x4fe930:;
    int64_t v82 = v78; // 0x4fe936
    int64_t v83 = v79; // 0x4fe936
    int64_t v84 = v81; // 0x4fe936
    int64_t v85 = 1; // 0x4fe936
    goto lab_0x4fe702;
  lab_0x4feaa1:
    // 0x4feaa1
    memcpy((int64_t *)v40, (int64_t *)*v44, (int32_t)v47);
    v32 = v31;
    v38 = v40;
    goto lab_0x4fea40;
  lab_0x4fea40:;
    int64_t * v147 = (int64_t *)(a1 + 208); // 0x4fea40
    int64_t v148 = *v147; // 0x4fea40
    if (v148 != 0) {
        // 0x4fea4c
        function_4eeb40(v148);
    }
    // 0x4fea51
    *v147 = v38;
    *v49 = v35;
    v67 = v32;
    v68 = v38;
    goto lab_0x4fe638;
  lab_0x4fea7c:
    // 0x4fea7c
    memmove((int64_t *)v39, (int64_t *)v45, (int32_t)v47);
    v34 = v33;
    goto lab_0x4fea87;
  lab_0x4fe638:;
    int64_t v106 = v68 + v47; // 0x4fe63f
    *v44 = v68;
    *v46 = v106;
    *(int64_t *)(a1 + 140) = *(int64_t *)(a1 + 132);
    int64_t * v107 = v49; // 0x4fe65b
    int64_t v108 = v106; // 0x4fe65b
    int64_t v109 = v67; // 0x4fe65b
    int64_t v110 = 0; // 0x4fe65b
    int64_t v111 = v68; // 0x4fe65b
    int64_t * v112; // 0x4fe530
    int64_t * v113; // 0x4fe530
    int64_t * v93; // 0x4fe530
    int64_t v95; // 0x4fe530
    int64_t v114; // 0x4fe530
    int64_t v94; // 0x4fe530
    if (v67 != 0) {
        goto lab_0x4fe6c7;
    } else {
        int64_t * v115 = (int64_t *)(a1 + 8);
        int64_t v116 = *v115; // 0x4fe661
        v1 = v116;
        v112 = v49;
        v113 = v46;
        v114 = 0;
        v93 = v115;
        v94 = v116;
        v95 = 0;
        if (v106 > v68) {
            goto lab_0x4fe72b;
        } else {
            goto lab_0x4fe6b3;
        }
    }
  lab_0x4fe9e0:
    // 0x4fe9e0
    *v72 = v73;
    v76 = v73;
    v77 = v74;
    goto lab_0x4fe828;
  lab_0x4fe828:
    // 0x4fe828
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 32) = 0;
    *(int64_t *)(a1 + 48) = 0;
    *(char *)(a1 + 169) = 1;
    v61 = v76;
    v62 = v77;
    goto lab_0x4fe847;
  lab_0x4fe702:;
    int64_t v86 = v85;
    int64_t v87 = v84;
    int64_t v88 = v83;
    int64_t * v89 = (int64_t *)(a1 + 232);
    uint64_t v90 = *v89 + v82; // 0x4fe702
    int64_t * v91 = (int64_t *)(a1 + 8);
    int64_t v92 = *v91; // 0x4fe710
    *v89 = v90;
    v1 = v92;
    v93 = v91;
    v94 = v92;
    v95 = v86;
    int64_t * v96; // 0x4fe530
    int64_t v97; // 0x4fe530
    int64_t v98; // 0x4fe530
    int64_t v99; // 0x4fe530
    int64_t v100; // 0x4fe530
    int64_t v101; // 0x4fe530
    int64_t v102; // 0x4fe530
    int64_t v103; // 0x4fe530
    int64_t v104; // 0x4fe530
    int64_t v105; // 0x4fe530
    if (v90 > *(int64_t *)(a1 + 224)) {
        goto lab_0x4fe72b;
    } else {
        // 0x4fe680
        v97 = v92;
        v104 = v88;
        v102 = v92;
        v98 = v86;
        v100 = v87;
        v96 = v89;
        v105 = v88;
        v103 = v92;
        v99 = v86;
        v101 = v87;
        if ((int32_t)v87 == 3) {
            goto lab_0x4fe765;
        } else {
            goto lab_0x4fe68a;
        }
    }
  lab_0x4fea87:
    // 0x4fea87
    v67 = v34;
    v68 = *(int64_t *)(a1 + 208);
    goto lab_0x4fe638;
  lab_0x4fe6c7:
    // 0x4fe6c7
    if (v109 + v108 - v111 > *v107) {
        // 0x4feaca
        function_549920("basic_filebuf::underflow codecvt::max_length() is not valid");
        v24 = (int64_t)"basic_filebuf::underflow codecvt::max_length() is not valid";
        goto lab_0x4fead6;
    } else {
        int64_t v117 = a1 + 104; // 0x4fe6dd
        int64_t v118 = function_4f1770(v117, v108, v109); // 0x4fe6e7
        v82 = v118;
        v83 = v117;
        v84 = v110;
        v85 = 0;
        v80 = v110;
        v78 = 0;
        v79 = v117;
        v81 = v110;
        switch (v118) {
            case 0: {
                goto lab_0x4fe930;
            }
            case -1: {
                goto lab_0x4fe920;
            }
            default: {
                goto lab_0x4fe702;
            }
        }
    }
  lab_0x4fe72b:;
    int64_t v119 = v95;
    int64_t v120 = *v26; // 0x4fe72b
    int64_t v121 = *(int64_t *)v120; // 0x4fe743
    *(int64_t *)(v2 - 8) = v2;
    *(int64_t *)(v2 - 16) = v94 + 4 * v29;
    int64_t v122 = v121 & 0xffffffff; // 0x4fe752
    int64_t v123 = *v93; // 0x4fe755
    if ((int32_t)v121 != 3) {
        // 0x4fe72b
        v97 = v1;
        v104 = v120;
        v102 = v123;
        v98 = v119;
        v100 = v122;
        goto lab_0x4fe68a;
    } else {
        // 0x4fe72b
        v96 = (int64_t *)(a1 + 232);
        v105 = v120;
        v103 = v123;
        v99 = v119;
        v101 = v122;
        goto lab_0x4fe765;
    }
  lab_0x4fe6b3:
    // 0x4fe6b3
    v107 = v112;
    v108 = *v113;
    v109 = 1;
    v110 = v114;
    v111 = *(int64_t *)(a1 + 208);
    goto lab_0x4fe6c7;
  lab_0x4fe765:;
    int64_t wstr = v103;
    int64_t * v124 = (int64_t *)(a1 + 208); // 0x4fe765
    int64_t wstr2 = *v124; // 0x4fe765
    int64_t v125 = *v96 - wstr2; // 0x4fe773
    int64_t n = v29; // 0x4fe77c
    int64_t v126; // 0x4fe530
    int64_t v127; // 0x4fe530
    int64_t v128; // 0x4fe530
    if (v29 < v125) {
        goto lab_0x4fe946;
    } else {
        // 0x4fe782
        v128 = wstr2;
        v127 = v105;
        v126 = v125;
        n = v125;
        if (v125 != 0) {
            goto lab_0x4fe946;
        } else {
            goto lab_0x4fe78b;
        }
    }
  lab_0x4fe68a:;
    int64_t v129 = v100;
    int64_t v130 = v98;
    int64_t v131 = v104;
    int64_t v132 = v97 - v102; // 0x4fe68e
    int64_t v133 = v132 >> 2; // 0x4fe694
    int64_t v134; // 0x4fe530
    int64_t v135; // 0x4fe530
    int64_t v136; // 0x4fe530
    int64_t v137; // 0x4fe530
    int64_t v138; // 0x4fe530
    int64_t v139; // 0x4fe530
    int64_t v140; // 0x4fe530
    int64_t v141; // 0x4fe530
    int64_t v142; // 0x4fe530
    if ((int32_t)v129 == 2) {
        // 0x4fe960
        v41 = v131;
        v37 = v133;
        if (v132 >= 0 == (v132 != 0)) {
            goto lab_0x4fe807;
        } else {
            // 0x4fe969
            v42 = v131;
            v36 = v129;
            if ((char)v130 != 0) {
                goto lab_0x4fe853;
            } else {
                // 0x4fe972
                function_549920("basic_filebuf::underflow invalid byte sequence in file");
                v140 = (int64_t)"basic_filebuf::underflow invalid byte sequence in file";
                v135 = v130;
                v136 = v129;
                v139 = v133;
                goto lab_0x4fe980;
            }
        }
    } else {
        // 0x4fe6a2
        v141 = v131;
        v134 = v130;
        v137 = v129;
        v138 = v133;
        v142 = v130 & 0xffffffff | (int64_t)(v132 != 0);
        goto lab_0x4fe6ab;
    }
  lab_0x4fe946:
    // 0x4fe946
    wmemcpy((int32_t *)wstr, (int32_t *)wstr2, (int32_t)n);
    v128 = *v124;
    v127 = wstr;
    v126 = n;
    goto lab_0x4fe78b;
  lab_0x4fe78b:
    // 0x4fe78b
    *(int64_t *)(a1 + 224) = v126 + v128;
    v141 = v127;
    v134 = v99;
    v137 = v101;
    v138 = v126;
    v142 = v99 & 0xffffffff | (int64_t)(v126 != 0);
    goto lab_0x4fe6ab;
  lab_0x4fe6ab:;
    int64_t v143 = v137;
    v140 = v141;
    v135 = v134;
    v136 = v143;
    v139 = v138;
    if ((char)v142 != 0) {
        goto lab_0x4fe980;
    } else {
        // 0x4fe6ab
        v112 = (int64_t *)(a1 + 216);
        v113 = (int64_t *)(a1 + 232);
        v114 = v143;
        goto lab_0x4fe6b3;
    }
  lab_0x4fe980:;
    int64_t v144 = v139;
    int64_t v145 = v140;
    v41 = v145;
    v37 = v144;
    if (v144 >= 0 == (v144 != 0)) {
        goto lab_0x4fe807;
    } else {
        int64_t v146 = v136;
        v80 = v146;
        if ((char)v135 == 0) {
            goto lab_0x4fe920;
        } else {
            // 0x4fe98e
            v64 = *(int64_t *)(a1 + 152);
            v65 = v145;
            v66 = v146;
            goto lab_0x4fe998;
        }
    }
}

// Address range: 0x4febd8 - 0x4febdb
int64_t function_4febd8(void) {
    // 0x4febd8
    int64_t result; // 0x4febd8
    return result;
}

// Address range: 0x5153a0 - 0x5153a5
// From class:    std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_5153a0(void) {
    // 0x5153a0
    return function_514a00();
}

// Address range: 0x5153b0 - 0x5153ca
int64_t function_5153b0(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 64); // 0x5153b3
    if (result != g36) {
        // 0x5153c8
        return result;
    }
    // 0x5153c0
    return function_514a00();
}

// Address range: 0x5153d0 - 0x515c7b
int64_t function_5153d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t result4 = a2; // bp-104, 0x5153ec
    int64_t v1 = a4; // bp-120, 0x515402
    __readfsqword(40);
    int64_t v2 = function_50e0e0(); // 0x515431
    int32_t v3 = *(int32_t *)(a6 + 24) & 74; // 0x51543d
    int64_t v4 = 10; // 0x5153d0
    int64_t v5; // 0x5153d0
    int64_t v6; // 0x5153d0
    switch (v3) {
        case 64: {
            // 0x515b78
            v4 = 8;
            goto lab_0x51545b;
        }
        case 8: {
            int64_t result = function_50f6f0(&result4, &v1); // 0x515784
            if ((char)result != 0) {
                // 0x515c80
                return result;
            }
            // 0x515795
            v6 = (int64_t)&result4;
            v5 = 16;
            goto lab_0x515480;
        }
        default: {
            goto lab_0x51545b;
        }
    }
  lab_0x51557b:;
    char v7 = 1; // 0x515581
    int64_t v8; // 0x5153d0
    int64_t v9 = v8; // 0x515581
    int64_t v10; // 0x5153d0
    int64_t v11 = v10; // 0x515581
    int64_t v12; // 0x5153d0
    int64_t v13 = v12; // 0x515581
    uint16_t v14; // 0x515523
    if (v14 >= (int16_t)v10) {
        goto lab_0x515898;
    } else {
        goto lab_0x51558c;
    }
  lab_0x515898:;
    // 0x515898
    int64_t v15; // 0x5153d0
    int64_t v16 = (0x100000000 * v10 >> 32) * (0x100000000 * v15 >> 32); // 0x515898
    int32_t v17 = (int32_t)&g106 - (int32_t)v13; // 0x5158a7
    int32_t v18 = (int32_t)v16 % 0x10000 - v17; // 0x5158a7
    char v19; // 0x5153d0
    v7 = v19 | (char)(v18 < 0 == (v18 & v17) < 0 == (v18 != 0));
    v9 = v8 + 1 & 0xffffffff;
    v11 = v13 + v16 & 0xffffffff;
    goto lab_0x51558c;
  lab_0x51558c:
    // 0x51558c
    if (result4 != 0) {
        int64_t * v20 = (int64_t *)(result4 + 16); // 0x515596
        uint64_t v21 = *v20; // 0x515596
        if (v21 < *(int64_t *)(result4 + 24)) {
            // 0x5155a4
            *v20 = v21 + 4;
        }
    }
    // 0x5155b4
    int64_t v22; // 0x5153d0
    int64_t v23 = function_50f7d0(v22); // 0x5155b8
    int64_t v24; // 0x5153d0
    int64_t v25 = v24; // 0x5155cb
    char v26 = 1; // 0x5155cb
    int64_t result2; // 0x5153d0
    if (v1 != 0) {
        // 0x5155d1
        v25 = v24;
        v26 = 0;
        if ((int32_t)v24 == -1) {
            uint64_t v27 = *(int64_t *)(v1 + 16); // 0x5158d0
            result2 = v27;
            if (v27 >= *(int64_t *)(v1 + 24)) {
                // 0x515c80
                return result2;
            }
            int32_t v28 = *(int32_t *)v27; // 0x5158de
            if (v28 == -1) {
                // 0x515c00
                v1 = 0;
                v25 = v24;
                v26 = 1;
            } else {
                // 0x5158e9
                v25 = v28;
                v26 = 0;
            }
        }
    }
    char v29 = 1; // 0x5155e0
    char v30 = v7; // 0x5155e0
    int64_t v31 = v9; // 0x5155e0
    int64_t v32 = v11; // 0x5155e0
    if (v26 == (char)((int32_t)v23 == -1)) {
        // break -> 0x5155eb
        goto lab_0x5155eb_2;
    }
    int64_t v33 = v25; // 0x5158cb
    char v34 = v7; // 0x5158cb
    int64_t v35 = function_50f7d0(v22) & 0xffffffff; // 0x5158cb
    int64_t v36 = v9; // 0x5158cb
    int64_t v37 = v11; // 0x5158cb
    goto lab_0x515559;
  lab_0x51575e_3:;
    // 0x51575e
    int64_t v42; // 0x5153d0
    int64_t v43 = v42; // 0x515767
    char v44 = 1; // 0x515767
    char * v45; // 0x515491
    int64_t v46 = (int64_t)*v45; // 0x515767
    int64_t v47; // 0x5153d0
    int64_t v48 = v47; // 0x515767
    int64_t v49; // 0x5153d0
    int64_t v50 = v49; // 0x515767
    int64_t v51; // 0x5153d0
    int64_t v52 = v51; // 0x515767
    int64_t v53; // 0x5153d0
    int64_t v54 = v53; // 0x515767
    goto lab_0x5154e8;
  lab_0x5156cb:;
    // 0x5156cb
    int64_t v128; // 0x5153d0
    int64_t v129 = v128;
    int32_t v130; // 0x5153d0
    int64_t result5; // 0x5153d0
    if (*(int32_t *)(v2 + 232) != v130) {
        // 0x5156d3
        if (*(int32_t *)(v2 + 236) != v130) {
            // 0x515c80
            result5 = result2;
            return result5;
        }
    }
    int64_t v131 = 0; // 0x5156ee
    int64_t v132 = 16; // 0x5156ee
    int64_t v133 = 0; // 0x5156ee
    int64_t v134; // 0x5153d0
    if (v3 != 0 && (int32_t)v134 != 16) {
        // 0x515cc1
        return v129 & -256;
    }
    goto lab_0x515700;
  lab_0x515700:
    // 0x515700
    v53 = v133;
    v51 = v132;
    v49 = v131;
    int64_t v135 = result4; // 0x515700
    int64_t v136; // 0x5153d0
    int64_t v137; // 0x5153d0
    char v138; // 0x5153d0
    int64_t v139; // 0x5153d0
    int64_t v140; // 0x5153d0
    if (v135 == 0) {
        // 0x5157bc
        v136 = v1;
        goto lab_0x5157c1;
    } else {
        int64_t * v141 = (int64_t *)(v135 + 16); // 0x51570e
        uint64_t v142 = *v141; // 0x51570e
        int64_t * v143 = (int64_t *)(v135 + 24); // 0x515712
        uint64_t v144 = *v143; // 0x515712
        int64_t v145 = v144; // 0x515716
        int64_t v146 = v142; // 0x515716
        if (v142 < v144) {
            // 0x51571c
            v146 = v142 + 4;
            *v141 = v146;
            v145 = *v143;
        }
        uint64_t v147 = v146; // 0x51572c
        int64_t v148; // 0x5153d0
        if (v147 >= v145) {
            // 0x515bc0
            v148 = *(int64_t *)v135;
        } else {
            // 0x51573a
            v148 = (int64_t)*(int32_t *)v147;
        }
        int64_t v149 = v1; // 0x51573f
        if ((int32_t)v148 == -1) {
            // 0x515998
            result4 = 0;
            v136 = v149;
            goto lab_0x5157c1;
        } else {
            // 0x51574a
            v140 = v139;
            if (v149 == 0) {
                goto lab_0x5157d2;
            } else {
                // 0x515753
                v42 = v139;
                v138 = 0;
                v137 = v149;
                if ((int32_t)v139 != -1) {
                    goto lab_0x51575e_3;
                }
                goto lab_0x515832;
            }
        }
    }
  lab_0x5157c1:;
    int64_t v150 = v136;
    v42 = v139;
    if (v150 == 0) {
        goto lab_0x51575e_3;
    }
    // 0x5157c6
    v140 = v139;
    v138 = 1;
    v137 = v150;
    if ((int32_t)v139 == -1) {
        goto lab_0x515832;
    } else {
        goto lab_0x5157d2;
    }
  lab_0x515832:;
    int64_t v151 = v137;
    uint64_t v152 = *(int64_t *)(v151 + 16); // 0x515832
    int64_t v153; // 0x5153d0
    if (v152 >= *(int64_t *)(v151 + 24)) {
        // 0x515bd0
        v153 = *(int64_t *)v151;
    } else {
        // 0x515840
        v153 = (int64_t)*(int32_t *)v152;
    }
    int64_t v154 = v153;
    int64_t v155; // 0x5153d0
    char v156; // 0x5153d0
    if ((int32_t)v154 == -1) {
        // 0x5159b0
        v1 = 0;
        v155 = v139;
        v156 = 1;
    } else {
        // 0x51584b
        v155 = 0x100000000 * v154 >> 32;
        v156 = 0;
    }
    // 0x515851
    v42 = v155;
    v140 = v155;
    if (v156 == v138) {
        goto lab_0x51575e_3;
    }
    goto lab_0x5157d2;
  lab_0x5157d2:;
    // 0x5157d2
    int64_t v62; // 0x5153d0
    int64_t v157 = function_50f7d0(v62); // 0x5157d6
    if ((char)v49 == 0) {
        // 0x515c80
        result5 = result2;
        return result5;
    }
    int64_t v158 = v140; // 0x5157ea
    int64_t v159 = v157; // 0x5157ea
    int64_t v160 = (int64_t)*v45; // 0x5157ea
    int64_t v161 = v157 & 0xffffffff; // 0x5157ea
    int64_t v162 = v49; // 0x5157ea
    int64_t v163 = v51; // 0x5157ea
    int64_t v164 = v53; // 0x5157ea
    goto lab_0x5156a0;
  lab_0x51545b:;
    int64_t v174 = (int64_t)&result4; // 0x51546b
    char v175 = function_50f6f0(&result4, &v1); // 0x515474
    v6 = v174;
    v5 = v4;
    int32_t v59; // 0x5153d0
    int64_t v67; // 0x5153d0
    int64_t v68; // 0x5153d0
    int64_t v69; // 0x5153d0
    int64_t v66; // 0x5153d0
    int64_t v65; // 0x5153d0
    int64_t v60; // 0x5153d0
    char v64; // 0x5153d0
    char v63; // 0x5153d0
    int64_t v61; // 0x5153d0
    if (v175 != 0) {
        // 0x515c50
        v59 = v4;
        v60 = a5;
        v61 = v174;
        v63 = v175;
        v64 = 0;
        v65 = (int64_t)*(char *)(v2 + 32);
        v66 = 0;
        v67 = 0;
        v68 = v4;
        v69 = 0;
        goto lab_0x5154f7;
    } else {
        goto lab_0x515480;
    }
  lab_0x515480:;
    int64_t v176 = v5;
    v62 = v6;
    int64_t v177 = function_50f7d0(v62); // 0x515484
    int64_t v178 = v177 & 0xffffffff; // 0x515489
    uint32_t v56 = *(int32_t *)(v2 + 224); // 0x51548b
    int64_t v179 = v56; // 0x51548b
    v45 = (char *)(v2 + 32);
    unsigned char v180 = *v45; // 0x515491
    int64_t v181 = v180; // 0x515491
    int32_t v57 = v177; // 0x515495
    int64_t v182; // 0x5153d0
    int64_t v183; // 0x5153d0
    int64_t v184; // 0x5153d0
    if (v56 == v57) {
        goto lab_0x5154aa;
    } else {
        // 0x51549e
        v182 = v179;
        v184 = v181;
        v183 = v178;
        if (*(int32_t *)(v2 + 228) != v57) {
            goto lab_0x515690;
        } else {
            goto lab_0x5154aa;
        }
    }
  lab_0x5154f7:;
    int64_t v70 = v60; // 0x5154fa
    v22 = v61;
    char v71 = v63; // 0x5154fa
    char v72 = v64; // 0x5154fa
    int32_t n = v59; // 0x5154fa
    int64_t v73 = v65; // 0x5154fa
    int64_t v74 = v66; // 0x5154fa
    int64_t v75 = v67; // 0x5154fa
    v15 = v68;
    int64_t v76 = v69; // 0x5154fa
    goto lab_0x5154ff;
  lab_0x5154aa:
    if (v180 != 0) {
        // 0x515680
        v182 = v179;
        v184 = v181;
        v183 = v178;
        if (*(int32_t *)(v2 + 76) != v57) {
            goto lab_0x5154b2;
        } else {
            goto lab_0x515690;
        }
    } else {
        goto lab_0x5154b2;
    }
  lab_0x5154ff:;
    int64_t v101 = (int64_t)&g97; // bp-72, 0x51550c
    if ((char)v73 != 0) {
        // 0x515b88
        function_259ce(&v101, 32);
    }
    // 0x51551a
    v14 = (int16_t)((0x100000000 * (int64_t)((int32_t)&g106 >> 31) | (int64_t)(int32_t)&g106) / (v15 & 0xffffffff));
    char v91 = *(char *)(v2 + 328); // 0x515528
    int64_t result6 = v91; // 0x515528
    int64_t v103; // 0x5153d0
    int64_t v80; // 0x5153d0
    int64_t v78; // 0x5153d0
    int64_t v106; // 0x5153d0
    char result3; // 0x5153d0
    int64_t v83; // 0x5153d0
    int64_t v104; // 0x5153d0
    int64_t v90; // 0x5153d0
    char v82; // 0x5153d0
    char v105; // 0x5153d0
    char * v124; // 0x515a2c
    if (v91 != 0) {
        // 0x515a00
        if (v71 != 0) {
            // 0x515c80
            return result6;
        }
        // 0x515a0b
        v124 = (char *)(v2 + 32);
        char v185 = *v124; // 0x515a2c
        v90 = v70;
        v82 = 0;
        v83 = v74;
        v80 = v76;
        v78 = 0;
        if (v185 == 0) {
            goto lab_0x515a3d;
        } else {
            // 0x515a34
            v90 = v70;
            v82 = 0;
            v83 = v74;
            v80 = v76;
            v78 = 0;
            v104 = v70;
            v105 = 0;
            result3 = v185;
            v103 = v76;
            v106 = 0;
            if (*(int32_t *)(v2 + 76) == (int32_t)v74) {
                goto lab_0x515b0c;
            } else {
                goto lab_0x515a3d;
            }
        }
    } else {
        // 0x51553b
        if (v71 != 0) {
            // 0x515c80
            return result6;
        }
        int64_t v39 = 0x1000000 * n + 0x30000000 >> 24;
        v33 = v70;
        v34 = 0;
        v35 = v74;
        v36 = v76;
        v37 = 0;
        while (true) {
          lab_0x515559:
            // 0x515559
            v10 = v37;
            v8 = v36;
            int64_t v38 = v35;
            v19 = v34;
            v24 = v33;
            if (n < 11) {
                // 0x515565
                v29 = 0;
                v30 = v19;
                v31 = v8;
                v32 = v10;
                if (v38 < v39 != (int32_t)v38 > 47) {
                    // break -> 0x5155eb
                    break;
                }
                // 0x515578
                v12 = v38 + 0xffffffd0;
                goto lab_0x51557b;
            } else {
                int64_t v40 = v38 + 0xffffffd0; // 0x515860
                v12 = v40;
                if ((int32_t)v40 < 10) {
                    goto lab_0x51557b;
                } else {
                    int32_t v41 = v38;
                    if (v41 < 103) {
                        // 0x5159d8
                        v12 = v38 + 0xffffffa9;
                        goto lab_0x51557b;
                    } else {
                        // 0x515878
                        v29 = 0;
                        v30 = v19;
                        v31 = v8;
                        v32 = v10;
                        if (v41 >= 71) {
                            // break -> 0x5155eb
                            break;
                        }
                        // 0x515884
                        v7 = 1;
                        v9 = v8;
                        v11 = v10;
                        v13 = v38 + 0xffffffc9;
                        if (v14 < (int16_t)v10) {
                            goto lab_0x51558c;
                        } else {
                            goto lab_0x515898;
                        }
                    }
                }
            }
        }
        goto lab_0x5155eb_2;
    }
  lab_0x5154b2:
    // 0x5154b2
    v182 = v179;
    v184 = v181;
    v183 = v178;
    if (*(int32_t *)(v2 + 72) == v57) {
        goto lab_0x515690;
    } else {
        int64_t v186 = function_50f6f0((int64_t *)function_50d7a0(v62), &v1); // 0x5154ca
        char v187 = v186; // 0x5154cf
        if (v187 == 0) {
            int64_t v188 = function_50f7d0(v62); // 0x515c3c
            v182 = v188;
            v184 = (int64_t)*v45;
            v183 = v188 & 0xffffffff;
            goto lab_0x515690;
        } else {
            // 0x5154db
            v43 = a5;
            v44 = v187;
            v46 = (int64_t)*v45;
            v48 = v178;
            v50 = 0;
            v52 = v176;
            v54 = 0;
            goto lab_0x5154e8;
        }
    }
  lab_0x515690:
    // 0x515690
    v158 = a5;
    v159 = v182;
    v160 = v184;
    v161 = v183;
    v162 = 0;
    v163 = v176;
    v164 = 0;
    while (true) {
      lab_0x5156a0:;
        int64_t v165 = v164;
        v134 = v163;
        int64_t v166 = v162;
        v47 = v161;
        int64_t v167 = v160;
        int64_t v168 = v159;
        v139 = v158;
        int32_t v169; // 0x5153d0
        if (v167 == 0) {
            // 0x5156a0
            v169 = v47;
        } else {
            int32_t v170 = v47;
            v43 = v139;
            v44 = 0;
            v46 = v167;
            v48 = v47;
            v50 = v166;
            v52 = v134;
            v54 = v165;
            v169 = v170;
            if (*(int32_t *)(v2 + 76) == v170) {
                // break -> 0x5154e8
                break;
            }
        }
        // 0x5156ad
        v130 = v169;
        v43 = v139;
        v44 = 0;
        v46 = v167;
        v48 = v47;
        v50 = v166;
        v52 = v134;
        v54 = v165;
        if (*(int32_t *)(v2 + 72) == v130) {
            // break -> 0x5154e8
            break;
        }
        // 0x5156b6
        if (*(int32_t *)(v2 + 240) == v130) {
            int32_t v171 = v134; // 0x5157f4
            unsigned char v172 = (char)v166 ^ 1 | (char)(v171 == 10); // 0x5157fb
            int64_t v173 = v168 & -256 | (int64_t)v172; // 0x5157fb
            v128 = v173;
            if (v172 == 0) {
                goto lab_0x5156cb;
            } else {
                // 0x515804
                v131 = 1;
                v132 = 8;
                v133 = 0;
                if (v3 != 0 && v171 != 8) {
                    // 0x5159c8
                    v131 = v173 & 0xffffffff;
                    v132 = v134;
                    v133 = v165 + 1 & 0xffffffff;
                }
                goto lab_0x515700;
            }
        } else {
            // 0x5156c2
            v43 = v139;
            v44 = 0;
            v46 = v167;
            v48 = v47;
            v50 = v166;
            v52 = v134;
            v54 = v165;
            v128 = v168;
            if ((char)v166 == 0) {
                // break -> 0x5154e8
                break;
            }
            goto lab_0x5156cb;
        }
    }
    goto lab_0x5154e8;
  lab_0x5154e8:;
    char v55 = v56 == v57; // 0x515497
    int32_t v58 = v52;
    v59 = v58;
    v60 = v43;
    v61 = v62;
    v63 = v44;
    v64 = v55;
    v65 = v46;
    v66 = v48;
    v67 = v50;
    v68 = v52;
    v69 = v54;
    v70 = v43;
    v22 = v62;
    v71 = v44;
    v72 = v55;
    n = 22;
    v73 = v46;
    v74 = v48;
    v75 = v50;
    v15 = v52;
    v76 = v54;
    if (v58 == 16) {
        goto lab_0x5154ff;
    } else {
        goto lab_0x5154f7;
    }
  lab_0x515a3d:;
    int64_t v77 = v78;
    int64_t v79 = v80;
    char v81 = v82;
    int32_t c = v83; // 0x515a3d
    v29 = 0;
    v30 = v81;
    v31 = v79;
    v32 = v77;
    int64_t v84; // 0x5153d0
    int64_t v85; // 0x5153d0
    int64_t v86; // 0x5153d0
    char v87; // 0x5153d0
    if (*(int32_t *)(v2 + 72) == c) {
        goto lab_0x5155eb_2;
    } else {
        int64_t wstr = v2 + 240; // 0x515a0b
        int32_t * v88 = wmemchr((int32_t *)wstr, c, n); // 0x515a51
        v29 = 0;
        v30 = v81;
        v31 = v79;
        v32 = v77;
        if (v88 == NULL) {
            goto lab_0x5155eb_2;
        } else {
            int64_t v89 = v90;
            v86 = v89;
            v87 = v91;
            v84 = v79;
            v85 = v77;
            if (v14 >= (int16_t)v77) {
                int64_t v92 = (int64_t)v88 - wstr >> 2; // 0x515a5e
                int32_t v93 = v92; // 0x515a65
                int32_t v94 = v93 - 15; // 0x515a65
                int64_t v95 = v94 < 0 == (14 - v93 & v93) < 0 == (v94 != 0) ? v92 + 0xfffffffa : v92; // 0x515a68
                int64_t v96 = (0x100000000 * v77 >> 32) * (0x100000000 * v15 >> 32); // 0x515a77
                int32_t v97 = (int32_t)&g106 - (int32_t)v95; // 0x515a86
                int32_t v98 = (int32_t)v96 % 0x10000 - v97; // 0x515a86
                v86 = v89;
                v87 = v81 | (char)(v98 < 0 == (v98 & v97) < 0 == (v98 != 0));
                v84 = v79 + 1 & 0xffffffff;
                v85 = v95 + v96 & 0xffffffff;
            }
            goto lab_0x515a96;
        }
    }
  lab_0x5155eb_2:;
    // 0x5155eb
    int64_t v99; // 0x5153d0
    int64_t v100; // 0x5153d0
    if (g96 != 0) {
        // 0x515900
        function_451f2(&v101, 0x100000000000000 * v31 >> 56);
        int64_t v102 = *(int64_t *)(v2 + 16); // 0x515918
        if ((char)function_569070(v102, *(int64_t *)(v2 + 24), &v101) == 0) {
            // 0x515928
            *(int32_t *)a7 = 4;
        }
        // 0x515933
        v100 = v101;
        if ((int32_t)v31 != 0) {
            goto lab_0x515951;
        } else {
            // 0x515940
            v99 = v101;
            v100 = v101;
            if ((char)v75 != 1 == g96 == 0) {
                goto lab_0x515611;
            } else {
                goto lab_0x515951;
            }
        }
    } else {
        // 0x5155fe
        v100 = v101;
        if ((char)v75 == 1) {
            goto lab_0x515951;
        } else {
            // 0x515608
            v99 = v101;
            v100 = v101;
            if ((int32_t)v31 != 0) {
                goto lab_0x515951;
            } else {
                goto lab_0x515611;
            }
        }
    }
  lab_0x515b0c:
    // 0x515b0c
    if ((int32_t)v103 == 0) {
        // 0x515cde
        return result3;
    }
    // 0x515b15
    function_451f2(&v101, 0x100000000000000 * v103 >> 56);
    v86 = v104;
    v87 = v105;
    v84 = 0;
    v85 = v106;
    goto lab_0x515a96;
  lab_0x515a96:;
    int64_t v107 = v85;
    int64_t v108 = v84;
    char v109 = v87;
    int64_t v110 = v86;
    if (result4 != 0) {
        int64_t * v111 = (int64_t *)(result4 + 16); // 0x515aa0
        uint64_t v112 = *v111; // 0x515aa0
        if (v112 < *(int64_t *)(result4 + 24)) {
            // 0x515aae
            *v111 = v112 + 4;
        }
    }
    int64_t v113 = function_50f7d0(v22); // 0x515ac2
    int64_t v114 = v1; // 0x515ac7
    int64_t v115 = v110; // 0x515ad5
    char v116 = v91; // 0x515ad5
    if (v114 != 0) {
        // 0x515adb
        v115 = v110;
        v116 = 0;
        if ((int32_t)v110 == -1) {
            uint64_t v117 = *(int64_t *)(v114 + 16); // 0x515b40
            int64_t v118; // 0x5153d0
            if (v117 >= *(int64_t *)(v114 + 24)) {
                // 0x515c70
                v118 = *(int64_t *)v114;
            } else {
                // 0x515b4e
                v118 = (int64_t)*(int32_t *)v117;
            }
            int64_t v119 = v118;
            if ((int32_t)v119 == -1) {
                // 0x515be8
                v1 = 0;
                v115 = v110;
                v116 = v91;
            } else {
                // 0x515b59
                v115 = 0x100000000 * v119 >> 32;
                v116 = 0;
            }
        }
    }
    // 0x515ae4
    v29 = v91;
    v30 = v109;
    v31 = v108;
    v32 = v107;
    if (v116 == (char)((int32_t)v113 == -1)) {
        goto lab_0x5155eb_2;
    } else {
        int64_t v120 = v115;
        int64_t v121 = function_50f7d0(v22); // 0x515af0
        int64_t v122 = v121 & 0xffffffff; // 0x515af5
        char v123 = *v124; // 0x515af7
        v90 = v120;
        v82 = v109;
        v83 = v122;
        v80 = v108;
        v78 = v107;
        if (v123 == 0) {
            goto lab_0x515a3d;
        } else {
            // 0x515b03
            v90 = v120;
            v82 = v109;
            v83 = v122;
            v80 = v108;
            v78 = v107;
            v104 = v120;
            v105 = v109;
            result3 = v123;
            v103 = v108;
            v106 = v107;
            if (*(int32_t *)(v2 + 76) != (int32_t)v121) {
                goto lab_0x515a3d;
            } else {
                goto lab_0x515b0c;
            }
        }
    }
  lab_0x515951:
    // 0x515951
    v99 = v100;
    int64_t v125; // 0x5153d0
    if (v71 != 0) {
        goto lab_0x515611;
    } else {
        if (v30 == 0) {
            int16_t v126 = v32; // 0x515c18
            *(int16_t *)a8 = v72 != 0 ? -v126 : v126;
            v125 = v100;
        } else {
            // 0x515967
            *(int16_t *)a8 = -1;
            *(int32_t *)a7 = 4;
            v125 = v100;
        }
        goto lab_0x515626;
    }
  lab_0x515611:
    // 0x515611
    *(int16_t *)a8 = 0;
    *(int32_t *)a7 = 4;
    v125 = v99;
    goto lab_0x515626;
  lab_0x515626:
    // 0x515626
    if (v29 != 0) {
        int32_t * v127 = (int32_t *)a7; // 0x515632
        *v127 = *v127 | 2;
    }
    // 0x515635
    if (v125 - 24 != (int64_t)g32) {
        // 0x515c80
        return result4;
    }
    // 0x515650
    __readfsqword(40);
    return result4;
}

// Address range: 0x515d80 - 0x515d85
// From class:    std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_515d80(void) {
    // 0x515d80
    int64_t v1; // 0x515d80
    int64_t result = function_5153d0(v1, v1, v1, v1, v1, v1, (int64_t)&g107, (int64_t)&g107); // 0x515d80
    return result;
}

// Address range: 0x515d90 - 0x515daa
int64_t function_515d90(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 32); // 0x515d93
    if (result != g33) {
        // 0x515da8
        return result;
    }
    // 0x515da0
    int64_t v1; // 0x515d90
    int64_t result2 = function_5153d0(a1, v1, v1, v1, v1, v1, (int64_t)&g107, (int64_t)&g107); // 0x515da0
    return result2;
}

// Address range: 0x515db0 - 0x51665b
int64_t function_515db0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t result4 = a2; // bp-104, 0x515dcc
    int64_t v1 = a4; // bp-120, 0x515de2
    __readfsqword(40);
    int64_t v2 = function_50e0e0(); // 0x515e11
    int32_t v3 = *(int32_t *)(a6 + 24) & 74; // 0x515e1d
    int64_t v4 = 10; // 0x515db0
    int64_t v5; // 0x515db0
    int64_t v6; // 0x515db0
    switch (v3) {
        case 64: {
            // 0x516558
            v4 = 8;
            goto lab_0x515e3b;
        }
        case 8: {
            int64_t result = function_50f6f0(&result4, &v1); // 0x516164
            if ((char)result != 0) {
                // 0x516660
                return result;
            }
            // 0x516175
            v6 = (int64_t)&result4;
            v5 = 16;
            goto lab_0x515e60;
        }
        default: {
            goto lab_0x515e3b;
        }
    }
  lab_0x515f5b:;
    char v7 = 1; // 0x515f60
    int64_t v8; // 0x515db0
    int64_t v9 = v8; // 0x515f60
    int64_t v10; // 0x515db0
    int64_t v11 = v10; // 0x515f60
    int64_t v12; // 0x515db0
    int64_t v13 = v12; // 0x515f60
    uint32_t v14; // 0x515db0
    if (v14 >= (int32_t)v10) {
        goto lab_0x516278;
    } else {
        goto lab_0x515f6b;
    }
  lab_0x516278:;
    // 0x516278
    int64_t v15; // 0x515db0
    int64_t v16 = (0x100000000 * v10 >> 32) * (0x100000000 * v15 >> 32); // 0x516278
    char v17; // 0x515db0
    v7 = v17 | (char)(-1 - (int32_t)v13 < (int32_t)v16);
    v9 = v8 + 1 & 0xffffffff;
    v11 = v13 + v16 & 0xffffffff;
    goto lab_0x515f6b;
  lab_0x515f6b:
    // 0x515f6b
    if (result4 != 0) {
        int64_t * v18 = (int64_t *)(result4 + 16); // 0x515f75
        uint64_t v19 = *v18; // 0x515f75
        if (v19 < *(int64_t *)(result4 + 24)) {
            // 0x515f83
            *v18 = v19 + 4;
        }
    }
    // 0x515f93
    int64_t v20; // 0x515db0
    int64_t v21 = function_50f7d0(v20); // 0x515f97
    int64_t v22; // 0x515db0
    int64_t v23 = v22; // 0x515faa
    char v24 = 1; // 0x515faa
    int64_t result2; // 0x515db0
    if (v1 != 0) {
        // 0x515fb0
        v23 = v22;
        v24 = 0;
        if ((int32_t)v22 == -1) {
            uint64_t v25 = *(int64_t *)(v1 + 16); // 0x5162b0
            result2 = v25;
            if (v25 >= *(int64_t *)(v1 + 24)) {
                // 0x516660
                return result2;
            }
            int32_t v26 = *(int32_t *)v25; // 0x5162be
            if (v26 == -1) {
                // 0x5165e0
                v1 = 0;
                v23 = v22;
                v24 = 1;
            } else {
                // 0x5162c9
                v23 = v26;
                v24 = 0;
            }
        }
    }
    char v27 = 1; // 0x515fbf
    char v28 = v7; // 0x515fbf
    int64_t v29 = v9; // 0x515fbf
    int64_t v30 = v11; // 0x515fbf
    if (v24 == (char)((int32_t)v21 == -1)) {
        // break -> 0x515fca
        goto lab_0x515fca_2;
    }
    int64_t v31 = v23; // 0x5162ab
    char v32 = v7; // 0x5162ab
    int64_t v33 = function_50f7d0(v20) & 0xffffffff; // 0x5162ab
    int64_t v34 = v9; // 0x5162ab
    int64_t v35 = v11; // 0x5162ab
    goto lab_0x515f39;
  lab_0x51613e_3:;
    // 0x51613e
    int64_t v40; // 0x515db0
    int64_t v41 = v40; // 0x516147
    char v42 = 1; // 0x516147
    char * v43; // 0x515e71
    int64_t v44 = (int64_t)*v43; // 0x516147
    int64_t v45; // 0x515db0
    int64_t v46 = v45; // 0x516147
    int64_t v47; // 0x515db0
    int64_t v48 = v47; // 0x516147
    int64_t v49; // 0x515db0
    int64_t v50 = v49; // 0x516147
    int64_t v51; // 0x515db0
    int64_t v52 = v51; // 0x516147
    goto lab_0x515ec8;
  lab_0x5160ab:;
    // 0x5160ab
    int64_t v124; // 0x515db0
    int64_t v125 = v124;
    int32_t v126; // 0x515db0
    int64_t result5; // 0x515db0
    if (*(int32_t *)(v2 + 232) != v126) {
        // 0x5160b3
        if (*(int32_t *)(v2 + 236) != v126) {
            // 0x516660
            result5 = result2;
            return result5;
        }
    }
    int64_t v127 = 0; // 0x5160ce
    int64_t v128 = 16; // 0x5160ce
    int64_t v129 = 0; // 0x5160ce
    int64_t v130; // 0x515db0
    if (v3 != 0 && (int32_t)v130 != 16) {
        // 0x5166a1
        return v125 & -256;
    }
    goto lab_0x5160e0;
  lab_0x5160e0:
    // 0x5160e0
    v51 = v129;
    v49 = v128;
    v47 = v127;
    int64_t v131 = result4; // 0x5160e0
    int64_t v132; // 0x515db0
    int64_t v133; // 0x515db0
    char v134; // 0x515db0
    int64_t v135; // 0x515db0
    int64_t v136; // 0x515db0
    if (v131 == 0) {
        // 0x51619c
        v132 = v1;
        goto lab_0x5161a1;
    } else {
        int64_t * v137 = (int64_t *)(v131 + 16); // 0x5160ee
        uint64_t v138 = *v137; // 0x5160ee
        int64_t * v139 = (int64_t *)(v131 + 24); // 0x5160f2
        uint64_t v140 = *v139; // 0x5160f2
        int64_t v141 = v140; // 0x5160f6
        int64_t v142 = v138; // 0x5160f6
        if (v138 < v140) {
            // 0x5160fc
            v142 = v138 + 4;
            *v137 = v142;
            v141 = *v139;
        }
        uint64_t v143 = v142; // 0x51610c
        int64_t v144; // 0x515db0
        if (v143 >= v141) {
            // 0x5165a0
            v144 = *(int64_t *)v131;
        } else {
            // 0x51611a
            v144 = (int64_t)*(int32_t *)v143;
        }
        int64_t v145 = v1; // 0x51611f
        if ((int32_t)v144 == -1) {
            // 0x516378
            result4 = 0;
            v132 = v145;
            goto lab_0x5161a1;
        } else {
            // 0x51612a
            v136 = v135;
            if (v145 == 0) {
                goto lab_0x5161b2;
            } else {
                // 0x516133
                v40 = v135;
                v134 = 0;
                v133 = v145;
                if ((int32_t)v135 != -1) {
                    goto lab_0x51613e_3;
                }
                goto lab_0x516212;
            }
        }
    }
  lab_0x5161a1:;
    int64_t v146 = v132;
    v40 = v135;
    if (v146 == 0) {
        goto lab_0x51613e_3;
    }
    // 0x5161a6
    v136 = v135;
    v134 = 1;
    v133 = v146;
    if ((int32_t)v135 == -1) {
        goto lab_0x516212;
    } else {
        goto lab_0x5161b2;
    }
  lab_0x516212:;
    int64_t v147 = v133;
    uint64_t v148 = *(int64_t *)(v147 + 16); // 0x516212
    int64_t v149; // 0x515db0
    if (v148 >= *(int64_t *)(v147 + 24)) {
        // 0x5165b0
        v149 = *(int64_t *)v147;
    } else {
        // 0x516220
        v149 = (int64_t)*(int32_t *)v148;
    }
    int64_t v150 = v149;
    int64_t v151; // 0x515db0
    char v152; // 0x515db0
    if ((int32_t)v150 == -1) {
        // 0x516390
        v1 = 0;
        v151 = v135;
        v152 = 1;
    } else {
        // 0x51622b
        v151 = 0x100000000 * v150 >> 32;
        v152 = 0;
    }
    // 0x516231
    v40 = v151;
    v136 = v151;
    if (v152 == v134) {
        goto lab_0x51613e_3;
    }
    goto lab_0x5161b2;
  lab_0x5161b2:;
    // 0x5161b2
    int64_t v60; // 0x515db0
    int64_t v153 = function_50f7d0(v60); // 0x5161b6
    if ((char)v47 == 0) {
        // 0x516660
        result5 = result2;
        return result5;
    }
    int64_t v154 = v136; // 0x5161ca
    int64_t v155 = v153; // 0x5161ca
    int64_t v156 = (int64_t)*v43; // 0x5161ca
    int64_t v157 = v153 & 0xffffffff; // 0x5161ca
    int64_t v158 = v47; // 0x5161ca
    int64_t v159 = v49; // 0x5161ca
    int64_t v160 = v51; // 0x5161ca
    goto lab_0x516080;
  lab_0x515e3b:;
    int64_t v170 = (int64_t)&result4; // 0x515e4b
    char v171 = function_50f6f0(&result4, &v1); // 0x515e54
    v6 = v170;
    v5 = v4;
    int32_t v57; // 0x515db0
    int64_t v65; // 0x515db0
    int64_t v66; // 0x515db0
    int64_t v67; // 0x515db0
    int64_t v64; // 0x515db0
    int64_t v63; // 0x515db0
    int64_t v58; // 0x515db0
    char v62; // 0x515db0
    char v61; // 0x515db0
    int64_t v59; // 0x515db0
    if (v171 != 0) {
        // 0x516630
        v57 = v4;
        v58 = a5;
        v59 = v170;
        v61 = v171;
        v62 = 0;
        v63 = (int64_t)*(char *)(v2 + 32);
        v64 = 0;
        v65 = 0;
        v66 = v4;
        v67 = 0;
        goto lab_0x515ed7;
    } else {
        goto lab_0x515e60;
    }
  lab_0x515e60:;
    int64_t v172 = v5;
    v60 = v6;
    int64_t v173 = function_50f7d0(v60); // 0x515e64
    int64_t v174 = v173 & 0xffffffff; // 0x515e69
    uint32_t v54 = *(int32_t *)(v2 + 224); // 0x515e6b
    int64_t v175 = v54; // 0x515e6b
    v43 = (char *)(v2 + 32);
    unsigned char v176 = *v43; // 0x515e71
    int64_t v177 = v176; // 0x515e71
    int32_t v55 = v173; // 0x515e75
    int64_t v178; // 0x515db0
    int64_t v179; // 0x515db0
    int64_t v180; // 0x515db0
    if (v54 == v55) {
        goto lab_0x515e8a;
    } else {
        // 0x515e7e
        v178 = v175;
        v180 = v177;
        v179 = v174;
        if (*(int32_t *)(v2 + 228) != v55) {
            goto lab_0x516070;
        } else {
            goto lab_0x515e8a;
        }
    }
  lab_0x515ed7:;
    int64_t v68 = v58; // 0x515eda
    v20 = v59;
    char v69 = v61; // 0x515eda
    char v70 = v62; // 0x515eda
    int32_t n = v57; // 0x515eda
    int64_t v71 = v63; // 0x515eda
    int64_t v72 = v64; // 0x515eda
    int64_t v73 = v65; // 0x515eda
    v15 = v66;
    int64_t v74 = v67; // 0x515eda
    goto lab_0x515edf;
  lab_0x515e8a:
    if (v176 != 0) {
        // 0x516060
        v178 = v175;
        v180 = v177;
        v179 = v174;
        if (*(int32_t *)(v2 + 76) != v55) {
            goto lab_0x515e92;
        } else {
            goto lab_0x516070;
        }
    } else {
        goto lab_0x515e92;
    }
  lab_0x515edf:;
    int64_t v97 = (int64_t)&g97; // bp-72, 0x515eec
    if ((char)v71 != 0) {
        // 0x516568
        function_259ce(&v97, 32);
    }
    // 0x515efa
    v14 = 0xffffffff / (int32_t)v15;
    char v89 = *(char *)(v2 + 328); // 0x515f08
    int64_t result6 = v89; // 0x515f08
    int64_t v99; // 0x515db0
    int64_t v78; // 0x515db0
    int64_t v76; // 0x515db0
    int64_t v102; // 0x515db0
    char result3; // 0x515db0
    int64_t v81; // 0x515db0
    int64_t v100; // 0x515db0
    int64_t v88; // 0x515db0
    char v80; // 0x515db0
    char v101; // 0x515db0
    char * v120; // 0x51640c
    if (v89 != 0) {
        // 0x5163e0
        if (v69 != 0) {
            // 0x516660
            return result6;
        }
        // 0x5163eb
        v120 = (char *)(v2 + 32);
        char v181 = *v120; // 0x51640c
        v88 = v68;
        v80 = 0;
        v81 = v72;
        v78 = v74;
        v76 = 0;
        if (v181 == 0) {
            goto lab_0x51641d;
        } else {
            // 0x516414
            v88 = v68;
            v80 = 0;
            v81 = v72;
            v78 = v74;
            v76 = 0;
            v100 = v68;
            v101 = 0;
            result3 = v181;
            v99 = v74;
            v102 = 0;
            if (*(int32_t *)(v2 + 76) == (int32_t)v72) {
                goto lab_0x5164e5;
            } else {
                goto lab_0x51641d;
            }
        }
    } else {
        // 0x515f1b
        if (v69 != 0) {
            // 0x516660
            return result6;
        }
        int64_t v37 = 0x1000000 * n + 0x30000000 >> 24;
        v31 = v68;
        v32 = 0;
        v33 = v72;
        v34 = v74;
        v35 = 0;
        while (true) {
          lab_0x515f39:
            // 0x515f39
            v10 = v35;
            v8 = v34;
            int64_t v36 = v33;
            v17 = v32;
            v22 = v31;
            if (n < 11) {
                // 0x515f45
                v27 = 0;
                v28 = v17;
                v29 = v8;
                v30 = v10;
                if (v36 < v37 != (int32_t)v36 > 47) {
                    // break -> 0x515fca
                    break;
                }
                // 0x515f58
                v12 = v36 + 0xffffffd0;
                goto lab_0x515f5b;
            } else {
                int64_t v38 = v36 + 0xffffffd0; // 0x516240
                v12 = v38;
                if ((int32_t)v38 < 10) {
                    goto lab_0x515f5b;
                } else {
                    int32_t v39 = v36;
                    if (v39 < 103) {
                        // 0x5163b8
                        v12 = v36 + 0xffffffa9;
                        goto lab_0x515f5b;
                    } else {
                        // 0x516258
                        v27 = 0;
                        v28 = v17;
                        v29 = v8;
                        v30 = v10;
                        if (v39 >= 71) {
                            // break -> 0x515fca
                            break;
                        }
                        // 0x516264
                        v7 = 1;
                        v9 = v8;
                        v11 = v10;
                        v13 = v36 + 0xffffffc9;
                        if (v14 < (int32_t)v10) {
                            goto lab_0x515f6b;
                        } else {
                            goto lab_0x516278;
                        }
                    }
                }
            }
        }
        goto lab_0x515fca_2;
    }
  lab_0x515e92:
    // 0x515e92
    v178 = v175;
    v180 = v177;
    v179 = v174;
    if (*(int32_t *)(v2 + 72) == v55) {
        goto lab_0x516070;
    } else {
        int64_t v182 = function_50f6f0((int64_t *)function_50d7a0(v60), &v1); // 0x515eaa
        char v183 = v182; // 0x515eaf
        if (v183 == 0) {
            int64_t v184 = function_50f7d0(v60); // 0x51661c
            v178 = v184;
            v180 = (int64_t)*v43;
            v179 = v184 & 0xffffffff;
            goto lab_0x516070;
        } else {
            // 0x515ebb
            v41 = a5;
            v42 = v183;
            v44 = (int64_t)*v43;
            v46 = v174;
            v48 = 0;
            v50 = v172;
            v52 = 0;
            goto lab_0x515ec8;
        }
    }
  lab_0x516070:
    // 0x516070
    v154 = a5;
    v155 = v178;
    v156 = v180;
    v157 = v179;
    v158 = 0;
    v159 = v172;
    v160 = 0;
    while (true) {
      lab_0x516080:;
        int64_t v161 = v160;
        v130 = v159;
        int64_t v162 = v158;
        v45 = v157;
        int64_t v163 = v156;
        int64_t v164 = v155;
        v135 = v154;
        int32_t v165; // 0x515db0
        if (v163 == 0) {
            // 0x516080
            v165 = v45;
        } else {
            int32_t v166 = v45;
            v41 = v135;
            v42 = 0;
            v44 = v163;
            v46 = v45;
            v48 = v162;
            v50 = v130;
            v52 = v161;
            v165 = v166;
            if (*(int32_t *)(v2 + 76) == v166) {
                // break -> 0x515ec8
                break;
            }
        }
        // 0x51608d
        v126 = v165;
        v41 = v135;
        v42 = 0;
        v44 = v163;
        v46 = v45;
        v48 = v162;
        v50 = v130;
        v52 = v161;
        if (*(int32_t *)(v2 + 72) == v126) {
            // break -> 0x515ec8
            break;
        }
        // 0x516096
        if (*(int32_t *)(v2 + 240) == v126) {
            int32_t v167 = v130; // 0x5161d4
            unsigned char v168 = (char)v162 ^ 1 | (char)(v167 == 10); // 0x5161db
            int64_t v169 = v164 & -256 | (int64_t)v168; // 0x5161db
            v124 = v169;
            if (v168 == 0) {
                goto lab_0x5160ab;
            } else {
                // 0x5161e4
                v127 = 1;
                v128 = 8;
                v129 = 0;
                if (v3 != 0 && v167 != 8) {
                    // 0x5163a8
                    v127 = v169 & 0xffffffff;
                    v128 = v130;
                    v129 = v161 + 1 & 0xffffffff;
                }
                goto lab_0x5160e0;
            }
        } else {
            // 0x5160a2
            v41 = v135;
            v42 = 0;
            v44 = v163;
            v46 = v45;
            v48 = v162;
            v50 = v130;
            v52 = v161;
            v124 = v164;
            if ((char)v162 == 0) {
                // break -> 0x515ec8
                break;
            }
            goto lab_0x5160ab;
        }
    }
    goto lab_0x515ec8;
  lab_0x515ec8:;
    char v53 = v54 == v55; // 0x515e77
    int32_t v56 = v50;
    v57 = v56;
    v58 = v41;
    v59 = v60;
    v61 = v42;
    v62 = v53;
    v63 = v44;
    v64 = v46;
    v65 = v48;
    v66 = v50;
    v67 = v52;
    v68 = v41;
    v20 = v60;
    v69 = v42;
    v70 = v53;
    n = 22;
    v71 = v44;
    v72 = v46;
    v73 = v48;
    v15 = v50;
    v74 = v52;
    if (v56 == 16) {
        goto lab_0x515edf;
    } else {
        goto lab_0x515ed7;
    }
  lab_0x51641d:;
    int64_t v75 = v76;
    int64_t v77 = v78;
    char v79 = v80;
    int32_t c = v81; // 0x51641d
    v27 = 0;
    v28 = v79;
    v29 = v77;
    v30 = v75;
    int64_t v82; // 0x515db0
    int64_t v83; // 0x515db0
    int64_t v84; // 0x515db0
    char v85; // 0x515db0
    if (*(int32_t *)(v2 + 72) == c) {
        goto lab_0x515fca_2;
    } else {
        int64_t wstr = v2 + 240; // 0x5163eb
        int32_t * v86 = wmemchr((int32_t *)wstr, c, n); // 0x516431
        v27 = 0;
        v28 = v79;
        v29 = v77;
        v30 = v75;
        if (v86 == NULL) {
            goto lab_0x515fca_2;
        } else {
            int64_t v87 = v88;
            v84 = v87;
            v85 = v89;
            v82 = v77;
            v83 = v75;
            if (v14 >= (int32_t)v75) {
                int64_t v90 = (int64_t)v86 - wstr >> 2; // 0x51643e
                int32_t v91 = v90; // 0x516445
                int32_t v92 = v91 - 15; // 0x516445
                int64_t v93 = v92 < 0 == (14 - v91 & v91) < 0 == (v92 != 0) ? v90 + 0xfffffffa : v90; // 0x516448
                int64_t v94 = (0x100000000 * v75 >> 32) * (0x100000000 * v15 >> 32); // 0x516456
                v84 = v87;
                v85 = v79 | (char)(-1 - (int32_t)v93 < (int32_t)v94);
                v82 = v77 + 1 & 0xffffffff;
                v83 = v93 + v94 & 0xffffffff;
            }
            goto lab_0x51646f;
        }
    }
  lab_0x515fca_2:;
    // 0x515fca
    int64_t v95; // 0x515db0
    int64_t v96; // 0x515db0
    if (g96 != 0) {
        // 0x5162e0
        function_451f2(&v97, 0x100000000000000 * v29 >> 56);
        int64_t v98 = *(int64_t *)(v2 + 16); // 0x5162f8
        if ((char)function_569070(v98, *(int64_t *)(v2 + 24), &v97) == 0) {
            // 0x516308
            *(int32_t *)a7 = 4;
        }
        // 0x516313
        v96 = v97;
        if ((int32_t)v29 != 0) {
            goto lab_0x516331;
        } else {
            // 0x516320
            v95 = v97;
            v96 = v97;
            if ((char)v73 != 1 == g96 == 0) {
                goto lab_0x515ff0;
            } else {
                goto lab_0x516331;
            }
        }
    } else {
        // 0x515fdd
        v96 = v97;
        if ((char)v73 == 1) {
            goto lab_0x516331;
        } else {
            // 0x515fe7
            v95 = v97;
            v96 = v97;
            if ((int32_t)v29 != 0) {
                goto lab_0x516331;
            } else {
                goto lab_0x515ff0;
            }
        }
    }
  lab_0x5164e5:
    // 0x5164e5
    if ((int32_t)v99 == 0) {
        // 0x5166be
        return result3;
    }
    // 0x5164ee
    function_451f2(&v97, 0x100000000000000 * v99 >> 56);
    v84 = v100;
    v85 = v101;
    v82 = 0;
    v83 = v102;
    goto lab_0x51646f;
  lab_0x51646f:;
    int64_t v103 = v83;
    int64_t v104 = v82;
    char v105 = v85;
    int64_t v106 = v84;
    if (result4 != 0) {
        int64_t * v107 = (int64_t *)(result4 + 16); // 0x516479
        uint64_t v108 = *v107; // 0x516479
        if (v108 < *(int64_t *)(result4 + 24)) {
            // 0x516487
            *v107 = v108 + 4;
        }
    }
    int64_t v109 = function_50f7d0(v20); // 0x51649b
    int64_t v110 = v1; // 0x5164a0
    int64_t v111 = v106; // 0x5164ae
    char v112 = v89; // 0x5164ae
    if (v110 != 0) {
        // 0x5164b4
        v111 = v106;
        v112 = 0;
        if ((int32_t)v106 == -1) {
            uint64_t v113 = *(int64_t *)(v110 + 16); // 0x516520
            int64_t v114; // 0x515db0
            if (v113 >= *(int64_t *)(v110 + 24)) {
                // 0x516650
                v114 = *(int64_t *)v110;
            } else {
                // 0x51652e
                v114 = (int64_t)*(int32_t *)v113;
            }
            int64_t v115 = v114;
            if ((int32_t)v115 == -1) {
                // 0x5165c8
                v1 = 0;
                v111 = v106;
                v112 = v89;
            } else {
                // 0x516539
                v111 = 0x100000000 * v115 >> 32;
                v112 = 0;
            }
        }
    }
    // 0x5164bd
    v27 = v89;
    v28 = v105;
    v29 = v104;
    v30 = v103;
    if (v112 == (char)((int32_t)v109 == -1)) {
        goto lab_0x515fca_2;
    } else {
        int64_t v116 = v111;
        int64_t v117 = function_50f7d0(v20); // 0x5164c9
        int64_t v118 = v117 & 0xffffffff; // 0x5164ce
        char v119 = *v120; // 0x5164d0
        v88 = v116;
        v80 = v105;
        v81 = v118;
        v78 = v104;
        v76 = v103;
        if (v119 == 0) {
            goto lab_0x51641d;
        } else {
            // 0x5164dc
            v88 = v116;
            v80 = v105;
            v81 = v118;
            v78 = v104;
            v76 = v103;
            v100 = v116;
            v101 = v105;
            result3 = v119;
            v99 = v104;
            v102 = v103;
            if (*(int32_t *)(v2 + 76) != (int32_t)v117) {
                goto lab_0x51641d;
            } else {
                goto lab_0x5164e5;
            }
        }
    }
  lab_0x516331:
    // 0x516331
    v95 = v96;
    int64_t v121; // 0x515db0
    if (v69 != 0) {
        goto lab_0x515ff0;
    } else {
        if (v28 == 0) {
            int32_t v122 = v30; // 0x5165f8
            *(int32_t *)a8 = v70 != 0 ? -v122 : v122;
            v121 = v96;
        } else {
            // 0x516347
            *(int32_t *)a8 = -1;
            *(int32_t *)a7 = 4;
            v121 = v96;
        }
        goto lab_0x516006;
    }
  lab_0x515ff0:
    // 0x515ff0
    *(int32_t *)a8 = 0;
    *(int32_t *)a7 = 4;
    v121 = v95;
    goto lab_0x516006;
  lab_0x516006:
    // 0x516006
    if (v27 != 0) {
        int32_t * v123 = (int32_t *)a7; // 0x516012
        *v123 = *v123 | 2;
    }
    // 0x516015
    if (v121 - 24 != (int64_t)g32) {
        // 0x516660
        return result4;
    }
    // 0x516030
    __readfsqword(40);
    return result4;
}

// Address range: 0x516760 - 0x516765
// From class:    std::num_get<wchar_t, std::istreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_516760(void) {
    // 0x516760
    int64_t v1; // 0x516760
    int64_t result = function_515db0(v1, v1, v1, v1, v1, v1, (int64_t)&g107, (int64_t)&g107); // 0x516760
    return result;
}

// Address range: 0x516770 - 0x51678a
int64_t function_516770(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 40); // 0x516773
    if (result != g30) {
        // 0x516788
        return result;
    }
    // 0x516780
    int64_t v1; // 0x516770
    int64_t result2 = function_515db0(a1, v1, v1, v1, v1, v1, (int64_t)&g107, (int64_t)&g107); // 0x516780
    return result2;
}

// Address range: 0x516790 - 0x517065
int64_t function_516790(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t result3 = a2; // bp-104, 0x5167ac
    int64_t v1 = a4; // bp-120, 0x5167c2
    __readfsqword(40);
    int64_t v2 = function_50e0e0(); // 0x5167f1
    int32_t v3 = *(int32_t *)(a6 + 24) & 74; // 0x5167fd
    int64_t v4 = 10; // 0x516790
    int64_t v5; // 0x516790
    int64_t v6; // 0x516790
    switch (v3) {
        case 64: {
            // 0x516f38
            v4 = 8;
            goto lab_0x51681b;
        }
        case 8: {
            int64_t result = function_50f6f0(&result3, &v1); // 0x516b44
            if ((char)result != 0) {
                // 0x517060
                return result;
            }
            // 0x516b55
            v6 = (int64_t)&result3;
            v5 = 16;
            goto lab_0x516840;
        }
        default: {
            goto lab_0x51681b;
        }
    }
  lab_0x516944:;
    // 0x516944
    int64_t v7; // 0x516790
    int64_t v8 = v7; // 0x516949
    int64_t v9; // 0x516790
    int64_t v10 = v9; // 0x516949
    int64_t v11 = 1; // 0x516949
    int64_t v12; // 0x516790
    int64_t v13 = v12; // 0x516949
    uint64_t v14; // 0x516790
    if (v14 >= v7) {
        goto lab_0x516c58;
    } else {
        goto lab_0x516955;
    }
  lab_0x516c58:;
    // 0x516c58
    uint64_t v15; // 0x5168da
    uint64_t v16 = v7 * v15; // 0x516c58
    int64_t v17 = 0x100000000 * v13 >> 32; // 0x516c5e
    v8 = v17 + v16;
    v10 = v9 + 1 & 0xffffffff;
    int64_t v18; // 0x516790
    v11 = v18 | (int64_t)(v16 > -1 - v17);
    goto lab_0x516955;
  lab_0x516955:
    // 0x516955
    if (result3 != 0) {
        int64_t * v19 = (int64_t *)(result3 + 16); // 0x51695f
        uint64_t v20 = *v19; // 0x51695f
        if (v20 < *(int64_t *)(result3 + 24)) {
            // 0x51696d
            *v19 = v20 + 4;
        }
    }
    // 0x51697d
    int64_t v21; // 0x516790
    int64_t v22 = function_50f7d0(v21); // 0x516981
    int64_t v23 = v1; // 0x516986
    int64_t v24; // 0x516790
    int64_t v25 = v24; // 0x516994
    char v26 = 1; // 0x516994
    if (v23 != 0) {
        // 0x51699a
        v25 = v24;
        v26 = 0;
        if ((int32_t)v24 == -1) {
            uint64_t v27 = *(int64_t *)(v23 + 16); // 0x516c90
            int64_t v28; // 0x516790
            if (v27 >= *(int64_t *)(v23 + 24)) {
                // 0x517040
                v28 = *(int64_t *)v23;
            } else {
                // 0x516c9e
                v28 = (int64_t)*(int32_t *)v27;
            }
            int64_t v29 = v28;
            if ((int32_t)v29 == -1) {
                // 0x516fc0
                v1 = 0;
                v25 = v24;
                v26 = 1;
            } else {
                // 0x516ca9
                v25 = 0x100000000 * v29 >> 32;
                v26 = 0;
            }
        }
    }
    char v30 = 1; // 0x5169a9
    int64_t v31 = v8; // 0x5169a9
    int64_t v32 = v10; // 0x5169a9
    int64_t v33 = v11; // 0x5169a9
    if (v26 == (char)((int32_t)v22 == -1)) {
        // break -> 0x5169b4
        goto lab_0x5169b4_2;
    }
    int64_t v34 = v25; // 0x516c8b
    int64_t v35 = function_50f7d0(v21) & 0xffffffff; // 0x516c8b
    int64_t v36 = v8; // 0x516c8b
    int64_t v37 = v10; // 0x516c8b
    int64_t v38 = v11; // 0x516c8b
    goto lab_0x516922;
  lab_0x516b1e_3:;
    // 0x516b1e
    int64_t v43; // 0x516790
    int64_t v44 = v43; // 0x516b27
    char v45 = 1; // 0x516b27
    char * v46; // 0x516851
    int64_t v47 = (int64_t)*v46; // 0x516b27
    int64_t v48; // 0x516790
    int64_t v49 = v48; // 0x516b27
    int64_t v50; // 0x516790
    int64_t v51 = v50; // 0x516b27
    int64_t v52; // 0x516790
    int64_t v53 = v52; // 0x516b27
    int64_t v54; // 0x516790
    int64_t v55 = v54; // 0x516b27
    goto lab_0x5168a8_2;
  lab_0x516a8b:;
    // 0x516a8b
    int64_t v129; // 0x516790
    int64_t v130 = v129;
    int32_t v131; // 0x516790
    if (*(int32_t *)(v2 + 232) != v131) {
        // 0x516a93
        if (*(int32_t *)(v2 + 236) != v131) {
            // break -> 0x5168a8
            goto lab_0x5168a8_2;
        }
    }
    int64_t v132 = 0; // 0x516aae
    int64_t v133 = 16; // 0x516aae
    int64_t v134 = 0; // 0x516aae
    int64_t v135; // 0x516790
    if (v3 != 0 && (int32_t)v135 != 16) {
        // 0x517081
        return v130 & -256;
    }
    goto lab_0x516ac0;
  lab_0x516ac0:
    // 0x516ac0
    v54 = v134;
    v52 = v133;
    v50 = v132;
    int64_t v136 = result3; // 0x516ac0
    int64_t v137; // 0x516790
    int64_t v138; // 0x516790
    char v139; // 0x516790
    int64_t v140; // 0x516790
    int64_t v141; // 0x516790
    if (v136 == 0) {
        // 0x516b7c
        v137 = v1;
        goto lab_0x516b81;
    } else {
        int64_t * v142 = (int64_t *)(v136 + 16); // 0x516ace
        uint64_t v143 = *v142; // 0x516ace
        int64_t * v144 = (int64_t *)(v136 + 24); // 0x516ad2
        uint64_t v145 = *v144; // 0x516ad2
        int64_t v146 = v145; // 0x516ad6
        int64_t v147 = v143; // 0x516ad6
        if (v143 < v145) {
            // 0x516adc
            v147 = v143 + 4;
            *v142 = v147;
            v146 = *v144;
        }
        uint64_t v148 = v147; // 0x516aec
        int64_t v149; // 0x516790
        if (v148 >= v146) {
            // 0x516f80
            v149 = *(int64_t *)v136;
        } else {
            // 0x516afa
            v149 = (int64_t)*(int32_t *)v148;
        }
        int64_t v150 = v1; // 0x516aff
        if ((int32_t)v149 == -1) {
            // 0x516d58
            result3 = 0;
            v137 = v150;
            goto lab_0x516b81;
        } else {
            // 0x516b0a
            v141 = v140;
            if (v150 == 0) {
                goto lab_0x516b92;
            } else {
                // 0x516b13
                v43 = v140;
                v139 = 0;
                v138 = v150;
                if ((int32_t)v140 != -1) {
                    goto lab_0x516b1e_3;
                }
                goto lab_0x516bf2;
            }
        }
    }
  lab_0x516b81:;
    int64_t v151 = v137;
    v43 = v140;
    if (v151 == 0) {
        goto lab_0x516b1e_3;
    }
    // 0x516b86
    v141 = v140;
    v139 = 1;
    v138 = v151;
    if ((int32_t)v140 == -1) {
        goto lab_0x516bf2;
    } else {
        goto lab_0x516b92;
    }
  lab_0x516bf2:;
    int64_t v152 = v138;
    uint64_t v153 = *(int64_t *)(v152 + 16); // 0x516bf2
    int64_t v154; // 0x516790
    if (v153 >= *(int64_t *)(v152 + 24)) {
        // 0x516f90
        v154 = *(int64_t *)v152;
    } else {
        // 0x516c00
        v154 = (int64_t)*(int32_t *)v153;
    }
    int64_t v155 = v154;
    int64_t v156; // 0x516790
    char v157; // 0x516790
    if ((int32_t)v155 == -1) {
        // 0x516d70
        v1 = 0;
        v156 = v140;
        v157 = 1;
    } else {
        // 0x516c0b
        v156 = 0x100000000 * v155 >> 32;
        v157 = 0;
    }
    // 0x516c11
    v43 = v156;
    v141 = v156;
    if (v157 == v139) {
        goto lab_0x516b1e_3;
    }
    goto lab_0x516b92;
  lab_0x516b92:;
    // 0x516b92
    int64_t v63; // 0x516790
    int64_t v158 = function_50f7d0(v63); // 0x516b96
    if ((char)v50 == 0) {
        // 0x517060
        int64_t v159; // 0x516790
        int64_t result4 = v159;
        return result4;
    }
    int64_t v160 = v141; // 0x516baa
    int64_t v161 = v158; // 0x516baa
    int64_t v162 = (int64_t)*v46; // 0x516baa
    int64_t v163 = v158 & 0xffffffff; // 0x516baa
    int64_t v164 = v50; // 0x516baa
    int64_t v165 = v52; // 0x516baa
    int64_t v166 = v54; // 0x516baa
    goto lab_0x516a60;
  lab_0x51681b:;
    int64_t v176 = (int64_t)&result3; // 0x51682b
    char v177 = function_50f6f0(&result3, &v1); // 0x516834
    v6 = v176;
    v5 = v4;
    int32_t v60; // 0x516790
    int64_t v68; // 0x516790
    int64_t v69; // 0x516790
    int64_t v70; // 0x516790
    int64_t v67; // 0x516790
    int64_t v66; // 0x516790
    int64_t v61; // 0x516790
    char v65; // 0x516790
    char v64; // 0x516790
    int64_t v62; // 0x516790
    if (v177 != 0) {
        // 0x517010
        v60 = v4;
        v61 = a5;
        v62 = v176;
        v64 = v177;
        v65 = 0;
        v66 = (int64_t)*(char *)(v2 + 32);
        v67 = 0;
        v68 = 0;
        v69 = v4;
        v70 = 0;
        goto lab_0x5168b7;
    } else {
        goto lab_0x516840;
    }
  lab_0x516840:;
    int64_t v178 = v5;
    v63 = v6;
    int64_t v179 = function_50f7d0(v63); // 0x516844
    int64_t v180 = v179 & 0xffffffff; // 0x516849
    uint32_t v57 = *(int32_t *)(v2 + 224); // 0x51684b
    int64_t v181 = v57; // 0x51684b
    v46 = (char *)(v2 + 32);
    unsigned char v182 = *v46; // 0x516851
    int64_t v183 = v182; // 0x516851
    int32_t v58 = v179; // 0x516855
    int64_t v184; // 0x516790
    int64_t v185; // 0x516790
    int64_t v186; // 0x516790
    if (v57 == v58) {
        goto lab_0x51686a;
    } else {
        // 0x51685e
        v184 = v181;
        v186 = v183;
        v185 = v180;
        if (*(int32_t *)(v2 + 228) != v58) {
            goto lab_0x516a58;
        } else {
            goto lab_0x51686a;
        }
    }
  lab_0x5168b7:;
    int64_t v71 = v61; // 0x5168ba
    v21 = v62;
    char v72 = v64; // 0x5168ba
    char v73 = v65; // 0x5168ba
    int32_t n = v60; // 0x5168ba
    int64_t v74 = v66; // 0x5168ba
    int64_t v75 = v67; // 0x5168ba
    int64_t v76 = v68; // 0x5168ba
    int64_t v77 = v69; // 0x5168ba
    int64_t v78 = v70; // 0x5168ba
    goto lab_0x5168bf;
  lab_0x51686a:
    if (v182 != 0) {
        // 0x516a48
        v184 = v181;
        v186 = v183;
        v185 = v180;
        if (*(int32_t *)(v2 + 76) != v58) {
            goto lab_0x516872;
        } else {
            goto lab_0x516a58;
        }
    } else {
        goto lab_0x516872;
    }
  lab_0x5168bf:;
    int64_t v102 = (int64_t)&g97; // bp-72, 0x5168cc
    if ((char)v74 != 0) {
        // 0x516f48
        function_259ce(&v102, 32);
    }
    // 0x5168da
    v15 = 0x100000000 * v77 >> 32;
    v14 = 0xffffffffffffffff / v15;
    char v118 = *(char *)(v2 + 328); // 0x5168f3
    int64_t result5 = v118; // 0x5168f3
    int64_t v84; // 0x516790
    int64_t v106; // 0x516790
    int64_t v104; // 0x516790
    int64_t v82; // 0x516790
    int64_t v80; // 0x516790
    int64_t v107; // 0x516790
    char result2; // 0x516790
    int64_t v85; // 0x516790
    int64_t v105; // 0x516790
    int64_t v92; // 0x516790
    char * v126; // 0x516dea
    if (v118 != 0) {
        // 0x516dc0
        if (v72 != 0) {
            // 0x517060
            return result5;
        }
        // 0x516dcb
        v126 = (char *)(v2 + 32);
        char v187 = *v126; // 0x516dea
        v92 = v71;
        v85 = v75;
        v84 = 0;
        v82 = v78;
        v80 = 0;
        if (v187 == 0) {
            goto lab_0x516dfb;
        } else {
            // 0x516df2
            v92 = v71;
            v85 = v75;
            v84 = 0;
            v82 = v78;
            v80 = 0;
            v105 = v71;
            result2 = v187;
            v106 = 0;
            v104 = v78;
            v107 = 0;
            if (*(int32_t *)(v2 + 76) == (int32_t)v75) {
                goto lab_0x516ec8;
            } else {
                goto lab_0x516dfb;
            }
        }
    } else {
        // 0x516906
        if (v72 != 0) {
            // 0x517060
            return result5;
        }
        int64_t v40 = 0x1000000 * n + 0x30000000 >> 24;
        v34 = v71;
        v35 = v75;
        v36 = 0;
        v37 = v78;
        v38 = 0;
        while (true) {
          lab_0x516922:
            // 0x516922
            v18 = v38;
            v9 = v37;
            v7 = v36;
            int64_t v39 = v35;
            v24 = v34;
            if (n < 11) {
                // 0x51692e
                v30 = 0;
                v31 = v7;
                v32 = v9;
                v33 = v18;
                if (v39 < v40 != (int32_t)v39 > 47) {
                    // break -> 0x5169b4
                    break;
                }
                // 0x516941
                v12 = v39 + 0xffffffd0;
                goto lab_0x516944;
            } else {
                int64_t v41 = v39 + 0xffffffd0; // 0x516c20
                v12 = v41;
                if ((int32_t)v41 < 10) {
                    goto lab_0x516944;
                } else {
                    int32_t v42 = v39;
                    if (v42 < 103) {
                        // 0x516d98
                        v12 = v39 + 0xffffffa9;
                        goto lab_0x516944;
                    } else {
                        // 0x516c38
                        v30 = 0;
                        v31 = v7;
                        v32 = v9;
                        v33 = v18;
                        if (v42 >= 71) {
                            // break -> 0x5169b4
                            break;
                        }
                        // 0x516c44
                        v8 = v7;
                        v10 = v9;
                        v11 = 1;
                        v13 = v39 + 0xffffffc9;
                        if (v14 < v7) {
                            goto lab_0x516955;
                        } else {
                            goto lab_0x516c58;
                        }
                    }
                }
            }
        }
        goto lab_0x5169b4_2;
    }
  lab_0x516872:
    // 0x516872
    v184 = v181;
    v186 = v183;
    v185 = v180;
    if (*(int32_t *)(v2 + 72) == v58) {
        goto lab_0x516a58;
    } else {
        int64_t v188 = function_50f6f0((int64_t *)function_50d7a0(v63), &v1); // 0x51688a
        char v189 = v188; // 0x51688f
        if (v189 == 0) {
            int64_t v190 = function_50f7d0(v63); // 0x516ffc
            v184 = v190;
            v186 = (int64_t)*v46;
            v185 = v190 & 0xffffffff;
            goto lab_0x516a58;
        } else {
            // 0x51689b
            v44 = a5;
            v45 = v189;
            v47 = (int64_t)*v46;
            v49 = v180;
            v51 = 0;
            v53 = v178;
            v55 = 0;
            goto lab_0x5168a8_2;
        }
    }
  lab_0x516a58:
    // 0x516a58
    v160 = a5;
    v161 = v184;
    v162 = v186;
    v163 = v185;
    v164 = 0;
    v165 = v178;
    v166 = 0;
    while (true) {
      lab_0x516a60:;
        int64_t v167 = v166;
        v135 = v165;
        int64_t v168 = v164;
        v48 = v163;
        int64_t v169 = v162;
        int64_t v170 = v161;
        v140 = v160;
        int32_t v171; // 0x516790
        if (v169 == 0) {
            // 0x516a60
            v171 = v48;
        } else {
            int32_t v172 = v48;
            v44 = v140;
            v45 = 0;
            v47 = v169;
            v49 = v48;
            v51 = v168;
            v53 = v135;
            v55 = v167;
            v171 = v172;
            if (*(int32_t *)(v2 + 76) == v172) {
                // break -> 0x5168a8
                break;
            }
        }
        // 0x516a6d
        v131 = v171;
        v44 = v140;
        v45 = 0;
        v47 = v169;
        v49 = v48;
        v51 = v168;
        v53 = v135;
        v55 = v167;
        if (*(int32_t *)(v2 + 72) == v131) {
            // break -> 0x5168a8
            break;
        }
        // 0x516a76
        if (*(int32_t *)(v2 + 240) == v131) {
            int32_t v173 = v135; // 0x516bb4
            unsigned char v174 = (char)v168 ^ 1 | (char)(v173 == 10); // 0x516bbb
            int64_t v175 = v170 & -256 | (int64_t)v174; // 0x516bbb
            v129 = v175;
            if (v174 == 0) {
                goto lab_0x516a8b;
            } else {
                // 0x516bc4
                v132 = 1;
                v133 = 8;
                v134 = 0;
                if (v3 != 0 && v173 != 8) {
                    // 0x516d88
                    v132 = v175 & 0xffffffff;
                    v133 = v135;
                    v134 = v167 + 1 & 0xffffffff;
                }
                goto lab_0x516ac0;
            }
        } else {
            // 0x516a82
            v44 = v140;
            v45 = 0;
            v47 = v169;
            v49 = v48;
            v51 = v168;
            v53 = v135;
            v55 = v167;
            v129 = v170;
            if ((char)v168 == 0) {
                // break -> 0x5168a8
                break;
            }
            goto lab_0x516a8b;
        }
    }
    goto lab_0x5168a8_2;
  lab_0x5168a8_2:;
    char v56 = v57 == v58; // 0x516857
    int32_t v59 = v53;
    v60 = v59;
    v61 = v44;
    v62 = v63;
    v64 = v45;
    v65 = v56;
    v66 = v47;
    v67 = v49;
    v68 = v51;
    v69 = v53;
    v70 = v55;
    v71 = v44;
    v21 = v63;
    v72 = v45;
    v73 = v56;
    n = 22;
    v74 = v47;
    v75 = v49;
    v76 = v51;
    v77 = v53;
    v78 = v55;
    if (v59 == 16) {
        goto lab_0x5168bf;
    } else {
        goto lab_0x5168b7;
    }
  lab_0x516dfb:;
    int64_t v79 = v80;
    int64_t v81 = v82;
    int64_t v83 = v84;
    int32_t c = v85; // 0x516dfb
    v30 = 0;
    v31 = v83;
    v32 = v81;
    v33 = v79;
    int64_t v86; // 0x516790
    int64_t v87; // 0x516790
    int64_t v88; // 0x516790
    int64_t v89; // 0x516790
    if (*(int32_t *)(v2 + 72) == c) {
        goto lab_0x5169b4_2;
    } else {
        int64_t wstr = v2 + 240; // 0x516dcb
        int32_t * v90 = wmemchr((int32_t *)wstr, c, n); // 0x516e0f
        v30 = 0;
        v31 = v83;
        v32 = v81;
        v33 = v79;
        if (v90 == NULL) {
            goto lab_0x5169b4_2;
        } else {
            int64_t v91 = v92;
            v89 = v91;
            v86 = v83;
            v87 = v81;
            v88 = result5;
            if (v14 >= v83) {
                int64_t v93 = (int64_t)v90 - wstr >> 2; // 0x516e1c
                int32_t v94 = v93; // 0x516e23
                int32_t v95 = v94 - 15; // 0x516e23
                uint64_t v96 = v83 * v15; // 0x516e34
                int64_t v97 = 0x100000000 * v93;
                int64_t v98 = (v95 < 0 == (14 - v94 & v94) < 0 == (v95 != 0) ? v97 - 0x600000000 : v97) >> 32; // 0x516e3a
                v89 = v91;
                v86 = v98 + v96;
                v87 = v81 + 1 & 0xffffffff;
                v88 = v79 & 0xffffffff | (int64_t)(v96 > -1 - v98);
            }
            goto lab_0x516e52;
        }
    }
  lab_0x5169b4_2:;
    int64_t v99 = v31;
    int64_t v100; // 0x516790
    int64_t v101; // 0x516790
    if (g96 != 0) {
        // 0x516cc0
        function_451f2(&v102, 0x100000000000000 * v32 >> 56);
        int64_t v103 = *(int64_t *)(v2 + 16); // 0x516cd8
        if ((char)function_569070(v103, *(int64_t *)(v2 + 24), &v102) == 0) {
            // 0x516ce8
            *(int32_t *)a7 = 4;
        }
        // 0x516cf3
        v101 = v102;
        if ((int32_t)v32 != 0) {
            goto lab_0x516d11;
        } else {
            // 0x516d00
            v100 = v102;
            v101 = v102;
            if ((char)v76 != 1 == g96 == 0) {
                goto lab_0x5169da;
            } else {
                goto lab_0x516d11;
            }
        }
    } else {
        // 0x5169c7
        v101 = v102;
        if ((char)v76 == 1) {
            goto lab_0x516d11;
        } else {
            // 0x5169d1
            v100 = v102;
            v101 = v102;
            if ((int32_t)v32 != 0) {
                goto lab_0x516d11;
            } else {
                goto lab_0x5169da;
            }
        }
    }
  lab_0x516ec8:
    // 0x516ec8
    if ((int32_t)v104 == 0) {
        // 0x51709e
        return result2;
    }
    // 0x516ed1
    function_451f2(&v102, 0x100000000000000 * v104 >> 56);
    v89 = v105;
    v86 = v106;
    v87 = 0;
    v88 = v107;
    goto lab_0x516e52;
  lab_0x516e52:;
    int64_t v108 = v88;
    int64_t v109 = v87;
    int64_t v110 = v86;
    int64_t v111 = v89;
    if (result3 != 0) {
        int64_t * v112 = (int64_t *)(result3 + 16); // 0x516e5c
        uint64_t v113 = *v112; // 0x516e5c
        if (v113 < *(int64_t *)(result3 + 24)) {
            // 0x516e6a
            *v112 = v113 + 4;
        }
    }
    int64_t v114 = function_50f7d0(v21); // 0x516e7e
    int64_t v115 = v1; // 0x516e83
    int64_t v116 = v111; // 0x516e91
    char v117 = v118; // 0x516e91
    if (v115 != 0) {
        // 0x516e97
        v116 = v111;
        v117 = 0;
        if ((int32_t)v111 == -1) {
            uint64_t v119 = *(int64_t *)(v115 + 16); // 0x516f00
            int64_t v120; // 0x516790
            if (v119 >= *(int64_t *)(v115 + 24)) {
                // 0x517030
                v120 = *(int64_t *)v115;
            } else {
                // 0x516f0e
                v120 = (int64_t)*(int32_t *)v119;
            }
            int64_t v121 = v120;
            if ((int32_t)v121 == -1) {
                // 0x516fa8
                v1 = 0;
                v116 = v111;
                v117 = v118;
            } else {
                // 0x516f19
                v116 = 0x100000000 * v121 >> 32;
                v117 = 0;
            }
        }
    }
    // 0x516ea0
    v30 = v118;
    v31 = v110;
    v32 = v109;
    v33 = v108;
    if (v117 == (char)((int32_t)v114 == -1)) {
        goto lab_0x5169b4_2;
    } else {
        int64_t v122 = v116;
        int64_t v123 = function_50f7d0(v21); // 0x516eac
        int64_t v124 = v123 & 0xffffffff; // 0x516eb1
        char v125 = *v126; // 0x516eb3
        v92 = v122;
        v85 = v124;
        v84 = v110;
        v82 = v109;
        v80 = v108;
        if (v125 == 0) {
            goto lab_0x516dfb;
        } else {
            // 0x516ebf
            v92 = v122;
            v85 = v124;
            v84 = v110;
            v82 = v109;
            v80 = v108;
            v105 = v122;
            result2 = v125;
            v106 = v110;
            v104 = v109;
            v107 = v108;
            if (*(int32_t *)(v2 + 76) != (int32_t)v123) {
                goto lab_0x516dfb;
            } else {
                goto lab_0x516ec8;
            }
        }
    }
  lab_0x516d11:
    // 0x516d11
    v100 = v101;
    int64_t v127; // 0x516790
    if (v72 != 0) {
        goto lab_0x5169da;
    } else {
        if ((char)v33 == 0) {
            // 0x516fd8
            *(int64_t *)a8 = v73 != 0 ? -v99 : v99;
            v127 = v101;
        } else {
            // 0x516d25
            *(int64_t *)a8 = -1;
            *(int32_t *)a7 = 4;
            v127 = v101;
        }
        goto lab_0x5169f1;
    }
  lab_0x5169da:
    // 0x5169da
    *(int64_t *)a8 = 0;
    *(int32_t *)a7 = 4;
    v127 = v100;
    goto lab_0x5169f1;
  lab_0x5169f1:
    // 0x5169f1
    if (v30 != 0) {
        int32_t * v128 = (int32_t *)a7; // 0x5169fd
        *v128 = *v128 | 2;
    }
    // 0x516a00
    if (v127 - 24 != (int64_t)g32) {
        // 0x517060
        return result3;
    }
    // 0x516a1b
    __readfsqword(40);
    return result3;
}

// Address range: 0x529a20 - 0x52a2b6
// From class:    std::numpunct<char>
// Type:          constructor
int64_t function_529a20(int64_t a1, int64_t a2) {
    int64_t v1 = *(int64_t *)(a2 + 8); // 0x529a45
    int64_t v2 = *(int64_t *)(a2 + 16); // 0x529a49
    *(int32_t *)&g89 = 1;
    g91 = a2;
    g88 = (int64_t)&g23;
    function_56afb0(&g88, 0);
    *(int32_t *)&g89 = (int32_t)&g90;
    int64_t * v3 = (int64_t *)(a1 + 8); // 0x529a87
    int64_t v4 = function_566390(&g101); // 0x529a96
    *(int64_t *)(8 * v4 + (0x100000000 * *v3 >> 32)) = (int64_t)&g88;
    *(int32_t *)&g93 = 1;
    g92 = (int32_t)&g22;
    int64_t result = function_565f30(); // 0x529ac6
    g95 = result;
    if (g35 != 0) {
        // 0x52a2c0
        return result;
    }
    // 0x529f5e
    *(int32_t *)&g93 = (int32_t)&g94;
    int64_t v5 = function_566390(&g98); // 0x529af1
    *(int64_t *)(8 * v5 + (0x100000000 * *v3 >> 32)) = (int64_t)&g92;
    *(int32_t *)&g81 = 1;
    g83 = v1;
    g80 = (int64_t)&g25;
    function_4f39b0(&g80, (int32_t)&g92 ^ (int32_t)&g92, 0);
    *(int32_t *)&g81 = (int32_t)&g82;
    int64_t v6 = function_566390(&g105); // 0x529b57
    *(int64_t *)(8 * v6 + (0x100000000 * *v3 >> 32)) = (int64_t)&g80;
    *(int32_t *)&g85 = 1;
    g87 = v2;
    g84 = (int64_t)&g24;
    function_4f3410(&g84, 0, 0);
    *(int32_t *)&g85 = (int32_t)&g86;
    int64_t v7 = function_566390(&g104); // 0x529bc5
    *(int64_t *)(8 * v7 + (0x100000000 * *v3 >> 32)) = (int64_t)&g84;
    *(int32_t *)&g79 = 2;
    g78 = (int64_t)&g26;
    int64_t v8 = function_566390(&g103); // 0x529c04
    *(int64_t *)(8 * v8 + (0x100000000 * *v3 >> 32)) = (int64_t)&g78;
    *(int32_t *)&g77 = 2;
    g76 = (int64_t)&g27;
    int64_t v9 = function_566390(&g102); // 0x529c43
    *(int64_t *)(8 * v9 + (0x100000000 * *v3 >> 32)) = (int64_t)&g76;
    *(int32_t *)&g75 = 2;
    g74 = (int64_t)&g28;
    int64_t v10 = function_566390(&g100); // 0x529c82
    int64_t v11 = 0x100000000 * *v3 >> 32; // 0x529c87
    *(int64_t *)(8 * v10 + v11) = (int64_t)&g74;
    function_554420(&g71, 1, v11);
    *(int32_t *)&g72 = (int32_t)&g73;
    int64_t v12 = function_566390(&g99); // 0x529cbd
    int64_t v13 = 0x100000000 * *v3 >> 32; // 0x529cc2
    *(int64_t *)(8 * v12 + v13) = (int64_t)&g71;
    int64_t v14 = *(int64_t *)(a2 + 24); // 0x529cdf
    *(int32_t *)&g64 = 1;
    int64_t v15 = *(int64_t *)(a2 + 40); // 0x529cee
    g66 = v14;
    g63 = (int64_t)&g15;
    function_56b2c0(&g63, (int32_t)&g71 ^ (int32_t)&g71, v13);
    *(int32_t *)&g64 = (int32_t)&g65;
    int64_t v16 = function_566390(&g41); // 0x529d3a
    *(int64_t *)(8 * v16 + *v3) = (int64_t)&g63;
    *(int32_t *)&g68 = 1;
    g67 = (int32_t)&g14;
    g70 = function_565f30();
    *(int32_t *)&g68 = (int32_t)&g69;
    int64_t v17 = function_566390(&g38); // 0x529d97
    *(int64_t *)(8 * v17 + *v3) = (int64_t)&g67;
    *(int32_t *)&g56 = 1;
    g55 = (int64_t)&g18;
    int64_t v18 = 0x100000000 * *(int64_t *)(a2 + 32) >> 32; // 0x529dd3
    g58 = v18;
    function_4f47e0(&g55, (int32_t)&g67 ^ (int32_t)&g67, 0);
    *(int32_t *)&g56 = (int32_t)&g57;
    int64_t v19 = function_566390(&g45); // 0x529e03
    *(int64_t *)(8 * v19 + *v3) = (int64_t)&g55;
    *(int32_t *)&g60 = 1;
    g62 = v15;
    g59 = (int64_t)&g17;
    function_4f4170(&g59, 0, 0);
    *(int32_t *)&g60 = (int32_t)&g61;
    int64_t v20 = function_566390(&g44); // 0x529e6e
    *(int64_t *)(8 * v20 + *v3) = (int64_t)&g59;
    *(int32_t *)&g54 = 2;
    g53 = (int64_t)&g19;
    int64_t v21 = function_566390(&g43); // 0x529eaf
    *(int64_t *)(8 * v21 + *v3) = (int64_t)&g53;
    *(int32_t *)&g52 = 2;
    g51 = (int64_t)&g20;
    int64_t v22 = function_566390(&g42); // 0x529ef0
    *(int64_t *)(8 * v22 + *v3) = (int64_t)&g51;
    int64_t v23 = *v3; // 0x529f13
    *(int32_t *)&g50 = 2;
    g49 = (int64_t)&g21;
    int64_t v24 = function_566390(&g40); // 0x529f31
    *(int64_t *)(8 * v24 + v23) = (int64_t)&g49;
    function_50a420(&g46, 1, v23);
    *(int32_t *)&g47 = (int32_t)&g48;
    int64_t v25 = function_566390(&g39); // 0x529f6e
    *(int64_t *)(8 * v25 + *v3) = (int64_t)&g46;
    int64_t * v26 = (int64_t *)(a1 + 24); // 0x529f8a
    *(int64_t *)(8 * function_566390(&g101) + *v26) = a2;
    *(int64_t *)(8 * function_566390(&g105) + *v26) = v1;
    *(int64_t *)(8 * function_566390(&g104) + *v26) = v2;
    *(int64_t *)(8 * function_566390(&g41) + *v26) = v14;
    *(int64_t *)(8 * function_566390(&g45) + *v26) = v18;
    int64_t result2 = function_566390(&g44); // 0x52a001
    *(int64_t *)(8 * result2 + *v26) = v15;
    return result2;
}

// Address range: 0x55f800 - 0x55f805
// From class:    std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_55f800(void) {
    // 0x55f800
    return function_55ee70();
}

// Address range: 0x55f810 - 0x55f82a
int64_t function_55f810(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 64); // 0x55f813
    if (result != g29) {
        // 0x55f828
        return result;
    }
    // 0x55f820
    return function_55ee70();
}

// Address range: 0x55f830 - 0x560104
int64_t function_55f830(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t result4 = a2; // bp-104, 0x55f84c
    int64_t v1 = a4; // bp-120, 0x55f862
    __readfsqword(40);
    int64_t v2 = function_558300(); // 0x55f891
    int32_t v3 = *(int32_t *)(a6 + 24) & 74; // 0x55f89d
    int64_t v4 = 10; // 0x55f830
    int64_t v5; // 0x55f830
    int64_t v6; // 0x55f830
    int64_t v7; // 0x55f830
    int64_t v8; // 0x55f830
    int64_t v9; // 0x55f830
    int64_t v10; // 0x55f830
    int64_t v11; // 0x55f830
    char v12; // 0x55f830
    char v13; // 0x55f830
    int32_t n; // 0x55f830
    int64_t v14; // 0x55f830
    int64_t v15; // 0x55f830
    int64_t v16; // 0x55f830
    switch (v3) {
        case 64: {
            // 0x55ffe0
            v4 = 8;
            goto lab_0x55f8bb;
        }
        case 8: {
            int64_t v17 = (int64_t)&result4; // 0x55fbf0
            char v18 = function_524600(&result4, &v1); // 0x55fbf9
            v14 = v17;
            v6 = 16;
            if (v18 == 0) {
                goto lab_0x55f8e0;
            } else {
                // 0x55fc05
                v16 = a3;
                v11 = a5;
                v15 = v17;
                v13 = v18;
                v12 = 0;
                n = 22;
                v10 = (int64_t)*(char *)(v2 + 32);
                v9 = 0;
                v5 = 0;
                v7 = 16;
                v8 = 0;
                goto lab_0x55f957;
            }
        }
        default: {
            goto lab_0x55f8bb;
        }
    }
  lab_0x55fa71_2:;
    // 0x55fa71
    int64_t v19; // 0x55f830
    int64_t v20 = v19; // 0x55fa7e
    int32_t v21; // 0x55f830
    int32_t v22 = v21; // 0x55fa7e
    int64_t v23; // 0x55f830
    int64_t v24 = v23; // 0x55fa7e
    int64_t v25; // 0x55f830
    int64_t v26 = v25; // 0x55fa7e
    int64_t v27; // 0x55f830
    int64_t v28 = v27; // 0x55fa7e
    int64_t v29 = v19; // 0x55fa7e
    int32_t v30 = v21; // 0x55fa7e
    int64_t v31 = v23; // 0x55fa7e
    int64_t v32 = v25; // 0x55fa7e
    int64_t v33 = v27; // 0x55fa7e
    if (g96 != 0) {
        goto lab_0x55fcf8;
    } else {
        goto lab_0x55fa84;
    }
  lab_0x55f9e0:;
    // 0x55f9e0
    int64_t v34; // 0x55f830
    int64_t v35 = v34; // 0x55f9e3
    int64_t v36; // 0x55f830
    int64_t v37 = v36; // 0x55f9e3
    int64_t v38; // 0x55f830
    int64_t v39 = v38; // 0x55f9e3
    int64_t v40; // 0x55f830
    int64_t v41 = v40; // 0x55f9e3
    int64_t v42; // 0x55f830
    if ((int32_t)v42 == -1) {
        // break -> 0x55fce0
        goto lab_0x55fce0_2;
    }
    goto lab_0x55f9e9;
  lab_0x55f9e9:;
    // 0x55f9e9
    uint64_t v43; // 0x55f830
    if (v43 >= v36) {
        // branch -> 0x55fa12
    }
    int64_t v44 = 1;
    int64_t v45 = v38;
    int64_t v46 = v36;
    int64_t v47 = v34; // 0x55fa1a
    if (result4 != 0) {
        int64_t * v48 = (int64_t *)(result4 + 16); // 0x55fa1c
        uint64_t v49 = *v48; // 0x55fa1c
        v47 = -1;
        if (v49 < *(int64_t *)(result4 + 24)) {
            // 0x55fa2a
            *v48 = v49 + 1;
            v47 = -1;
        }
    }
    int64_t v50 = function_5246d0(v15); // 0x55fa3e
    int64_t result = v50; // 0x55fa51
    if (v1 == 0) {
        // 0x560118
        return result;
    }
    int64_t v51 = v47;
    char v52 = 0; // 0x55fa5e
    int64_t v53; // 0x55f830
    int64_t v54; // 0x55f830
    if ((int32_t)v54 == -1) {
        uint64_t v55 = *(int64_t *)(v1 + 16); // 0x55fd88
        if (v55 >= *(int64_t *)(v1 + 24)) {
            int64_t v56 = *(int64_t *)v1; // 0x5600b0
            v53 = v56;
            if ((int32_t)v56 != -1) {
                goto lab_0x55fd99;
            } else {
                // 0x5600bf
                v1 = 0;
                v52 = 1;
                goto lab_0x55fa64;
            }
        } else {
            // 0x55fd96
            v53 = (int64_t)*(char *)v55;
            goto lab_0x55fd99;
        }
    } else {
        goto lab_0x55fa64;
    }
  lab_0x55fa64:
    // 0x55fa64
    v19 = v51;
    v21 = 1;
    v23 = v46;
    v25 = v45;
    v27 = v44;
    int64_t v57 = v54; // 0x55fa66
    if (v52 == (char)((int32_t)v50 == -1)) {
        goto lab_0x55fa71_2;
    }
    goto lab_0x55fda7;
  lab_0x55fda7:;
    int64_t v58 = v51; // 0x55fdb2
    int64_t v59 = v57; // 0x55fdb2
    int64_t v60 = function_5246d0(v15) & 0xffffffff; // 0x55fdb2
    int64_t v61 = v46; // 0x55fdb2
    int64_t v62 = v45; // 0x55fdb2
    int64_t v63 = v44; // 0x55fdb2
    goto lab_0x55f9bb;
  lab_0x55fd99:
    // 0x55fd99
    v19 = v51;
    v21 = 1;
    v23 = v46;
    v25 = v45;
    v27 = v44;
    v57 = 0x100000000 * v53 >> 32;
    if ((int32_t)v50 != -1) {
        goto lab_0x55fa71_2;
    }
    goto lab_0x55fda7;
  lab_0x55fbcd_3:;
    // 0x55fbcd
    int64_t v68; // 0x55f830
    int64_t v69 = v68; // 0x55fbd6
    int64_t v70; // 0x55f830
    int64_t v71 = v70; // 0x55fbd6
    char v72 = 1; // 0x55fbd6
    char * v73; // 0x55f8ef
    int64_t v74 = (int64_t)*v73; // 0x55fbd6
    int64_t v75; // 0x55f830
    int64_t v76 = v75; // 0x55fbd6
    int64_t v77; // 0x55f830
    int64_t v78 = v77; // 0x55fbd6
    int64_t v79; // 0x55f830
    int64_t v80 = v79; // 0x55fbd6
    int64_t v81; // 0x55f830
    int64_t v82 = v81; // 0x55fbd6
    goto lab_0x55f940_2;
  lab_0x55fb48:;
    // 0x55fb48
    int64_t v135; // 0x55f830
    int64_t v189 = v135;
    char v131; // 0x55f830
    int64_t v123; // 0x55f830
    int64_t v122; // 0x55f830
    int64_t v125; // 0x55f830
    int64_t v127; // 0x55f830
    int64_t v128; // 0x55f830
    if (*(char *)(v2 + 112) != v131) {
        // 0x55fb4d
        v69 = v128;
        v71 = v127;
        v72 = 0;
        v74 = v125;
        v76 = v75;
        v78 = 1;
        v80 = v123;
        v82 = v122;
        if (*(char *)(v2 + 113) != v131) {
            // break -> 0x55f940
            goto lab_0x55f940_2;
        }
    }
    int64_t v136 = 0; // 0x55fb65
    int64_t v137 = 16; // 0x55fb65
    int64_t v138 = 0; // 0x55fb65
    if (v3 != 0 && (int32_t)v123 != 16) {
        // 0x560109
        return v189 & -256;
    }
    goto lab_0x55fb77;
  lab_0x55fb77:
    // 0x55fb77
    v81 = v138;
    v79 = v137;
    v77 = v136;
    int64_t v190 = v128; // 0x55fb7f
    int64_t v191; // 0x55f830
    if (result4 == 0) {
        goto lab_0x55fddc;
    } else {
        int64_t * v192 = (int64_t *)(result4 + 16); // 0x55fb85
        uint64_t v193 = *v192; // 0x55fb85
        int64_t * v194 = (int64_t *)(result4 + 24); // 0x55fb89
        uint64_t v195 = *v194; // 0x55fb89
        int64_t v196 = v195; // 0x55fb8d
        int64_t v197 = v193; // 0x55fb8d
        if (v193 < v195) {
            // 0x55fb93
            v197 = v193 + 1;
            *v192 = v197;
            v196 = *v194;
        }
        uint64_t v198 = v197; // 0x55fba3
        if (v198 >= v196) {
            int64_t v199 = *(int64_t *)result4; // 0x55ff90
            v191 = v199;
            if ((int32_t)v199 != -1) {
                goto lab_0x55fbb4;
            } else {
                // 0x55ff9f
                result4 = 0;
                v190 = -1;
                goto lab_0x55fddc;
            }
        } else {
            // 0x55fbb1
            v191 = (int64_t)*(char *)v198;
            goto lab_0x55fbb4;
        }
    }
  lab_0x55fddc:;
    int64_t v200 = v190;
    int64_t v201 = v1; // 0x55fddc
    v68 = v200;
    v70 = v127;
    if (v201 == 0) {
        goto lab_0x55fbcd_3;
    }
    int64_t v202 = v200; // 0x55fdf4
    char v203 = 1; // 0x55fdf4
    int64_t v204 = v201; // 0x55fdf4
    int64_t v205 = v200; // 0x55fdf4
    int64_t v206 = v127; // 0x55fdf4
    if ((int32_t)v127 != -1) {
        goto lab_0x55fc51;
    } else {
        goto lab_0x55fc32;
    }
  lab_0x55fc51:;
    // 0x55fc51
    int64_t v84; // 0x55f830
    int64_t v207 = function_5246d0(v84); // 0x55fc55
    result = v207;
    if ((char)v77 == 0) {
        // 0x560118
        return result;
    }
    int64_t v114 = v205; // 0x55fc69
    int64_t v115 = v206; // 0x55fc69
    int64_t v116 = v207; // 0x55fc69
    int64_t v117 = (int64_t)*v73; // 0x55fc69
    int64_t v118 = v207 & 0xffffffff; // 0x55fc69
    int64_t v119 = v77; // 0x55fc69
    int64_t v120 = v79; // 0x55fc69
    int64_t v121 = v81; // 0x55fc69
    goto lab_0x55fb20;
  lab_0x55fc32:;
    int64_t v208 = v204;
    uint64_t v209 = *(int64_t *)(v208 + 16); // 0x55fc32
    int64_t v210; // 0x55f830
    int64_t v211; // 0x55f830
    char v212; // 0x55f830
    if (v209 >= *(int64_t *)(v208 + 24)) {
        int64_t v213 = *(int64_t *)v208; // 0x55ffb0
        v210 = v213;
        if ((int32_t)v213 != -1) {
            goto lab_0x55fc43;
        } else {
            // 0x55ffc8
            v1 = 0;
            v211 = v127;
            v212 = 1;
            goto lab_0x55fc49;
        }
    } else {
        // 0x55fc40
        v210 = (int64_t)*(char *)v209;
        goto lab_0x55fc43;
    }
  lab_0x55fbb4:;
    int64_t v214 = v1; // 0x55fbb4
    int64_t v215 = 0x100000000 * v191 >> 32; // 0x55fbb9
    v205 = v215;
    v206 = v127;
    if (v214 == 0) {
        goto lab_0x55fc51;
    } else {
        // 0x55fbc6
        v202 = v215;
        v203 = 0;
        v204 = v214;
        if ((int32_t)v127 != -1) {
            goto lab_0x55fbcd_3;
        }
        goto lab_0x55fc32;
    }
  lab_0x55fc43:
    // 0x55fc43
    v211 = 0x100000000 * v210 >> 32;
    v212 = 0;
    goto lab_0x55fc49;
  lab_0x55fc49:
    // 0x55fc49
    v68 = v202;
    v70 = v211;
    v205 = v202;
    v206 = v211;
    if (v212 == v203) {
        goto lab_0x55fbcd_3;
    }
    goto lab_0x55fc51;
  lab_0x55f8bb:;
    int64_t v216 = function_524600(&result4, &v1); // 0x55f8cf
    v14 = (int64_t)&result4;
    v6 = v4;
    result = v216;
    if ((char)v216 != 0) {
        // 0x560118
        return result;
    }
    goto lab_0x55f8e0;
  lab_0x55f8e0:;
    int64_t v113 = v6;
    v84 = v14;
    int64_t v105 = function_5246d0(v84); // 0x55f8e4
    char v85 = *(char *)(v2 + 110); // 0x55f8e9
    int64_t v109 = v105 & 0xffffffff; // 0x55f8ed
    v73 = (char *)(v2 + 32);
    unsigned char v217 = *v73; // 0x55f8ef
    int64_t v107 = v217; // 0x55f8ef
    char v86 = v105; // 0x55f8f3
    int64_t v104; // 0x55f830
    int64_t v108; // 0x55f830
    int64_t v106; // 0x55f830
    if (v85 == v86) {
        goto lab_0x55f905;
    } else {
        // 0x55f8fc
        v104 = v105;
        v106 = v107;
        v108 = v109;
        if (*(char *)(v2 + 111) != v86) {
            goto lab_0x55fb18;
        } else {
            goto lab_0x55f905;
        }
    }
  lab_0x55f905:
    if (v217 != 0) {
        // 0x55fb08
        v104 = v105;
        v106 = v107;
        v108 = v109;
        if (*(char *)(v2 + 73) != v86) {
            goto lab_0x55f90d;
        } else {
            goto lab_0x55fb18;
        }
    } else {
        goto lab_0x55f90d;
    }
  lab_0x55f957:;
    int64_t v87 = (int64_t)&g97; // bp-72, 0x55f964
    if ((char)v10 != 0) {
        // 0x55fff0
        function_259ce(&v87, 32);
    }
    uint64_t v88 = 0x100000000 * v7 >> 32; // 0x55f972
    v43 = 0xffffffffffffffff / v88;
    char v89 = *(char *)(v2 + 136); // 0x55f98b
    int64_t result2 = v89; // 0x55f98b
    int64_t v90; // 0x55f830
    int64_t v91; // 0x55f830
    int64_t v92; // 0x55f830
    int64_t v93; // 0x55f830
    int64_t v94; // 0x55f830
    int64_t v95; // 0x55f830
    char result3; // 0x55f830
    int64_t v96; // 0x55f830
    int64_t v97; // 0x55f830
    int64_t v98; // 0x55f830
    int64_t v99; // 0x55f830
    int64_t v100; // 0x55f830
    int32_t v101; // 0x55f994
    char * v102; // 0x55fe57
    if (v89 != 0) {
        // 0x55fe30
        if (v13 != 0) {
            // 0x560118
            return result2;
        }
        // 0x55fe3b
        v101 = v89;
        v102 = (char *)(v2 + 32);
        char v103 = *v102; // 0x55fe57
        v99 = v16;
        v98 = v11;
        v96 = v9;
        v90 = 0;
        v92 = v8;
        v94 = 0;
        if (v103 == 0) {
            goto lab_0x55fe68;
        } else {
            // 0x55fe5f
            v99 = v16;
            v98 = v11;
            v96 = v9;
            v90 = 0;
            v92 = v8;
            v94 = 0;
            v100 = v16;
            v97 = v11;
            result3 = v103;
            v91 = 0;
            v93 = v8;
            v95 = 0;
            if (*(char *)(v2 + 73) == (char)v9) {
                goto lab_0x55ff3a;
            } else {
                goto lab_0x55fe68;
            }
        }
    } else {
        // 0x55f99e
        if (v13 != 0) {
            // 0x560118
            return result2;
        }
        int64_t v67 = 0x100000000000000 * (int64_t)((0x1000000 * n + 0x30000000) / 0x1000000) >> 56;
        v58 = v16;
        v59 = v11;
        v60 = v9;
        v61 = 0;
        v62 = v8;
        v63 = 0;
        while (true) {
          lab_0x55f9bb:
            // 0x55f9bb
            v40 = v63;
            v38 = v62;
            v36 = v61;
            int64_t v64 = v60;
            v54 = v59;
            v34 = v58;
            int64_t v65 = 0x100000000000000 * v64 >> 56; // 0x55f9c1
            char v66 = v64;
            if (n < 11) {
                // 0x55f9ca
                v35 = v34;
                v37 = v36;
                v39 = v38;
                v41 = v40;
                if (v67 > v64 != v66 > 47) {
                    // break -> 0x55fce0
                    break;
                }
                // 0x55f9dd
                v42 = v65 + 0xffffffd0;
                goto lab_0x55f9e0;
            } else {
                if (v66 < 58) {
                    // 0x55f9dd
                    v42 = v65 + 0xffffffd0;
                    goto lab_0x55f9e0;
                } else {
                    if (v66 < 103) {
                        // 0x55fe10
                        v42 = v65 + 0xffffffa9;
                        goto lab_0x55f9e0;
                    } else {
                        // 0x55fcc8
                        v35 = v34;
                        v37 = v36;
                        v39 = v38;
                        v41 = v40;
                        if (v66 >= 71) {
                            // break -> 0x55fce0
                            break;
                        }
                        // 0x55fcd0
                        v35 = v34;
                        v37 = v36;
                        v39 = v38;
                        v41 = v40;
                        if ((int32_t)(v65 + 0xffffffc9) == -1) {
                            // break -> 0x55fce0
                            break;
                        }
                        goto lab_0x55f9e9;
                    }
                }
            }
        }
        goto lab_0x55fce0_2;
    }
  lab_0x55f90d:
    // 0x55f90d
    v104 = v105;
    v106 = v107;
    v108 = v109;
    if (*(char *)(v2 + 72) == v86) {
        goto lab_0x55fb18;
    } else {
        int64_t v110 = function_524600((int64_t *)function_5245c0(v84), &v1); // 0x55f925
        char v111 = v110; // 0x55f92a
        if (v111 == 0) {
            int64_t v112 = function_5246d0(v84); // 0x560054
            v104 = v112;
            v106 = (int64_t)*v73;
            v108 = v112 & 0xffffffff;
            goto lab_0x55fb18;
        } else {
            // 0x55f936
            v69 = a3;
            v71 = a5;
            v72 = v111;
            v74 = (int64_t)*v73;
            v76 = v109;
            v78 = 0;
            v80 = v113;
            v82 = 0;
            goto lab_0x55f940_2;
        }
    }
  lab_0x55fb18:
    // 0x55fb18
    v114 = a3;
    v115 = a5;
    v116 = v104;
    v117 = v106;
    v118 = v108;
    v119 = 0;
    v120 = v113;
    v121 = 0;
    while (true) {
      lab_0x55fb20:
        // 0x55fb20
        v122 = v121;
        v123 = v120;
        int64_t v124 = v119;
        v75 = v118;
        v125 = v117;
        int64_t v126 = v116;
        v127 = v115;
        v128 = v114;
        char v129; // 0x55f830
        if (v125 == 0) {
            // 0x55fb20
            v129 = v75;
        } else {
            char v130 = v75;
            v69 = v128;
            v71 = v127;
            v72 = 0;
            v74 = v125;
            v76 = v75;
            v78 = v124;
            v80 = v123;
            v82 = v122;
            v129 = v130;
            if (*(char *)(v2 + 73) == v130) {
                // break -> 0x55f940
                break;
            }
        }
        // 0x55fb2d
        v131 = v129;
        v69 = v128;
        v71 = v127;
        v72 = 0;
        v74 = v125;
        v76 = v75;
        v78 = v124;
        v80 = v123;
        v82 = v122;
        if (*(char *)(v2 + 72) == v131) {
            // break -> 0x55f940
            break;
        }
        // 0x55fb36
        if (*(char *)(v2 + 114) == v131) {
            int32_t v132 = v123; // 0x55fc74
            unsigned char v133 = (char)v124 ^ 1 | (char)(v132 == 10); // 0x55fc7b
            int64_t v134 = v126 & -256 | (int64_t)v133; // 0x55fc7b
            v135 = v134;
            if (v133 == 0) {
                goto lab_0x55fb48;
            } else {
                // 0x55fc84
                v136 = 1;
                v137 = 8;
                v138 = 0;
                if (v3 != 0 && v132 != 8) {
                    // 0x55fe00
                    v136 = v134 & 0xffffffff;
                    v137 = v123;
                    v138 = v122 + 1 & 0xffffffff;
                }
                goto lab_0x55fb77;
            }
        } else {
            // 0x55fb3f
            v69 = v128;
            v71 = v127;
            v72 = 0;
            v74 = v125;
            v76 = v75;
            v78 = v124;
            v80 = v123;
            v82 = v122;
            v135 = v126;
            if ((char)v124 == 0) {
                // break -> 0x55f940
                break;
            }
            goto lab_0x55fb48;
        }
    }
    goto lab_0x55f940_2;
  lab_0x55f940_2:;
    int32_t v83 = v80; // 0x55f940
    v16 = v69;
    v11 = v71;
    v15 = v84;
    v13 = v72;
    v12 = v85 == v86;
    n = v83 == 16 ? 22 : v83;
    v10 = v74;
    v9 = v76;
    v5 = v78;
    v7 = v80;
    v8 = v82;
    goto lab_0x55f957;
  lab_0x55fe68:;
    int64_t v139 = v94;
    int64_t v140 = v92;
    int64_t v141 = v90;
    int64_t v142 = v99;
    v35 = v142;
    v37 = v141;
    v39 = v140;
    v41 = v139;
    int64_t v143; // 0x55f830
    int64_t v144; // 0x55f830
    int64_t v145; // 0x55f830
    int64_t v146; // 0x55f830
    int64_t v147; // 0x55f830
    if (*(char *)(v2 + 72) == (char)v96) {
        goto lab_0x55fce0_2;
    } else {
        int64_t str = v2 + 114; // 0x55fe3b
        int64_t * found_byte_pos = memchr((int64_t *)str, 0x1000000 * (int32_t)v96 >> 24, n); // 0x55fe81
        v35 = v142;
        v37 = v141;
        v39 = v140;
        v41 = v139;
        if (found_byte_pos == NULL) {
            goto lab_0x55fce0_2;
        } else {
            int64_t v148 = v98;
            if (v43 < v141) {
                // 0x55ff60
                v147 = v142;
                v146 = v148;
                v143 = v141;
                v144 = v140;
                v145 = v101 % 256;
            } else {
                int64_t v149 = (int64_t)found_byte_pos - str; // 0x55fe8f
                int32_t v150 = v149; // 0x55fe95
                int32_t v151 = v150 - 15; // 0x55fe95
                uint64_t v152 = v141 * v88; // 0x55fea6
                int64_t v153 = 0x100000000 * v149;
                int64_t v154 = (v151 < 0 == (14 - v150 & v150) < 0 == (v151 != 0) ? v153 - 0x600000000 : v153) >> 32; // 0x55feac
                v147 = v142;
                v146 = v148;
                v143 = v154 + v152;
                v144 = v140 + 1 & 0xffffffff;
                v145 = v139 & 0xffffffff | (int64_t)(v152 > -1 - v154);
            }
            goto lab_0x55fec4;
        }
    }
  lab_0x55fce0_2:
    // 0x55fce0
    v20 = v35;
    v22 = 0;
    v24 = v37;
    v26 = v39;
    v28 = v41;
    v29 = v35;
    v30 = 0;
    v31 = v37;
    v32 = v39;
    v33 = v41;
    if (g96 == 0) {
        goto lab_0x55fa84;
    } else {
        goto lab_0x55fcf8;
    }
  lab_0x55ff3a:
    // 0x55ff3a
    if ((int32_t)v93 == 0) {
        // 0x56013a
        return result3;
    }
    // 0x55ff43
    function_451f2(&v87, 0x100000000000000 * v93 >> 56);
    v147 = v100;
    v146 = v97;
    v143 = v91;
    v144 = 0;
    v145 = v95;
    goto lab_0x55fec4;
  lab_0x55fa84:;
    int64_t v169 = v20; // 0x55fa87
    int32_t v171 = v22; // 0x55fa87
    int64_t v173 = v87; // 0x55fa87
    int64_t v170 = v20; // 0x55fa87
    int32_t v172 = v22; // 0x55fa87
    int64_t v174 = v87; // 0x55fa87
    int64_t v180 = v24; // 0x55fa87
    int64_t v178 = v28; // 0x55fa87
    if ((char)v5 == 1 || (int32_t)v26 != 0) {
        goto lab_0x55fd42;
    } else {
        goto lab_0x55fa97;
    }
  lab_0x55fcf8:
    // 0x55fcf8
    function_451f2(&v87, 0x100000000000000 * v32 >> 56);
    int64_t v188 = *(int64_t *)(v2 + 16); // 0x55fd10
    if ((char)function_569070(v188, *(int64_t *)(v2 + 24), &v87) == 0) {
        // 0x560068
        *(int32_t *)a7 = 4;
    }
    // 0x55fd24
    v170 = v29;
    v172 = v30;
    v174 = v87;
    v180 = v31;
    v178 = v33;
    if ((int32_t)v32 != 0) {
        goto lab_0x55fd42;
    } else {
        // 0x55fd31
        v169 = v29;
        v171 = v30;
        v173 = v87;
        v170 = v29;
        v172 = v30;
        v174 = v87;
        v180 = v31;
        v178 = v33;
        if ((char)v5 != 1 == g96 == 0) {
            goto lab_0x55fa97;
        } else {
            goto lab_0x55fd42;
        }
    }
  lab_0x55fec4:;
    int64_t v155 = v145;
    int64_t v156 = v144;
    int64_t v157 = v143;
    int64_t v158 = v146;
    int64_t v159 = v147; // 0x55fecc
    if (result4 != 0) {
        int64_t * v160 = (int64_t *)(result4 + 16); // 0x55fece
        uint64_t v161 = *v160; // 0x55fece
        v159 = -1;
        if (v161 < *(int64_t *)(result4 + 24)) {
            // 0x55fedc
            *v160 = v161 + 1;
            v159 = -1;
        }
    }
    int64_t v162 = function_5246d0(v15); // 0x55fef0
    result = v162;
    if (v1 == 0) {
        // 0x560118
        return result;
    }
    int64_t v163 = v159;
    int64_t v164 = v158; // 0x55ff10
    char v165 = 0; // 0x55ff10
    int64_t v166; // 0x55f830
    if ((int32_t)v158 == -1) {
        uint64_t v167 = *(int64_t *)(v1 + 16); // 0x55ff70
        if (v167 >= *(int64_t *)(v1 + 24)) {
            int64_t v168 = *(int64_t *)v1; // 0x560088
            v166 = v168;
            if ((int32_t)v168 != -1) {
                goto lab_0x55ff81;
            } else {
                // 0x560097
                v1 = 0;
                v164 = v158;
                v165 = v89;
                goto lab_0x55ff12;
            }
        } else {
            // 0x55ff7e
            v166 = (int64_t)*(char *)v167;
            goto lab_0x55ff81;
        }
    } else {
        goto lab_0x55ff12;
    }
  lab_0x55fd42:
    // 0x55fd42
    v169 = v170;
    v171 = v172;
    v173 = v174;
    int64_t v175; // 0x55f830
    int32_t v176; // 0x55f830
    int64_t v177; // 0x55f830
    if (v13 != 0) {
        goto lab_0x55fa97;
    } else {
        // 0x55fd4d
        if ((char)v178 == 0) {
            int64_t v179 = v180;
            *(int64_t *)a8 = v12 != 0 ? -v179 : v179;
            v177 = v170;
            v176 = v172;
            v175 = v174;
        } else {
            // 0x55fd56
            *(int64_t *)a8 = -1;
            *(int32_t *)a7 = 4;
            v177 = v170;
            v176 = v172;
            v175 = v174;
        }
        goto lab_0x55faae;
    }
  lab_0x55fa97:
    // 0x55fa97
    *(int64_t *)a8 = 0;
    *(int32_t *)a7 = 4;
    v177 = v169;
    v176 = v171;
    v175 = v173;
    goto lab_0x55faae;
  lab_0x55faae:
    // 0x55faae
    if ((char)v176 != 0) {
        int32_t * v181 = (int32_t *)a7; // 0x55faba
        *v181 = *v181 | 2;
    }
    int64_t v182 = v175 - 24; // 0x55fabd
    if (v182 != (int64_t)g32) {
        // 0x5600e8
        int64_t v183; // bp-73, 0x55f830
        function_552550(v182, &v183, v177);
        return result4;
    }
    // 0x55fad8
    __readfsqword(40);
    return result4;
  lab_0x55ff12:
    // 0x55ff12
    v19 = v163;
    v21 = v101;
    v23 = v157;
    v25 = v156;
    v27 = v155;
    if (v165 == (char)((int32_t)v162 == -1)) {
        goto lab_0x55fa71_2;
    } else {
        int64_t v184 = v164;
        int64_t v185 = function_5246d0(v15); // 0x55ff1e
        int64_t v186 = v185 & 0xffffffff; // 0x55ff23
        char v187 = *v102; // 0x55ff25
        v99 = v163;
        v98 = v184;
        v96 = v186;
        v90 = v157;
        v92 = v156;
        v94 = v155;
        if (v187 == 0) {
            goto lab_0x55fe68;
        } else {
            // 0x55ff31
            v99 = v163;
            v98 = v184;
            v96 = v186;
            v90 = v157;
            v92 = v156;
            v94 = v155;
            v100 = v163;
            v97 = v184;
            result3 = v187;
            v91 = v157;
            v93 = v156;
            v95 = v155;
            if (*(char *)(v2 + 73) != (char)v185) {
                goto lab_0x55fe68;
            } else {
                goto lab_0x55ff3a;
            }
        }
    }
  lab_0x55ff81:
    // 0x55ff81
    v164 = 0x100000000 * v166 >> 32;
    v165 = 0;
    goto lab_0x55ff12;
}

// Address range: 0x560c00 - 0x560c05
// From class:    std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_560c00(void) {
    // 0x560c00
    return function_560290();
}

// Address range: 0x560c10 - 0x560c2a
int64_t function_560c10(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 40); // 0x560c13
    if (result != g34) {
        // 0x560c28
        return result;
    }
    // 0x560c20
    return function_560290();
}

// Address range: 0x560c30 - 0x5614bb
int64_t function_560c30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8) {
    int64_t result4 = a2; // bp-104, 0x560c4c
    int64_t v1 = a4; // bp-120, 0x560c62
    __readfsqword(40);
    int64_t v2 = function_558300(); // 0x560c8e
    int32_t v3 = *(int32_t *)(a6 + 24) & 74; // 0x560c9a
    int64_t v4 = 10; // 0x560c30
    int64_t v5; // 0x560c30
    int64_t v6; // 0x560c30
    int64_t v7; // 0x560c30
    int64_t v8; // 0x560c30
    int64_t v9; // 0x560c30
    int64_t v10; // 0x560c30
    int64_t v11; // 0x560c30
    char v12; // 0x560c30
    char v13; // 0x560c30
    int32_t n; // 0x560c30
    int64_t v14; // 0x560c30
    int64_t v15; // 0x560c30
    switch (v3) {
        case 64: {
            // 0x5613c0
            v4 = 8;
            goto lab_0x560cb8;
        }
        case 8: {
            int64_t v16 = (int64_t)&result4; // 0x560fe0
            char v17 = function_524600(&result4, &v1); // 0x560fe9
            v14 = v16;
            v6 = 16;
            if (v17 == 0) {
                goto lab_0x560cdd;
            } else {
                // 0x560ff5
                v11 = a5;
                v15 = v16;
                v13 = v17;
                v12 = 0;
                n = 22;
                v10 = (int64_t)*(char *)(v2 + 32);
                v9 = 0;
                v5 = 0;
                v7 = 16;
                v8 = 0;
                goto lab_0x560d57;
            }
        }
        default: {
            goto lab_0x560cb8;
        }
    }
  lab_0x560e67_2:;
    // 0x560e67
    char v18; // 0x560c30
    char v19 = v18; // 0x560e71
    char v20; // 0x560c30
    char v21 = v20; // 0x560e71
    int64_t v22; // 0x560c30
    int64_t v23 = v22; // 0x560e71
    int64_t v24; // 0x560c30
    int64_t v25 = v24; // 0x560e71
    char v26 = v18; // 0x560e71
    char v27 = v20; // 0x560e71
    int64_t v28 = v22; // 0x560e71
    int64_t v29 = v24; // 0x560e71
    if (g96 != 0) {
        goto lab_0x5610e5;
    } else {
        goto lab_0x560e77;
    }
  lab_0x560dd4:;
    // 0x560dd4
    char v30; // 0x560c30
    char v31 = v30; // 0x560dd7
    int64_t v32; // 0x560c30
    int64_t v33 = v32; // 0x560dd7
    int64_t v34; // 0x560c30
    int64_t v35 = v34; // 0x560dd7
    int64_t v36; // 0x560c30
    if ((int32_t)v36 == -1) {
        // break -> 0x5610d0
        goto lab_0x5610d0_2;
    }
    goto lab_0x560ddd;
  lab_0x560ddd:;
    // 0x560ddd
    uint16_t v37; // 0x560d78
    if (v37 >= (int16_t)v34) {
        // branch -> 0x560e08
    }
    int64_t v38 = v34;
    int64_t v39 = v32;
    char v40 = 1;
    if (result4 != 0) {
        int64_t * v41 = (int64_t *)(result4 + 16); // 0x560e12
        uint64_t v42 = *v41; // 0x560e12
        if (v42 < *(int64_t *)(result4 + 24)) {
            // 0x560e20
            *v41 = v42 + 1;
        }
    }
    int64_t v43 = function_5246d0(v15); // 0x560e34
    int64_t result = v43; // 0x560e47
    if (v1 == 0) {
        // 0x5614b0
        return result;
    }
    char v44 = 0; // 0x560e54
    int64_t v45; // 0x560c30
    int64_t v46; // 0x560c30
    if ((int32_t)v46 == -1) {
        uint64_t v47 = *(int64_t *)(v1 + 16); // 0x561170
        if (v47 >= *(int64_t *)(v1 + 24)) {
            int64_t v48 = *(int64_t *)v1; // 0x561488
            v45 = v48;
            if ((int32_t)v48 != -1) {
                goto lab_0x561181;
            } else {
                // 0x561497
                v1 = 0;
                v44 = 1;
                goto lab_0x560e5a;
            }
        } else {
            // 0x56117e
            v45 = (int64_t)*(char *)v47;
            goto lab_0x561181;
        }
    } else {
        goto lab_0x560e5a;
    }
  lab_0x560e5a:
    // 0x560e5a
    v18 = 1;
    v20 = v40;
    v22 = v39;
    v24 = v38;
    int64_t v49 = v46; // 0x560e5c
    if (v44 == (char)((int32_t)v43 == -1)) {
        goto lab_0x560e67_2;
    }
    goto lab_0x56118f;
  lab_0x56118f:;
    int64_t v50 = v49; // 0x56119a
    char v51 = v40; // 0x56119a
    int64_t v52 = function_5246d0(v15) & 0xffffffff; // 0x56119a
    int64_t v53 = v39; // 0x56119a
    int64_t v54 = v38; // 0x56119a
    goto lab_0x560daf;
  lab_0x561181:
    // 0x561181
    v18 = 1;
    v20 = v40;
    v22 = v39;
    v24 = v38;
    v49 = 0x100000000 * v45 >> 32;
    if ((int32_t)v43 != -1) {
        goto lab_0x560e67_2;
    }
    goto lab_0x56118f;
  lab_0x560fbd_3:;
    // 0x560fbd
    int64_t v59; // 0x560c30
    int64_t v60 = v59; // 0x560fc6
    char v61 = 1; // 0x560fc6
    char * v62; // 0x560cec
    int64_t v63 = (int64_t)*v62; // 0x560fc6
    int64_t v64; // 0x560c30
    int64_t v65 = v64; // 0x560fc6
    int64_t v66; // 0x560c30
    int64_t v67 = v66; // 0x560fc6
    int64_t v68; // 0x560c30
    int64_t v69 = v68; // 0x560fc6
    int64_t v70; // 0x560c30
    int64_t v71 = v70; // 0x560fc6
    goto lab_0x560d40;
  lab_0x560f38:;
    // 0x560f38
    int64_t v118; // 0x560c30
    int64_t v164 = v118;
    char v114; // 0x560c30
    if (*(char *)(v2 + 112) != v114) {
        // 0x560f3d
        result = v164;
        if (*(char *)(v2 + 113) != v114) {
            // 0x5614b0
            return result;
        }
    }
    int64_t v119 = 0; // 0x560f55
    int64_t v120 = 16; // 0x560f55
    int64_t v121 = 0; // 0x560f55
    int64_t v107; // 0x560c30
    if (v3 != 0 && (int32_t)v107 != 16) {
        // 0x5614e1
        return v164 & -256;
    }
    goto lab_0x560f67;
  lab_0x560f67:
    // 0x560f67
    v70 = v121;
    v68 = v120;
    v66 = v119;
    if (result4 == 0) {
        goto lab_0x5611bc;
    } else {
        int64_t * v165 = (int64_t *)(result4 + 16); // 0x560f75
        uint64_t v166 = *v165; // 0x560f75
        int64_t * v167 = (int64_t *)(result4 + 24); // 0x560f79
        uint64_t v168 = *v167; // 0x560f79
        int64_t v169 = v168; // 0x560f7d
        int64_t v170 = v166; // 0x560f7d
        if (v166 < v168) {
            // 0x560f83
            v170 = v166 + 1;
            *v165 = v170;
            v169 = *v167;
        }
        // 0x560f93
        if (v170 >= v169) {
            // 0x561370
            if ((int32_t)*(int64_t *)result4 != -1) {
                goto lab_0x560fa4;
            } else {
                // 0x56137f
                result4 = 0;
                goto lab_0x5611bc;
            }
        } else {
            goto lab_0x560fa4;
        }
    }
  lab_0x5611bc:;
    int64_t v171 = v1; // 0x5611bc
    int64_t v111; // 0x560c30
    v59 = v111;
    if (v171 == 0) {
        goto lab_0x560fbd_3;
    }
    char v172 = 1; // 0x5611d4
    int64_t v173 = v171; // 0x5611d4
    int64_t v174 = v111; // 0x5611d4
    if ((int32_t)v111 != -1) {
        goto lab_0x561041;
    } else {
        goto lab_0x561022;
    }
  lab_0x561041:;
    // 0x561041
    int64_t v73; // 0x560c30
    int64_t v175 = function_5246d0(v73); // 0x561045
    result = v175;
    if ((char)v66 == 0) {
        // 0x5614b0
        return result;
    }
    int64_t v99 = v174; // 0x561059
    int64_t v100 = v175; // 0x561059
    int64_t v101 = (int64_t)*v62; // 0x561059
    int64_t v102 = v175 & 0xffffffff; // 0x561059
    int64_t v103 = v66; // 0x561059
    int64_t v104 = v68; // 0x561059
    int64_t v105 = v70; // 0x561059
    goto lab_0x560f10;
  lab_0x561022:;
    int64_t v176 = v173;
    uint64_t v177 = *(int64_t *)(v176 + 16); // 0x561022
    int64_t v178; // 0x560c30
    int64_t v179; // 0x560c30
    char v180; // 0x560c30
    if (v177 >= *(int64_t *)(v176 + 24)) {
        int64_t v181 = *(int64_t *)v176; // 0x561390
        v178 = v181;
        if ((int32_t)v181 != -1) {
            goto lab_0x561033;
        } else {
            // 0x5613a8
            v1 = 0;
            v179 = v111;
            v180 = 1;
            goto lab_0x561039;
        }
    } else {
        // 0x561030
        v178 = (int64_t)*(char *)v177;
        goto lab_0x561033;
    }
  lab_0x560fa4:;
    int64_t v182 = v1; // 0x560fa4
    v174 = v111;
    if (v182 == 0) {
        goto lab_0x561041;
    } else {
        // 0x560fb6
        v172 = 0;
        v173 = v182;
        if ((int32_t)v111 != -1) {
            goto lab_0x560fbd_3;
        }
        goto lab_0x561022;
    }
  lab_0x561033:
    // 0x561033
    v179 = 0x100000000 * v178 >> 32;
    v180 = 0;
    goto lab_0x561039;
  lab_0x561039:
    // 0x561039
    v59 = v179;
    v174 = v179;
    if (v180 == v172) {
        goto lab_0x560fbd_3;
    }
    goto lab_0x561041;
  lab_0x560cb8:;
    int64_t v183 = function_524600(&result4, &v1); // 0x560ccc
    v14 = (int64_t)&result4;
    v6 = v4;
    result = v183;
    if ((char)v183 != 0) {
        // 0x5614b0
        return result;
    }
    goto lab_0x560cdd;
  lab_0x560cdd:;
    int64_t v98 = v6;
    v73 = v14;
    int64_t v90 = function_5246d0(v73); // 0x560ce1
    char v74 = *(char *)(v2 + 110); // 0x560ce6
    int64_t v94 = v90 & 0xffffffff; // 0x560cea
    v62 = (char *)(v2 + 32);
    unsigned char v184 = *v62; // 0x560cec
    int64_t v92 = v184; // 0x560cec
    char v75 = v90; // 0x560cf0
    int64_t v89; // 0x560c30
    int64_t v93; // 0x560c30
    int64_t v91; // 0x560c30
    if (v74 == v75) {
        goto lab_0x560d02;
    } else {
        // 0x560cf9
        v89 = v90;
        v91 = v92;
        v93 = v94;
        if (*(char *)(v2 + 111) != v75) {
            goto lab_0x560f00;
        } else {
            goto lab_0x560d02;
        }
    }
  lab_0x560d02:
    if (v184 != 0) {
        // 0x560ef0
        v89 = v90;
        v91 = v92;
        v93 = v94;
        if (*(char *)(v2 + 73) != v75) {
            goto lab_0x560d0a;
        } else {
            goto lab_0x560f00;
        }
    } else {
        goto lab_0x560d0a;
    }
  lab_0x560d57:;
    int64_t v76 = (int64_t)&g97; // bp-72, 0x560d64
    if ((char)v10 != 0) {
        // 0x5613d0
        function_259ce(&v76, 32);
    }
    // 0x560d6f
    v37 = (int16_t)((0x100000000 * (int64_t)((int32_t)&g106 >> 31) | (int64_t)(int32_t)&g106) / (v7 & 0xffffffff));
    char v77 = *(char *)(v2 + 136); // 0x560d7d
    int64_t result2 = v77; // 0x560d7d
    int64_t v78; // 0x560c30
    int64_t v79; // 0x560c30
    int64_t v80; // 0x560c30
    int64_t v81; // 0x560c30
    char result3; // 0x560c30
    int64_t v82; // 0x560c30
    int64_t v83; // 0x560c30
    int64_t v84; // 0x560c30
    char v85; // 0x560c30
    char v86; // 0x560c30
    char * v87; // 0x561236
    if (v77 != 0) {
        // 0x561210
        if (v13 != 0) {
            // 0x5614b0
            return result2;
        }
        // 0x56121b
        v87 = (char *)(v2 + 32);
        char v88 = *v87; // 0x561236
        v84 = v11;
        v85 = 0;
        v82 = v9;
        v78 = v8;
        v80 = 0;
        if (v88 == 0) {
            goto lab_0x561247;
        } else {
            // 0x56123e
            v84 = v11;
            v85 = 0;
            v82 = v9;
            v78 = v8;
            v80 = 0;
            v83 = v11;
            v86 = 0;
            result3 = v88;
            v79 = v8;
            v81 = 0;
            if (*(char *)(v2 + 73) == (char)v9) {
                goto lab_0x56131b;
            } else {
                goto lab_0x561247;
            }
        }
    } else {
        // 0x560d90
        if (v13 != 0) {
            // 0x5614b0
            return result2;
        }
        int64_t v58 = 0x100000000000000 * (int64_t)n + 0x3000000000000000 >> 56;
        v50 = v11;
        v51 = 0;
        v52 = v9;
        v53 = v8;
        v54 = 0;
        while (true) {
          lab_0x560daf:
            // 0x560daf
            v34 = v54;
            v32 = v53;
            int64_t v55 = v52;
            v30 = v51;
            v46 = v50;
            int64_t v56 = 0x100000000000000 * v55 >> 56; // 0x560db5
            char v57 = v55;
            if (n < 11) {
                // 0x560dbe
                v31 = v30;
                v33 = v32;
                v35 = v34;
                if (v55 < v58 != v57 > 47) {
                    // break -> 0x5610d0
                    break;
                }
                // 0x560dd1
                v36 = v56 + 0xffffffd0;
                goto lab_0x560dd4;
            } else {
                if (v57 < 58) {
                    // 0x560dd1
                    v36 = v56 + 0xffffffd0;
                    goto lab_0x560dd4;
                } else {
                    if (v57 < 103) {
                        // 0x5611f0
                        v36 = v56 + 0xffffffa9;
                        goto lab_0x560dd4;
                    } else {
                        // 0x5610b8
                        v31 = v30;
                        v33 = v32;
                        v35 = v34;
                        if (v57 >= 71) {
                            // break -> 0x5610d0
                            break;
                        }
                        // 0x5610c0
                        v31 = v30;
                        v33 = v32;
                        v35 = v34;
                        if ((int32_t)(v56 + 0xffffffc9) == -1) {
                            // break -> 0x5610d0
                            break;
                        }
                        goto lab_0x560ddd;
                    }
                }
            }
        }
        goto lab_0x5610d0_2;
    }
  lab_0x560d0a:
    // 0x560d0a
    v89 = v90;
    v91 = v92;
    v93 = v94;
    if (*(char *)(v2 + 72) == v75) {
        goto lab_0x560f00;
    } else {
        int64_t v95 = function_524600((int64_t *)function_5245c0(v73), &v1); // 0x560d22
        char v96 = v95; // 0x560d27
        if (v96 == 0) {
            int64_t v97 = function_5246d0(v73); // 0x56142c
            v89 = v97;
            v91 = (int64_t)*v62;
            v93 = v97 & 0xffffffff;
            goto lab_0x560f00;
        } else {
            // 0x560d33
            v60 = a5;
            v61 = v96;
            v63 = (int64_t)*v62;
            v65 = v94;
            v67 = 0;
            v69 = v98;
            v71 = 0;
            goto lab_0x560d40;
        }
    }
  lab_0x560f00:
    // 0x560f00
    v99 = a5;
    v100 = v89;
    v101 = v91;
    v102 = v93;
    v103 = 0;
    v104 = v98;
    v105 = 0;
    while (true) {
      lab_0x560f10:;
        int64_t v106 = v105;
        v107 = v104;
        int64_t v108 = v103;
        v64 = v102;
        int64_t v109 = v101;
        int64_t v110 = v100;
        v111 = v99;
        char v112; // 0x560c30
        if (v109 == 0) {
            // 0x560f10
            v112 = v64;
        } else {
            char v113 = v64;
            v60 = v111;
            v61 = 0;
            v63 = v109;
            v65 = v64;
            v67 = v108;
            v69 = v107;
            v71 = v106;
            v112 = v113;
            if (*(char *)(v2 + 73) == v113) {
                // break -> 0x560d40
                break;
            }
        }
        // 0x560f1d
        v114 = v112;
        v60 = v111;
        v61 = 0;
        v63 = v109;
        v65 = v64;
        v67 = v108;
        v69 = v107;
        v71 = v106;
        if (*(char *)(v2 + 72) == v114) {
            // break -> 0x560d40
            break;
        }
        // 0x560f26
        if (*(char *)(v2 + 114) == v114) {
            int32_t v115 = v107; // 0x561064
            unsigned char v116 = (char)v108 ^ 1 | (char)(v115 == 10); // 0x56106b
            int64_t v117 = v110 & -256 | (int64_t)v116; // 0x56106b
            v118 = v117;
            if (v116 == 0) {
                goto lab_0x560f38;
            } else {
                // 0x561074
                v119 = 1;
                v120 = 8;
                v121 = 0;
                if (v3 != 0 && v115 != 8) {
                    // 0x5611e0
                    v119 = v117 & 0xffffffff;
                    v120 = v107;
                    v121 = v106 + 1 & 0xffffffff;
                }
                goto lab_0x560f67;
            }
        } else {
            // 0x560f2f
            v60 = v111;
            v61 = 0;
            v63 = v109;
            v65 = v64;
            v67 = v108;
            v69 = v107;
            v71 = v106;
            v118 = v110;
            if ((char)v108 == 0) {
                // break -> 0x560d40
                break;
            }
            goto lab_0x560f38;
        }
    }
    goto lab_0x560d40;
  lab_0x560d40:;
    int32_t v72 = v69; // 0x560d40
    v11 = v60;
    v15 = v73;
    v13 = v61;
    v12 = v74 == v75;
    n = v72 == 16 ? 22 : v72;
    v10 = v63;
    v9 = v65;
    v5 = v67;
    v7 = v69;
    v8 = v71;
    goto lab_0x560d57;
  lab_0x561247:;
    int64_t v122 = v80;
    int64_t v123 = v78;
    char v124 = v85;
    v31 = v124;
    v33 = v123;
    v35 = v122;
    int64_t v125; // 0x560c30
    int64_t v126; // 0x560c30
    int64_t v127; // 0x560c30
    char v128; // 0x560c30
    if (*(char *)(v2 + 72) == (char)v82) {
        goto lab_0x5610d0_2;
    } else {
        int64_t str = v2 + 114; // 0x56121b
        int64_t * found_byte_pos = memchr((int64_t *)str, 0x1000000 * (int32_t)v82 >> 24, n); // 0x561260
        v31 = v124;
        v33 = v123;
        v35 = v122;
        if (found_byte_pos == NULL) {
            goto lab_0x5610d0_2;
        } else {
            int64_t v129 = v84;
            v127 = v129;
            v128 = v77;
            v125 = v123;
            v126 = v122;
            if (v37 >= (int16_t)v122) {
                int64_t v130 = (int64_t)found_byte_pos - str; // 0x56126e
                int32_t v131 = v130; // 0x561274
                int32_t v132 = v131 - 15; // 0x561274
                int64_t v133 = v132 < 0 == (14 - v131 & v131) < 0 == (v132 != 0) ? v130 + 0xfffffffa : v130; // 0x561277
                int64_t v134 = (0x100000000 * v122 >> 32) * (0x100000000 * v7 >> 32); // 0x561286
                int32_t v135 = (int32_t)&g106 - (int32_t)v133; // 0x561295
                int32_t v136 = (int32_t)v134 % 0x10000 - v135; // 0x561295
                v127 = v129;
                v128 = v124 | (char)(v136 < 0 == (v136 & v135) < 0 == (v136 != 0));
                v125 = v123 + 1 & 0xffffffff;
                v126 = v133 + v134 & 0xffffffff;
            }
            goto lab_0x5612a5;
        }
    }
  lab_0x5610d0_2:
    // 0x5610d0
    v19 = 0;
    v21 = v31;
    v23 = v33;
    v25 = v35;
    v26 = 0;
    v27 = v31;
    v28 = v33;
    v29 = v35;
    if (g96 == 0) {
        goto lab_0x560e77;
    } else {
        goto lab_0x5610e5;
    }
  lab_0x56131b:
    // 0x56131b
    if ((int32_t)v79 == 0) {
        // 0x561512
        return result3;
    }
    // 0x561324
    function_451f2(&v76, 0x100000000000000 * v79 >> 56);
    v127 = v83;
    v128 = v86;
    v125 = 0;
    v126 = v81;
    goto lab_0x5612a5;
  lab_0x560e77:;
    char v149 = v19; // 0x560e7a
    int64_t v151 = v76; // 0x560e7a
    char v150 = v19; // 0x560e7a
    char v155 = v21; // 0x560e7a
    int64_t v152 = v76; // 0x560e7a
    int64_t v157 = v25; // 0x560e7a
    if ((char)v5 == 1 || (int32_t)v23 != 0) {
        goto lab_0x561129;
    } else {
        goto lab_0x560e8a;
    }
  lab_0x5610e5:
    // 0x5610e5
    function_451f2(&v76, 0x100000000000000 * v28 >> 56);
    int64_t v163 = *(int64_t *)(v2 + 16); // 0x5610fa
    if ((char)function_569070(v163, *(int64_t *)(v2 + 24), &v76) == 0) {
        // 0x561440
        *(int32_t *)a7 = 4;
    }
    // 0x56110e
    v150 = v26;
    v155 = v27;
    v152 = v76;
    v157 = v29;
    if ((int32_t)v28 != 0) {
        goto lab_0x561129;
    } else {
        // 0x561118
        v149 = v26;
        v151 = v76;
        v150 = v26;
        v155 = v27;
        v152 = v76;
        v157 = v29;
        if ((char)v5 != 1 == g96 == 0) {
            goto lab_0x560e8a;
        } else {
            goto lab_0x561129;
        }
    }
  lab_0x5612a5:;
    int64_t v137 = v126;
    int64_t v138 = v125;
    char v139 = v128;
    int64_t v140 = v127;
    if (result4 != 0) {
        int64_t * v141 = (int64_t *)(result4 + 16); // 0x5612af
        uint64_t v142 = *v141; // 0x5612af
        if (v142 < *(int64_t *)(result4 + 24)) {
            // 0x5612bd
            *v141 = v142 + 1;
        }
    }
    int64_t v143 = function_5246d0(v15); // 0x5612d1
    result = v143;
    if (v1 == 0) {
        // 0x5614b0
        return result;
    }
    int64_t v144 = v140; // 0x5612f1
    char v145 = 0; // 0x5612f1
    int64_t v146; // 0x560c30
    if ((int32_t)v140 == -1) {
        uint64_t v147 = *(int64_t *)(v1 + 16); // 0x561350
        if (v147 >= *(int64_t *)(v1 + 24)) {
            int64_t v148 = *(int64_t *)v1; // 0x561460
            v146 = v148;
            if ((int32_t)v148 != -1) {
                goto lab_0x561361;
            } else {
                // 0x56146f
                v1 = 0;
                v144 = v140;
                v145 = v77;
                goto lab_0x5612f3;
            }
        } else {
            // 0x56135e
            v146 = (int64_t)*(char *)v147;
            goto lab_0x561361;
        }
    } else {
        goto lab_0x5612f3;
    }
  lab_0x561129:
    // 0x561129
    v149 = v150;
    v151 = v152;
    int64_t v153; // 0x560c30
    char v154; // 0x560c30
    if (v13 != 0) {
        goto lab_0x560e8a;
    } else {
        // 0x561134
        if (v155 == 0) {
            int16_t v156 = v157; // 0x561408
            *(int16_t *)a8 = v12 != 0 ? -v156 : v156;
            v154 = v150;
            v153 = v152;
        } else {
            // 0x56113f
            *(int16_t *)a8 = -1;
            *(int32_t *)a7 = 4;
            v154 = v150;
            v153 = v152;
        }
        goto lab_0x560e9f;
    }
  lab_0x560e8a:
    // 0x560e8a
    *(int16_t *)a8 = 0;
    *(int32_t *)a7 = 4;
    v154 = v149;
    v153 = v151;
    goto lab_0x560e9f;
  lab_0x560e9f:
    // 0x560e9f
    if (v154 != 0) {
        int32_t * v158 = (int32_t *)a7; // 0x560eab
        *v158 = *v158 | 2;
    }
    // 0x560eae
    if (v153 - 24 == (int64_t)g32) {
        // 0x560ec9
        __readfsqword(40);
        return result4;
    }
    // 0x5614b0
    return result4;
  lab_0x5612f3:
    // 0x5612f3
    v18 = v77;
    v20 = v139;
    v22 = v138;
    v24 = v137;
    if (v145 == (char)((int32_t)v143 == -1)) {
        goto lab_0x560e67_2;
    } else {
        int64_t v159 = v144;
        int64_t v160 = function_5246d0(v15); // 0x5612ff
        int64_t v161 = v160 & 0xffffffff; // 0x561304
        char v162 = *v87; // 0x561306
        v84 = v159;
        v85 = v139;
        v82 = v161;
        v78 = v138;
        v80 = v137;
        if (v162 == 0) {
            goto lab_0x561247;
        } else {
            // 0x561312
            v84 = v159;
            v85 = v139;
            v82 = v161;
            v78 = v138;
            v80 = v137;
            v83 = v159;
            v86 = v139;
            result3 = v162;
            v79 = v138;
            v81 = v137;
            if (*(char *)(v2 + 73) != (char)v160) {
                goto lab_0x561247;
            } else {
                goto lab_0x56131b;
            }
        }
    }
  lab_0x561361:
    // 0x561361
    v144 = 0x100000000 * v146 >> 32;
    v145 = 0;
    goto lab_0x5612f3;
}

// Address range: 0x5615a0 - 0x5615a5
// From class:    std::num_get<char, std::istreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_5615a0(void) {
    // 0x5615a0
    int64_t v1; // 0x5615a0
    int64_t result = function_560c30(v1, v1, v1, v1, v1, v1, (int64_t)&g107, (int64_t)&g107); // 0x5615a0
    return result;
}

// Address range: 0x5615b0 - 0x5615ca
int64_t function_5615b0(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 32); // 0x5615b3
    if (result != g31) {
        // 0x5615c8
        return result;
    }
    // 0x5615c0
    int64_t v1; // 0x5615b0
    int64_t result2 = function_560c30(a1, v1, v1, v1, v1, v1, (int64_t)&g107, (int64_t)&g107); // 0x5615c0
    return result2;
}

// Address range: 0x5615d0 - 0x561e6b
int64_t function_5615d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t result6) {
    int64_t result7 = a2; // bp-104, 0x5615ec
    int64_t v1 = a4; // bp-120, 0x561605
    __readfsqword(40);
    int64_t v2 = function_558300(); // 0x561634
    int32_t v3 = *(int32_t *)(a6 + 24) & 74; // 0x561640
    int64_t v4 = 10; // 0x5615d0
    int64_t v5; // 0x5615d0
    int64_t v6; // 0x5615d0
    int64_t v7; // 0x5615d0
    int64_t v8; // 0x5615d0
    int64_t v9; // 0x5615d0
    int64_t result9; // 0x5615d0
    int64_t v10; // 0x5615d0
    int64_t v11; // 0x5615d0
    int64_t v12; // 0x5615d0
    int64_t v13; // 0x5615d0
    char v14; // 0x5615d0
    char v15; // 0x5615d0
    int32_t v16; // 0x5615d0
    int32_t v17; // 0x5615d0
    int64_t v18; // 0x5615d0
    int64_t v19; // 0x5615d0
    int64_t v20; // 0x5615d0
    int32_t n; // 0x5615d0
    int32_t v21; // 0x5615d0
    int64_t v22; // 0x5615d0
    int64_t v23; // 0x5615d0
    int64_t v24; // bp-72, 0x5615d0
    switch (v3) {
        case 64: {
            // 0x561e10
            v4 = 8;
            goto lab_0x56165e;
        }
        case 8: {
            int64_t result = function_524600(&result7, &v1); // 0x5619c4
            if ((char)result == 0) {
                // 0x561e70
                return result;
            }
            int64_t v25 = (int64_t)&result7; // 0x5619c0
            unsigned char v26 = *(char *)(v2 + 32); // 0x5619d3
            v24 = (int64_t)&g97;
            if (v26 != 0) {
                // 0x561e1b
                v12 = a5;
                v23 = v25;
                v17 = v26;
                v15 = 0;
                v21 = 22;
                v10 = 0;
                v6 = 0;
                v7 = 16;
                v8 = 0;
                goto lab_0x561e40;
            } else {
                char v27 = *(char *)(v2 + 136); // 0x5619f9
                if (v27 == 0) {
                    // 0x561e70
                    return 0;
                }
                // 0x561a11
                v13 = a5;
                v22 = v25;
                v16 = v27;
                v14 = 0;
                n = 22;
                v20 = 16;
                v19 = 0x7fffffffffffffff;
                v18 = -1;
                result9 = 0x7fffffffffffffff;
                v11 = 0;
                v5 = v26;
                v9 = 0;
                goto lab_0x561a50;
            }
        }
        default: {
            goto lab_0x56165e;
        }
    }
  lab_0x5616e8_2:;
    // 0x5616e8
    int64_t v28; // 0x5615d0
    int32_t v29 = v28; // 0x5616e8
    int32_t v30 = v29 == 16 ? 22 : v29;
    v24 = (int64_t)&g97;
    int64_t v31; // 0x5615d0
    int64_t v32 = v31; // 0x561719
    int64_t v33; // 0x56166e
    int64_t v34 = v33; // 0x561719
    int32_t v35; // 0x5615d0
    int32_t v36 = v35; // 0x561719
    char v37; // 0x561698
    char v38 = v37; // 0x561719
    int32_t v39 = v30; // 0x561719
    int64_t v40; // 0x5615d0
    int64_t v41 = v40; // 0x561719
    int64_t v42; // 0x5615d0
    int64_t v43 = v42; // 0x561719
    int64_t v44 = v28; // 0x561719
    int64_t v45; // 0x5615d0
    int64_t v46 = v45; // 0x561719
    v12 = v31;
    v23 = v33;
    v17 = v35;
    v15 = v37;
    v21 = v30;
    v10 = v40;
    v6 = v42;
    v7 = v28;
    v8 = v45;
    char v47; // 0x5615d0
    if (v47 != 0) {
        goto lab_0x561e40;
    } else {
        goto lab_0x56171f;
    }
  lab_0x56183b_2:;
    // 0x56183b
    int32_t v48; // 0x5615d0
    int32_t v49 = v48; // 0x56184d
    char v50; // 0x5615d0
    char v51 = v50; // 0x56184d
    int64_t v52 = 0; // 0x56184d
    int64_t v53 = 1; // 0x56184d
    int64_t v54 = v24; // 0x56184d
    int64_t v55; // 0x5615d0
    int64_t v56 = v55; // 0x56184d
    int64_t v57; // 0x5615d0
    int64_t v58 = v57; // 0x56184d
    int64_t v59; // 0x5615d0
    int64_t v60 = v59; // 0x56184d
    int32_t v61 = v48; // 0x56184d
    char v62 = v50; // 0x56184d
    int64_t v63 = 1; // 0x56184d
    int64_t v64 = v55; // 0x56184d
    int64_t v65 = v57; // 0x56184d
    int64_t v66 = v59; // 0x56184d
    if (*(int64_t *)(v24 - 24) != 0) {
        goto lab_0x561c45;
    } else {
        goto lab_0x561853;
    }
  lab_0x5617ad:;
    // 0x5617ad
    int64_t v67; // 0x5615d0
    int64_t v68 = v67 & 0xffffffff;
    int64_t v69 = v68; // 0x5617b0
    int32_t v70 = v36; // 0x5617b0
    char v71 = v38; // 0x5617b0
    int64_t v72 = v68; // 0x5617b0
    int64_t v73 = v43; // 0x5617b0
    int64_t v74; // 0x5615d0
    int64_t v75 = v74; // 0x5617b0
    int64_t v76; // 0x5615d0
    int64_t v77 = v76; // 0x5617b0
    if ((int32_t)v67 == -1) {
        // break -> 0x561c30
        goto lab_0x561c30_2;
    }
    goto lab_0x5617b6;
  lab_0x5617b6:;
    int64_t v78 = v76; // 0x5617bb
    int64_t v79; // 0x5615d0
    int64_t v80 = v79; // 0x5617bb
    int64_t v81 = 1; // 0x5617bb
    int64_t v82; // 0x561738
    int64_t v83; // 0x561748
    int64_t v84; // 0x5615d0
    if (v84 >= v79) {
        uint64_t v85 = v79 * v82; // 0x5617c1
        int64_t v86 = 0x100000000 * v69 >> 32; // 0x5617cc
        v78 = v76 + 1 & 0xffffffff;
        v80 = v86 + v85;
        v81 = v74 | (int64_t)(v83 - v86 < v85);
    }
    int64_t v87 = v81;
    int64_t v88 = v78;
    int64_t result2; // 0x5615d0
    if (result7 != 0) {
        int64_t * v89 = (int64_t *)(result7 + 16); // 0x5617eb
        uint64_t v90 = *v89; // 0x5617eb
        result2 = v90;
        if (v90 >= *(int64_t *)(result7 + 24)) {
            // 0x561e70
            return result2;
        }
        // 0x5617f9
        *v89 = v90 + 1;
    }
    int64_t v91 = function_5246d0(v34); // 0x56180d
    result2 = v91;
    if (v1 == 0) {
        // 0x561e70
        return result2;
    }
    int64_t v92; // 0x5615d0
    int64_t v93; // 0x5615d0
    if ((int32_t)v93 == -1) {
        uint64_t v94 = *(int64_t *)(v1 + 16); // 0x561ce8
        result2 = v94;
        if (v94 >= *(int64_t *)(v1 + 24)) {
            // 0x561e70
            return result2;
        }
        // 0x561cf6
        v48 = v36;
        v50 = v38;
        v55 = v43;
        v57 = v87;
        v59 = v88;
        v92 = (int64_t)*(char *)v94;
        if ((int32_t)v91 != -1) {
            goto lab_0x56183b_2;
        }
    } else {
        // 0x561833
        v48 = v36;
        v50 = v38;
        v55 = v43;
        v57 = v87;
        v59 = v88;
        v92 = v93;
        if ((int32_t)v91 != -1) {
            goto lab_0x56183b_2;
        }
    }
    int64_t v95 = v92; // 0x561d12
    int64_t v96 = function_5246d0(v34) & 0xffffffff; // 0x561d12
    int64_t v97 = v87; // 0x561d12
    int64_t v98 = v88; // 0x561d12
    int64_t v99 = v80; // 0x561d12
    goto lab_0x561788;
  lab_0x5619a1_3:;
    // 0x5619a1
    int64_t v106; // 0x5615d0
    v31 = v106;
    v35 = 1;
    char * v107; // 0x561692
    v47 = *v107;
    int64_t v108; // 0x5615d0
    v40 = v108;
    int64_t v109; // 0x5615d0
    v42 = v109;
    int64_t v110; // 0x5615d0
    v28 = v110;
    int64_t v111; // 0x5615d0
    v45 = v111;
    goto lab_0x5616e8_2;
  lab_0x561918:;
    // 0x561918
    int64_t v112; // 0x5615d0
    int64_t v113 = v112;
    char v114; // 0x5615d0
    if (*(char *)(v2 + 112) != v114) {
        // 0x56191d
        result2 = v113;
        if (*(char *)(v2 + 113) != v114) {
            // 0x561e70
            return result2;
        }
    }
    int64_t v115 = 0; // 0x561935
    int64_t v116 = 16; // 0x561935
    int64_t v117 = 0; // 0x561935
    int64_t v118; // 0x5615d0
    if (v3 != 0 && (int32_t)v118 != 16) {
        // 0x561f6e
        return v113 & -256;
    }
    goto lab_0x561947;
  lab_0x561947:
    // 0x561947
    v111 = v117;
    v110 = v116;
    v109 = v115;
    if (result7 == 0) {
        goto lab_0x561d3c;
    } else {
        int64_t * v119 = (int64_t *)(result7 + 16); // 0x561955
        uint64_t v120 = *v119; // 0x561955
        int64_t * v121 = (int64_t *)(result7 + 24); // 0x561959
        uint64_t v122 = *v121; // 0x561959
        int64_t v123 = v122; // 0x56195d
        int64_t v124 = v120; // 0x56195d
        if (v120 < v122) {
            // 0x561963
            v124 = v120 + 1;
            *v119 = v124;
            v123 = *v121;
        }
        // 0x561973
        if (v124 >= v123) {
            // 0x561dc0
            if ((int32_t)*(int64_t *)result7 != -1) {
                goto lab_0x561984;
            } else {
                // 0x561dcf
                result7 = 0;
                goto lab_0x561d3c;
            }
        } else {
            goto lab_0x561984;
        }
    }
  lab_0x561d3c:;
    int64_t v125 = v1; // 0x561d3c
    int64_t v126; // 0x5615d0
    v106 = v126;
    if (v125 == 0) {
        goto lab_0x5619a1_3;
    }
    char v127 = 1; // 0x561d54
    int64_t v128 = v125; // 0x561d54
    int64_t v129 = v126; // 0x561d54
    if ((int32_t)v126 != -1) {
        goto lab_0x561ba1;
    } else {
        goto lab_0x561b82;
    }
  lab_0x561ba1:;
    int64_t v130 = function_5246d0(v33); // 0x561ba5
    result2 = v130;
    if ((char)v109 == 0) {
        // 0x561e70
        return result2;
    }
    int64_t v131 = v129; // 0x561bb9
    int64_t v132 = v130; // 0x561bb9
    char v133 = *v107; // 0x561bb9
    int64_t v134 = v130 & 0xffffffff; // 0x561bb9
    int64_t v135 = v109; // 0x561bb9
    int64_t v136 = v110; // 0x561bb9
    int64_t v137 = v111; // 0x561bb9
    goto lab_0x5618f0;
  lab_0x561b82:;
    int64_t v147 = v128;
    uint64_t v148 = *(int64_t *)(v147 + 16); // 0x561b82
    int64_t v149; // 0x5615d0
    int64_t v150; // 0x5615d0
    char v151; // 0x5615d0
    if (v148 >= *(int64_t *)(v147 + 24)) {
        int64_t v152 = *(int64_t *)v147; // 0x561de0
        v149 = v152;
        if ((int32_t)v152 != -1) {
            goto lab_0x561b93;
        } else {
            // 0x561df8
            v1 = 0;
            v150 = v126;
            v151 = 1;
            goto lab_0x561b99;
        }
    } else {
        // 0x561b90
        v149 = (int64_t)*(char *)v148;
        goto lab_0x561b93;
    }
  lab_0x561984:;
    int64_t v153 = v1; // 0x561984
    v129 = v126;
    if (v153 == 0) {
        goto lab_0x561ba1;
    } else {
        // 0x561996
        v127 = 0;
        v128 = v153;
        if ((int32_t)v126 != -1) {
            goto lab_0x5619a1_3;
        }
        goto lab_0x561b82;
    }
  lab_0x561b93:
    // 0x561b93
    v150 = 0x100000000 * v149 >> 32;
    v151 = 0;
    goto lab_0x561b99;
  lab_0x561b99:
    // 0x561b99
    v106 = v150;
    v129 = v150;
    if (v151 == v127) {
        goto lab_0x5619a1_3;
    }
    goto lab_0x561ba1;
  lab_0x56165e:;
    int64_t v154 = function_524600(&result7, &v1); // 0x561672
    result2 = v154;
    if ((char)v154 != 0) {
        // 0x561e70
        return result2;
    }
    // 0x561683
    v33 = (int64_t)&result7;
    int64_t v155 = function_5246d0(v33); // 0x561687
    char v156 = *(char *)(v2 + 110); // 0x56168c
    int64_t v157 = v155 & 0xffffffff; // 0x561690
    v107 = (char *)(v2 + 32);
    char v158 = *v107; // 0x561692
    char v159 = v155; // 0x561696
    v37 = v156 == v159;
    if (v156 == v159) {
        goto lab_0x5616a8;
    } else {
        // 0x56169f
        if (*(char *)(v2 + 111) != v159) {
            goto lab_0x5618e0;
        } else {
            goto lab_0x5616a8;
        }
    }
  lab_0x5616a8:
    if (v158 != 0) {
        // 0x5618d0
        if (*(char *)(v2 + 73) != v159) {
            goto lab_0x5616b0;
        } else {
            goto lab_0x5618e0;
        }
    } else {
        goto lab_0x5616b0;
    }
  lab_0x5616b0:
    // 0x5616b0
    if (*(char *)(v2 + 72) == v159) {
        goto lab_0x5618e0;
    } else {
        int64_t result3 = function_524600((int64_t *)function_5245c0(v33), &v1); // 0x5616c8
        if ((char)result3 == 0) {
            // 0x561e70
            return result3;
        }
        // 0x5616d9
        v31 = a5;
        v35 = 0x1000000 * (int32_t)result3 >> 24;
        v47 = *v107;
        v40 = v157;
        v42 = 0;
        v28 = v4;
        v45 = 0;
        goto lab_0x5616e8_2;
    }
  lab_0x5618e0:
    // 0x5618e0
    v131 = a5;
    v132 = v155;
    v133 = v158;
    v134 = v157;
    v135 = 0;
    v136 = v4;
    v137 = 0;
    int64_t v139; // 0x5615d0
    int64_t v138; // 0x5615d0
    while (true) {
      lab_0x5618f0:
        // 0x5618f0
        v138 = v137;
        v118 = v136;
        v139 = v135;
        v108 = v134;
        char v140 = v133;
        int64_t v141 = v132;
        v126 = v131;
        char v142; // 0x5615d0
        if (v140 == 0) {
            // 0x5618f0
            v142 = v108;
        } else {
            char v143 = v108;
            v142 = v143;
            if (*(char *)(v2 + 73) == v143) {
                // break -> 0x5616e8
                break;
            }
        }
        // 0x5618fd
        v114 = v142;
        v31 = v126;
        v35 = 0;
        v47 = v140;
        v40 = v108;
        v42 = v139;
        v28 = v118;
        v45 = v138;
        if (*(char *)(v2 + 72) == v114) {
            goto lab_0x5616e8_2;
        }
        // 0x561906
        if (*(char *)(v2 + 114) == v114) {
            int32_t v144 = v118; // 0x561bc4
            unsigned char v145 = (char)v139 ^ 1 | (char)(v144 == 10); // 0x561bcb
            int64_t v146 = v141 & -256 | (int64_t)v145; // 0x561bcb
            v112 = v146;
            if (v145 == 0) {
                goto lab_0x561918;
            } else {
                // 0x561bd4
                v115 = 1;
                v116 = 8;
                v117 = 0;
                if (v3 != 0 && v144 != 8) {
                    // 0x561d60
                    v115 = v146 & 0xffffffff;
                    v116 = v118;
                    v117 = v138 + 1 & 0xffffffff;
                }
                goto lab_0x561947;
            }
        } else {
            // 0x56190f
            v31 = v126;
            v35 = 0;
            v47 = v140;
            v40 = v108;
            v42 = v139;
            v28 = v118;
            v45 = v138;
            v112 = v141;
            if ((char)v139 == 0) {
                goto lab_0x5616e8_2;
            }
            goto lab_0x561918;
        }
    }
    int32_t v160 = v118; // 0x5616e8
    v24 = (int64_t)&g97;
    v12 = v126;
    v23 = v33;
    v17 = 0;
    v15 = v37;
    v21 = v160 == 16 ? 22 : v160;
    v10 = v108;
    v6 = v139;
    v7 = v118;
    v8 = v138;
    goto lab_0x561e40;
  lab_0x561e40:
    // 0x561e40
    function_259ce(&v24, 32);
    v32 = v12;
    v34 = v23;
    v36 = v17;
    v38 = v15;
    v39 = v21;
    v41 = v10;
    v43 = v6;
    v44 = v7;
    v46 = v8;
    goto lab_0x56171f;
  lab_0x561a50:
    // 0x561a50
    if ((char)v16 != 0) {
        // 0x561e70
        return result9;
    }
    char * v199 = (char *)(v2 + 32); // 0x561a77
    unsigned char v212 = *v199; // 0x561a77
    int64_t v175 = v13; // 0x561a7d
    int64_t v165 = 0; // 0x561a7d
    int64_t v170 = v11; // 0x561a7d
    int64_t v164 = 0; // 0x561a7d
    int64_t v162 = v9; // 0x561a7d
    int64_t v173 = 0; // 0x561a7d
    int64_t v185; // 0x5615d0
    int64_t v183; // 0x5615d0
    int64_t v186; // 0x5615d0
    int64_t v182; // 0x5615d0
    int64_t v184; // 0x5615d0
    if (v212 == 0) {
        goto lab_0x561a88;
    } else {
        int64_t v213 = v212; // 0x561a77
        v175 = v13;
        v165 = v213;
        v170 = v11;
        v164 = 0;
        v162 = v9;
        v173 = 0;
        v184 = v13;
        v182 = v213;
        v185 = 0;
        v183 = v9;
        v186 = 0;
        if (*(char *)(v2 + 73) == (char)v11) {
            goto lab_0x561b60;
        } else {
            goto lab_0x561a88;
        }
    }
  lab_0x56171f:
    // 0x56171f
    v82 = 0x100000000 * v44 >> 32;
    v83 = v38 == 0 ? 0x7fffffffffffffff : -0x8000000000000000;
    v84 = v83 / v82;
    v13 = v32;
    v22 = v34;
    v16 = v36;
    v14 = v38;
    n = v39;
    v20 = v82;
    v19 = v83;
    v18 = v84;
    result9 = v84;
    v11 = v41;
    v5 = v43;
    v9 = v46;
    if (*(char *)(v2 + 136) != 0) {
        goto lab_0x561a50;
    } else {
        int64_t result4 = v36 % 256; // 0x561769
        if ((char)v36 != 0) {
            // 0x561e70
            return result4;
        }
        int64_t v103 = 0x100000000000000 * (int64_t)v39 + 0x3000000000000000 >> 56;
        v95 = v32;
        v96 = v41;
        v97 = result4;
        v98 = v46;
        v99 = 0;
        while (true) {
          lab_0x561788:
            // 0x561788
            v79 = v99;
            v76 = v98;
            v74 = v97;
            int64_t v100 = v96;
            v93 = v95;
            int64_t v101 = 0x100000000000000 * v100 >> 56; // 0x56178e
            char v102 = v100;
            if (v39 < 11) {
                // 0x561797
                v70 = v36;
                v71 = v38;
                v72 = v101;
                v73 = v43;
                v75 = v74;
                v77 = v76;
                if (v100 < v103 != v102 > 47) {
                    // break -> 0x561c30
                    break;
                }
                // 0x5617aa
                v67 = v101 + 0xffffffd0;
                goto lab_0x5617ad;
            } else {
                if (v102 < 58) {
                    // 0x5617aa
                    v67 = v101 + 0xffffffd0;
                    goto lab_0x5617ad;
                } else {
                    if (v102 < 103) {
                        // 0x561d70
                        v67 = v101 + 0xffffffa9;
                        goto lab_0x5617ad;
                    } else {
                        // 0x561c18
                        v70 = v36;
                        v71 = v38;
                        v72 = v101;
                        v73 = v43;
                        v75 = v74;
                        v77 = v76;
                        if (v102 >= 71) {
                            // break -> 0x561c30
                            break;
                        }
                        int64_t v104 = v101 + 0xffffffc9; // 0x561c20
                        int64_t v105 = v104 & 0xffffffff; // 0x561c20
                        v69 = v105;
                        v70 = v36;
                        v71 = v38;
                        v72 = v105;
                        v73 = v43;
                        v75 = v74;
                        v77 = v76;
                        if ((int32_t)v104 == -1) {
                            // break -> 0x561c30
                            break;
                        }
                        goto lab_0x5617b6;
                    }
                }
            }
        }
        goto lab_0x561c30_2;
    }
  lab_0x561a88:;
    int64_t v161 = v162;
    int64_t v163 = v164;
    v70 = v16;
    v71 = v14;
    v72 = v165;
    v73 = v5;
    v75 = v163;
    v77 = v161;
    int64_t v166; // 0x5615d0
    int64_t v167; // 0x5615d0
    int64_t v168; // 0x5615d0
    int64_t v169; // 0x5615d0
    if (*(char *)(v2 + 72) == (char)v170) {
        goto lab_0x561c30_2;
    } else {
        int64_t str = v2 + 114; // 0x561a5b
        int64_t * found_byte_pos = memchr((int64_t *)str, 0x1000000 * (int32_t)v170 >> 24, n); // 0x561aa1
        int64_t v171 = (int64_t)found_byte_pos; // 0x561aa1
        v70 = v16;
        v71 = v14;
        v72 = v171;
        v73 = v5;
        v75 = v163;
        v77 = v161;
        if (found_byte_pos == NULL) {
            goto lab_0x561c30_2;
        } else {
            int64_t v172 = v173;
            int64_t v174 = v175;
            v169 = v174;
            v166 = 1;
            v167 = v161;
            v168 = v172;
            if (v172 <= 0x100000000000000 * v18 >> 56) {
                int64_t v176 = v171 - str; // 0x561aaf
                int32_t v177 = v176; // 0x561ab5
                int32_t v178 = v177 - 15; // 0x561ab5
                uint64_t v179 = v172 * v20; // 0x561ac6
                int64_t v180 = 0x100000000 * v176;
                int64_t v181 = (v178 < 0 == (14 - v177 & v177) < 0 == (v178 != 0) ? v180 - 0x600000000 : v180) >> 32; // 0x561ad1
                v169 = v174;
                v166 = v163 & 0xffffffff | (int64_t)(v19 - v181 < v179);
                v167 = v161 + 1 & 0xffffffff;
                v168 = v181 + v179;
            }
            goto lab_0x561ae6;
        }
    }
  lab_0x561c30_2:
    // 0x561c30
    v49 = v70;
    v51 = v71;
    v52 = v72;
    v53 = 0;
    v54 = v24;
    v56 = v73;
    v58 = v75;
    v60 = v77;
    v61 = v70;
    v62 = v71;
    v63 = 0;
    v64 = v73;
    v65 = v75;
    v66 = v77;
    if (g96 == 0) {
        goto lab_0x561853;
    } else {
        goto lab_0x561c45;
    }
  lab_0x561b60:
    // 0x561b60
    result2 = v182;
    if ((int32_t)v183 == 0) {
        // 0x561e70
        return result2;
    }
    // 0x561b69
    function_451f2(&v24, 0x100000000000000 * v183 >> 56);
    v169 = v184;
    v166 = v185;
    v167 = 0;
    v168 = v186;
    goto lab_0x561ae6;
  lab_0x561853:;
    int64_t v201 = v53; // 0x561856
    int64_t v203 = v54; // 0x561856
    int32_t v207 = v49; // 0x561856
    char v209 = v51; // 0x561856
    int64_t result5 = v52; // 0x561856
    int64_t v202 = v53; // 0x561856
    int64_t v204 = v54; // 0x561856
    int64_t v208 = v58; // 0x561856
    if ((char)v56 == 1 || (int32_t)v60 != 0) {
        goto lab_0x561c94;
    } else {
        goto lab_0x561866;
    }
  lab_0x561c45:
    // 0x561c45
    function_451f2(&v24, 0x100000000000000 * v66 >> 56);
    int64_t v211 = *(int64_t *)(v2 + 16); // 0x561c61
    int64_t result8 = function_569070(v211, *(int64_t *)(v2 + 24), &v24); // 0x561c69
    if ((char)result8 == 0) {
        // 0x561e70
        return result8;
    }
    // 0x561c76
    v207 = v61;
    v209 = v62;
    result5 = result8;
    v202 = v63;
    v204 = v24;
    v208 = v65;
    if ((int32_t)v66 != 0) {
        goto lab_0x561c94;
    } else {
        // 0x561c83
        v201 = v63;
        v203 = v24;
        v207 = v61;
        v209 = v62;
        result5 = result8;
        v202 = v63;
        v204 = v24;
        v208 = v65;
        if ((char)v64 != 1 == g96 == 0) {
            goto lab_0x561866;
        } else {
            goto lab_0x561c94;
        }
    }
  lab_0x561ae6:;
    int64_t v187 = v168;
    int64_t v188 = v167;
    int64_t v189 = v166;
    if (result7 != 0) {
        int64_t * v190 = (int64_t *)(result7 + 16); // 0x561af0
        uint64_t v191 = *v190; // 0x561af0
        if (v191 < *(int64_t *)(result7 + 24)) {
            // 0x561afe
            *v190 = v191 + 1;
        }
    }
    int64_t v192 = function_5246d0(v22); // 0x561b12
    result2 = v192;
    if (v1 == 0) {
        // 0x561e70
        return result2;
    }
    int64_t v193 = v169; // 0x561b32
    if ((int32_t)v169 == -1) {
        uint64_t v194 = *(int64_t *)(v1 + 16); // 0x561da0
        result2 = v194;
        if (v194 >= *(int64_t *)(v1 + 24)) {
            // 0x561e70
            return result2;
        }
        // 0x561dae
        v193 = (int64_t)*(char *)v194;
    }
    // 0x561b38
    v48 = v16;
    v50 = v14;
    v55 = v5;
    v57 = v189;
    v59 = v188;
    if ((int32_t)v192 != -1) {
        goto lab_0x56183b_2;
    } else {
        int64_t v195 = v193;
        int64_t v196 = function_5246d0(v22); // 0x561b44
        int64_t v197 = v196 & 0xffffffff; // 0x561b49
        unsigned char v198 = *v199; // 0x561b4b
        v175 = v195;
        v165 = 0;
        v170 = v197;
        v164 = v189;
        v162 = v188;
        v173 = v187;
        if (v198 == 0) {
            goto lab_0x561a88;
        } else {
            int64_t v200 = v198; // 0x561b4b
            v175 = v195;
            v165 = v200;
            v170 = v197;
            v164 = v189;
            v162 = v188;
            v173 = v187;
            v184 = v195;
            v182 = v200;
            v185 = v189;
            v183 = v188;
            v186 = v187;
            if (*(char *)(v2 + 73) != (char)v196) {
                goto lab_0x561a88;
            } else {
                goto lab_0x561b60;
            }
        }
    }
  lab_0x561c94:
    // 0x561c94
    v201 = v202;
    v203 = v204;
    int64_t v205; // 0x5615d0
    int64_t v206; // 0x5615d0
    if ((char)v207 != 0) {
        goto lab_0x561866;
    } else {
        // 0x561c9f
        if ((char)v208 == 0) {
            // 0x561e70
            return result5;
        }
        // 0x561ca8
        if (v209 == 0) {
            // 0x561e70
            return result6;
        }
        // 0x561cb8
        *(int64_t *)result6 = -0x8000000000000000;
        *(int32_t *)a7 = 4;
        v205 = v202;
        v206 = v204;
        goto lab_0x56187d;
    }
  lab_0x561866:
    // 0x561866
    *(int64_t *)result6 = 0;
    *(int32_t *)a7 = 4;
    v205 = v201;
    v206 = v203;
    goto lab_0x56187d;
  lab_0x56187d:
    // 0x56187d
    if ((char)v205 != 0) {
        int32_t * v210 = (int32_t *)a7; // 0x561886
        *v210 = *v210 | 2;
    }
    // 0x561889
    if (v206 - 24 != (int64_t)&g96) {
        // 0x561e70
        return result7;
    }
    // 0x5618a2
    __readfsqword(40);
    return result7;
}

// Address range: 0x56dd60 - 0x56e695
// From class:    std::__timepunct_cache<wchar_t>
// Type:          constructor
int64_t function_56dd60(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x56dd68
    int64_t v2 = a2; // bp-16, 0x56dd6d
    if (*v1 == 0) {
        int64_t result = function_4efd30(400); // 0x56e495
        *(int32_t *)(result + 8) = 0;
        *(int64_t *)(result + 16) = 0;
        *(int64_t *)(result + 24) = 0;
        *(int64_t *)(result + 32) = 0;
        *(int64_t *)(result + 40) = 0;
        *(int64_t *)(result + 48) = 0;
        *(int64_t *)(result + 56) = 0;
        *(int64_t *)result = (int64_t)&g16;
        *(int64_t *)(result + 64) = 0;
        *(int64_t *)(result + 72) = 0;
        *(int64_t *)(result + 80) = 0;
        *(int64_t *)(result + 88) = 0;
        *(int64_t *)(result + 96) = 0;
        *(int64_t *)(result + 104) = 0;
        *(int64_t *)(result + 112) = 0;
        *(int64_t *)(result + 120) = 0;
        *(int64_t *)(result + 128) = 0;
        *(int64_t *)(result + 136) = 0;
        *(int64_t *)(result + 144) = 0;
        *(int64_t *)(result + 152) = 0;
        *(int64_t *)(result + 160) = 0;
        *(int64_t *)(result + 168) = 0;
        *(int64_t *)(result + 176) = 0;
        *(int64_t *)(result + 184) = 0;
        *(int64_t *)(result + 192) = 0;
        *(int64_t *)(result + 200) = 0;
        *(int64_t *)(result + 208) = 0;
        *(int64_t *)(result + 216) = 0;
        *(int64_t *)(result + 224) = 0;
        *(int64_t *)(result + 232) = 0;
        *(int64_t *)(result + 240) = 0;
        *(int64_t *)(result + 248) = 0;
        *(int64_t *)(result + 256) = 0;
        *(int64_t *)(result + 264) = 0;
        *(int64_t *)(result + 272) = 0;
        *(int64_t *)(result + 280) = 0;
        *(int64_t *)(result + 288) = 0;
        *(int64_t *)(result + 296) = 0;
        *(int64_t *)(result + 304) = 0;
        *(int64_t *)(result + 312) = 0;
        *(int64_t *)(result + 320) = 0;
        *(int64_t *)(result + 328) = 0;
        *(int64_t *)(result + 336) = 0;
        *(int64_t *)(result + 344) = 0;
        *(int64_t *)(result + 352) = 0;
        *(int64_t *)(result + 360) = 0;
        *(int64_t *)(result + 368) = 0;
        *(int64_t *)(result + 376) = 0;
        *(int64_t *)(result + 384) = 0;
        *(char *)(result + 392) = 0;
        *v1 = result;
        return result;
    }
    if (a2 == 0) {
        // 0x56e238
        *(int64_t *)(a1 + 24) = function_565f30();
        int64_t result2 = *v1; // 0x56e241
        *(int64_t *)(result2 + 64) = (int64_t)L"AM";
        *(int64_t *)(result2 + 16) = (int64_t)L"%m/%d/%y";
        *(int64_t *)(result2 + 24) = (int64_t)L"%m/%d/%y";
        *(int64_t *)(result2 + 72) = (int64_t)L"PM";
        *(int64_t *)(result2 + 32) = (int64_t)L"%H:%M:%S";
        *(int64_t *)(result2 + 40) = (int64_t)L"%H:%M:%S";
        *(int64_t *)(result2 + 88) = (int64_t)L"Sunday";
        *(int64_t *)(result2 + 48) = (int64_t)&g8;
        *(int64_t *)(result2 + 56) = (int64_t)&g8;
        *(int64_t *)(result2 + 96) = (int64_t)L"Monday";
        *(int64_t *)(result2 + 80) = (int64_t)&g8;
        *(int64_t *)(result2 + 104) = (int64_t)L"Tuesday";
        *(int64_t *)(result2 + 232) = (int64_t)L"May";
        *(int64_t *)(result2 + 112) = (int64_t)L"Wednesday";
        *(int64_t *)(result2 + 120) = (int64_t)L"Thursday";
        *(int64_t *)(result2 + 128) = (int64_t)L"Friday";
        *(int64_t *)(result2 + 136) = (int64_t)L"Saturday";
        *(int64_t *)(result2 + 144) = (int64_t)L"Sun";
        *(int64_t *)(result2 + 152) = (int64_t)L"Mon";
        *(int64_t *)(result2 + 160) = (int64_t)L"Tue";
        *(int64_t *)(result2 + 168) = (int64_t)L"Wed";
        *(int64_t *)(result2 + 176) = (int64_t)L"Thu";
        *(int64_t *)(result2 + 184) = (int64_t)L"Fri";
        *(int64_t *)(result2 + 192) = (int64_t)L"Sat";
        *(int64_t *)(result2 + 200) = (int64_t)L"January";
        *(int64_t *)(result2 + 208) = (int64_t)L"February";
        *(int64_t *)(result2 + 216) = (int64_t)L"March";
        *(int64_t *)(result2 + 224) = (int64_t)L"April";
        *(int64_t *)(result2 + 240) = (int64_t)L"June";
        *(int64_t *)(result2 + 248) = (int64_t)L"July";
        *(int64_t *)(result2 + 256) = (int64_t)L"August";
        *(int64_t *)(result2 + 328) = (int64_t)L"May";
        *(int64_t *)(result2 + 264) = (int64_t)L"September";
        *(int64_t *)(result2 + 272) = (int64_t)L"October";
        *(int64_t *)(result2 + 280) = (int64_t)L"November";
        *(int64_t *)(result2 + 288) = (int64_t)L"December";
        *(int64_t *)(result2 + 296) = (int64_t)L"Jan";
        *(int64_t *)(result2 + 304) = (int64_t)L"Feb";
        *(int64_t *)(result2 + 312) = (int64_t)L"Mar";
        *(int64_t *)(result2 + 320) = (int64_t)L"Apr";
        *(int64_t *)(result2 + 336) = (int64_t)L"Jun";
        *(int64_t *)(result2 + 344) = (int64_t)L"Jul";
        *(int64_t *)(result2 + 352) = (int64_t)L"Aug";
        *(int64_t *)(result2 + 360) = (int64_t)L"Sep";
        *(int64_t *)(result2 + 368) = (int64_t)L"Oct";
        *(int64_t *)(result2 + 376) = (int64_t)L"Nov";
        *(int64_t *)(result2 + 384) = (int64_t)L"Dec";
        return result2;
    }
    // 0x56dd84
    *(int64_t *)(a1 + 24) = function_567a10(&v2);
    char * v3 = __nl_langinfo_l(0x2005d, (struct __locale_struct *)v2); // 0x56dd9c
    *(int64_t *)(*v1 + 16) = (int64_t)v3;
    char * v4 = __nl_langinfo_l(0x20061, (struct __locale_struct *)v2); // 0x56ddb3
    *(int64_t *)(*v1 + 24) = (int64_t)v4;
    char * v5 = __nl_langinfo_l(0x2005e, (struct __locale_struct *)v2); // 0x56ddca
    *(int64_t *)(*v1 + 32) = (int64_t)v5;
    char * v6 = __nl_langinfo_l(0x20064, (struct __locale_struct *)v2); // 0x56dde1
    *(int64_t *)(*v1 + 40) = (int64_t)v6;
    char * v7 = __nl_langinfo_l(0x2005c, (struct __locale_struct *)v2); // 0x56ddf8
    *(int64_t *)(*v1 + 48) = (int64_t)v7;
    char * v8 = __nl_langinfo_l(0x20063, (struct __locale_struct *)v2); // 0x56de0f
    *(int64_t *)(*v1 + 56) = (int64_t)v8;
    char * v9 = __nl_langinfo_l(0x2005a, (struct __locale_struct *)v2); // 0x56de26
    *(int64_t *)(*v1 + 64) = (int64_t)v9;
    char * v10 = __nl_langinfo_l(0x2005b, (struct __locale_struct *)v2); // 0x56de3d
    *(int64_t *)(*v1 + 72) = (int64_t)v10;
    char * v11 = __nl_langinfo_l(0x2005f, (struct __locale_struct *)v2); // 0x56de54
    *(int64_t *)(*v1 + 80) = (int64_t)v11;
    char * v12 = __nl_langinfo_l(0x2003b, (struct __locale_struct *)v2); // 0x56de6b
    *(int64_t *)(*v1 + 88) = (int64_t)v12;
    char * v13 = __nl_langinfo_l(0x2003c, (struct __locale_struct *)v2); // 0x56de82
    *(int64_t *)(*v1 + 96) = (int64_t)v13;
    char * v14 = __nl_langinfo_l(0x2003d, (struct __locale_struct *)v2); // 0x56de99
    *(int64_t *)(*v1 + 104) = (int64_t)v14;
    char * v15 = __nl_langinfo_l(0x2003e, (struct __locale_struct *)v2); // 0x56deb0
    *(int64_t *)(*v1 + 112) = (int64_t)v15;
    char * v16 = __nl_langinfo_l(0x2003f, (struct __locale_struct *)v2); // 0x56dec7
    *(int64_t *)(*v1 + 120) = (int64_t)v16;
    char * v17 = __nl_langinfo_l(0x20040, (struct __locale_struct *)v2); // 0x56dede
    *(int64_t *)(*v1 + 128) = (int64_t)v17;
    char * v18 = __nl_langinfo_l(0x20041, (struct __locale_struct *)v2); // 0x56def8
    *(int64_t *)(*v1 + 136) = (int64_t)v18;
    char * v19 = __nl_langinfo_l(0x20034, (struct __locale_struct *)v2); // 0x56df12
    *(int64_t *)(*v1 + 144) = (int64_t)v19;
    char * v20 = __nl_langinfo_l(0x20035, (struct __locale_struct *)v2); // 0x56df2c
    *(int64_t *)(*v1 + 152) = (int64_t)v20;
    char * v21 = __nl_langinfo_l((int32_t)&g1, (struct __locale_struct *)v2); // 0x56df46
    *(int64_t *)(*v1 + 160) = (int64_t)v21;
    char * v22 = __nl_langinfo_l((int32_t)&g2, (struct __locale_struct *)v2); // 0x56df60
    *(int64_t *)(*v1 + 168) = (int64_t)v22;
    char * v23 = __nl_langinfo_l(0x20038, (struct __locale_struct *)v2); // 0x56df7a
    *(int64_t *)(*v1 + 176) = (int64_t)v23;
    char * v24 = __nl_langinfo_l(0x20039, (struct __locale_struct *)v2); // 0x56df94
    *(int64_t *)(*v1 + 184) = (int64_t)v24;
    char * v25 = __nl_langinfo_l(0x2003a, (struct __locale_struct *)v2); // 0x56dfae
    *(int64_t *)(*v1 + 192) = (int64_t)v25;
    char * v26 = __nl_langinfo_l(0x2004e, (struct __locale_struct *)v2); // 0x56dfc8
    *(int64_t *)(*v1 + 200) = (int64_t)v26;
    char * v27 = __nl_langinfo_l(0x2004f, (struct __locale_struct *)v2); // 0x56dfe2
    *(int64_t *)(*v1 + 208) = (int64_t)v27;
    char * v28 = __nl_langinfo_l(0x20050, (struct __locale_struct *)v2); // 0x56dffc
    *(int64_t *)(*v1 + 216) = (int64_t)v28;
    char * v29 = __nl_langinfo_l(0x20051, (struct __locale_struct *)v2); // 0x56e016
    *(int64_t *)(*v1 + 224) = (int64_t)v29;
    char * v30 = __nl_langinfo_l(0x20052, (struct __locale_struct *)v2); // 0x56e030
    *(int64_t *)(*v1 + 232) = (int64_t)v30;
    char * v31 = __nl_langinfo_l(0x20053, (struct __locale_struct *)v2); // 0x56e04a
    *(int64_t *)(*v1 + 240) = (int64_t)v31;
    char * v32 = __nl_langinfo_l(0x20054, (struct __locale_struct *)v2); // 0x56e064
    *(int64_t *)(*v1 + 248) = (int64_t)v32;
    char * v33 = __nl_langinfo_l(0x20055, (struct __locale_struct *)v2); // 0x56e07e
    *(int64_t *)(*v1 + 256) = (int64_t)v33;
    char * v34 = __nl_langinfo_l((int32_t)&g5, (struct __locale_struct *)v2); // 0x56e098
    *(int64_t *)(*v1 + 264) = (int64_t)v34;
    char * v35 = __nl_langinfo_l((int32_t)&g6, (struct __locale_struct *)v2); // 0x56e0b2
    *(int64_t *)(*v1 + 272) = (int64_t)v35;
    char * v36 = __nl_langinfo_l(0x20058, (struct __locale_struct *)v2); // 0x56e0cc
    *(int64_t *)(*v1 + 280) = (int64_t)v36;
    char * v37 = __nl_langinfo_l(0x20059, (struct __locale_struct *)v2); // 0x56e0e6
    *(int64_t *)(*v1 + 288) = (int64_t)v37;
    char * v38 = __nl_langinfo_l(0x20042, (struct __locale_struct *)v2); // 0x56e100
    *(int64_t *)(*v1 + 296) = (int64_t)v38;
    char * v39 = __nl_langinfo_l(0x20043, (struct __locale_struct *)v2); // 0x56e11a
    *(int64_t *)(*v1 + 304) = (int64_t)v39;
    char * v40 = __nl_langinfo_l(0x20044, (struct __locale_struct *)v2); // 0x56e134
    *(int64_t *)(*v1 + 312) = (int64_t)v40;
    char * v41 = __nl_langinfo_l(0x20045, (struct __locale_struct *)v2); // 0x56e14e
    *(int64_t *)(*v1 + 320) = (int64_t)v41;
    char * v42 = __nl_langinfo_l((int32_t)&g3, (struct __locale_struct *)v2); // 0x56e168
    *(int64_t *)(*v1 + 328) = (int64_t)v42;
    char * v43 = __nl_langinfo_l((int32_t)&g4, (struct __locale_struct *)v2); // 0x56e182
    *(int64_t *)(*v1 + 336) = (int64_t)v43;
    char * v44 = __nl_langinfo_l(0x20048, (struct __locale_struct *)v2); // 0x56e19c
    *(int64_t *)(*v1 + 344) = (int64_t)v44;
    char * v45 = __nl_langinfo_l(0x20049, (struct __locale_struct *)v2); // 0x56e1b6
    *(int64_t *)(*v1 + 352) = (int64_t)v45;
    char * v46 = __nl_langinfo_l(0x2004a, (struct __locale_struct *)v2); // 0x56e1d0
    *(int64_t *)(*v1 + 360) = (int64_t)v46;
    char * v47 = __nl_langinfo_l(0x2004b, (struct __locale_struct *)v2); // 0x56e1ea
    *(int64_t *)(*v1 + 368) = (int64_t)v47;
    char * v48 = __nl_langinfo_l(0x2004c, (struct __locale_struct *)v2); // 0x56e204
    *(int64_t *)(*v1 + 376) = (int64_t)v48;
    int64_t result3 = (int64_t)__nl_langinfo_l(0x2004d, (struct __locale_struct *)v2); // 0x56e21e
    *(int64_t *)(*v1 + 384) = result3;
    return result3;
}
