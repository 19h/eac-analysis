/*
 * Targeted RetDec C for native executable gap queue batch 180.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x50ee90-0x50f0c6 rank=95 name=method.std::num_put_wchar_t__std::ostreambuf_iterator_wchar_t__std::char_traits_wchar_t_____.virtual_48 kind=native_discovered bytes=566 uncovered=566
 *   0x50e6b0-0x50e8e1 rank=96 name=fcn.0050e6b0 kind=r2_discovered bytes=561 uncovered=561
 *   0x566890-0x566ac1 rank=97 name=fcn.00566890 kind=r2_discovered bytes=561 uncovered=561
 *   0x4fddc0-0x4fdfee rank=98 name=method.std::basic_filebuf_char__std::char_traits_char___.virtual_64 kind=native_discovered bytes=558 uncovered=558
 *   0x508660-0x50888e rank=99 name=method.std::collate_wchar_t_.virtual_24 kind=native_discovered bytes=558 uncovered=558
 *   0x4ff6a0-0x4ff8cd rank=100 name=method.std::basic_filebuf_char__std::char_traits_char___.virtual_104 kind=native_discovered bytes=557 uncovered=557
 *   0x4daf6-0x4dd21 rank=101 name=fcn.0004daf6 kind=r2_discovered bytes=555 uncovered=555
 *   0x49d8b0-0x49dadb rank=102 name=fcn.0049d8b0 kind=r2_discovered bytes=555 uncovered=555
 *   0x5590a0-0x5592cb rank=103 name=method.std::num_put_char__std::ostreambuf_iterator_char__std::char_traits_char_____.virtual_48 kind=native_discovered bytes=555 uncovered=555
 *   0x5762d0-0x5764fa rank=104 name=fcn.005762d0 kind=r2_discovered bytes=554 uncovered=554
 *   0x52ea70-0x52ec97 rank=105 name=method.std::__cxx11::collate_wchar_t_.virtual_24 kind=native_discovered bytes=551 uncovered=551
 *   0x5681f0-0x568416 rank=106 name=fcn.005681f0 kind=r2_discovered bytes=550 uncovered=550
 *   0x56afb0-0x56b1d6 rank=107 name=fcn.0056afb0 kind=r2_discovered bytes=550 uncovered=550
 *   0x49e960-0x49eb85 rank=108 name=fcn.0049e960 kind=r2_discovered bytes=549 uncovered=549
 *   0x4c0600-0x4c0825 rank=109 name=fcn.004c0600 kind=r2_discovered bytes=549 uncovered=549
 *   0x4b42a0-0x4b44c3 rank=110 name=fcn.004b42a0 kind=r2_discovered bytes=547 uncovered=547
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
int128_t __asm_andpd(int128_t left, int128_t right);
int128_t __asm_andnpd(int128_t left, int128_t right);
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
int128_t __asm_cmpnlesd(int128_t left, int128_t right);
int128_t __asm_cvtsi2sd(int64_t value);
int128_t __asm_cvtss2sd(int32_t value);
int128_t __asm_subsd(int128_t left, int128_t right);
int64_t __asm_cvttsd2si(int128_t value);
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

int64_t function_1fd40();
int64_t function_1ff50();
int64_t function_20210();
int64_t function_203b0();
int64_t function_20540();
int64_t function_20550();
int64_t function_208a0();
int64_t function_20a50();
int64_t function_221a8();
int64_t function_35fcc();
int64_t function_48d50f();
int64_t function_496760();
int64_t function_49d220();
int64_t function_49d8b0(int64_t result3);
int64_t function_49e770();
int64_t function_49e8b0();
int64_t function_49e960(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7);
int64_t function_4b0870();
int64_t function_4b0890();
int64_t function_4b0ac0();
int64_t function_4b0e20();
int64_t function_4b0f10();
int64_t function_4b1220();
int64_t function_4b1a40();
int64_t function_4b2760();
int64_t function_4b2830();
int64_t function_4b38b0();
int64_t function_4b3910();
int64_t function_4b4200();
int64_t function_4b42a0(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4b5070();
int64_t function_4c00c0();
int64_t function_4c0600(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, uint64_t a6);
int64_t function_4d9b6();
int64_t function_4da82();
int64_t function_4daba();
int64_t function_4dacc();
int64_t function_4daf6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4eeb40();
int64_t function_4eeb50();
int64_t function_4eec00();
int64_t function_4efd30();
int64_t function_4f1770();
int64_t function_4f1b70();
int64_t function_4fddc0(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4ff270();
int64_t function_4ff3f0();
int64_t function_4ff5b0();
int64_t function_4ff6a0(int64_t a1, int64_t a2);
int64_t function_508450();
int64_t function_508660(int64_t result, int64_t a2, int64_t a3, int64_t a4);
int64_t function_5088b0();
int64_t function_50ab00();
int64_t function_50cd00();
int64_t function_50cf10();
int64_t function_50cf40();
int64_t function_50e0e0();
int64_t function_50e6b0(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_50ec50();
int64_t function_50ee90(void);
int64_t function_50eea0(int64_t a1);
int64_t function_50eec0(int64_t a1, int64_t result6, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_519810();
int64_t function_527a4();
int64_t function_5289c();
int64_t function_52ea70(int64_t result, int64_t a2, int64_t a3, int64_t a4);
int64_t function_53fce0();
int64_t function_542590();
int64_t function_547670();
int64_t function_547e30();
int64_t function_549e80();
int64_t function_54b560();
int64_t function_54c860();
int64_t function_551750();
int64_t function_554b00();
int64_t function_558300();
int64_t function_558e70();
int64_t function_5590a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5590b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_5590e0(int64_t a1, int64_t result6, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_565f30();
int64_t function_566390();
int64_t function_566890(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5681f0(int64_t a1, int64_t a2);
int64_t function_568f00();
int64_t function_569120();
int64_t function_56afb0(int64_t a1, int64_t a2);
int64_t function_56ba20();
int64_t function_5762d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_7214c();

// Address range: 0x4daf6 - 0x4dd21
int64_t function_4daf6(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = __readfsqword(40); // 0x4db01
    int64_t v2; // 0x4daf6
    if (a2 == 0 || a3 == 0) {
        goto lab_0x4dcfd;
    } else {
        int64_t v3 = *(int64_t *)(a1 + 24); // 0x4db29
        if (v3 == *(int64_t *)(a1 + 32)) {
            goto lab_0x4dcfd;
        } else {
            int64_t * v4 = (int64_t *)(a1 + 64); // 0x4db3a
            if (*v4 == 0) {
                goto lab_0x4dcfd;
            } else {
                int64_t v5 = 0; // 0x4daf6
                int64_t v6 = v5 + 1; // 0x4db50
                int64_t v7 = *(int64_t *)(a3 + 8 + 16 * v5); // 0x4db57
                int64_t v8 = v7; // 0x4db62
                v5 = v6;
                while (v6 != a2) {
                    // 0x4db4d
                    v6 = v5 + 1;
                    v7 = *(int64_t *)(a3 + 8 + 16 * v5) + v8;
                    v8 = v7;
                    v5 = v6;
                }
                if (v7 == 0) {
                    goto lab_0x4dcfd;
                } else {
                    uint64_t v9 = (v7 + 79 & -8) + (v7 + 6 & -8); // 0x4db7d
                    v2 = (int64_t)"Input buffer too large for the memory pool! Size requested: %Xh.";
                    if (v9 < 0x10000 || v9 == (int64_t)&g2) {
                        int64_t * v10 = (int64_t *)(a1 + 56); // 0x4db9e
                        int64_t v11 = *v10; // 0x4db9e
                        v2 = (int64_t)"Memory pool temporarily exhausted! Size requested: %Xh.";
                        if ((char)function_4daba(a1, v11, v11) == 0) {
                            goto lab_0x4dce3;
                        } else {
                            uint64_t v12 = v11 + 1; // 0x4dbb8
                            int64_t v13 = 0x10000 * v11 + v3; // 0x4dbbf
                            int64_t v14 = v13 + 64; // 0x4dbcd
                            *v10 = v12 < 256 ? v12 : 0;
                            function_4dacc(v6, a3, v14);
                            *(int64_t *)(v13 + 16) = v14;
                            *(int64_t *)(v13 + 24) = v7;
                            *(int64_t *)(v13 + 56) = a4;
                            int64_t v15 = v7 + 71 + v13 & -8; // 0x4dbfd
                            *(int64_t *)(v13 + 40) = v7 - 1;
                            *(int64_t *)(v13 + 48) = 0;
                            *(int64_t *)(v13 + 32) = v15;
                            *(int32_t *)v15 = (int32_t)v7;
                            *(int64_t *)(v13 + 8) = 1;
                            int64_t v16 = *v4; // 0x4dc3d
                            int64_t v17; // bp-264, 0x4daf6
                            int64_t v18; // bp-296, 0x4daf6
                            function_4d9b6(&v17, &v18, 2, v16);
                            int64_t v19 = 0; // bp-224, 0x4dc68
                            function_7214c(v16, &v17);
                            function_35fcc(&v19);
                            function_221a8(&v17);
                            function_221a8(&v18);
                            goto lab_0x4dcfd;
                        }
                    } else {
                        goto lab_0x4dce3;
                    }
                }
            }
        }
    }
  lab_0x4dcfd:;
    int64_t result = 0; // 0x4dd0e
    if (v1 != __readfsqword(40)) {
        // 0x4dd10
        __stack_chk_fail();
        result = (int64_t)&g31;
    }
    // 0x4dd15
    return result;
  lab_0x4dce3:;
    // 0x4dce3
    int64_t v20; // bp-160, 0x4daf6
    function_48d50f(&v20, 128, (char *)v2);
    function_4da82(a1, &v20);
    goto lab_0x4dcfd;
}

// Address range: 0x49d8b0 - 0x49dad7
int64_t function_49d8b0(int64_t result3) {
    // 0x49d8b0
    function_49e770(result3, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", &g6, "=> parse finished");
    char * v1 = (char *)(result3 + 372); // 0x49d8e5
    int64_t v2; // bp-40, 0x49d8b0
    int64_t v3 = function_49d220(result3, &v2, (int32_t)(*v1 % 2 ^ 1)); // 0x49d8fa
    int64_t result = v3 & 0xffffffff; // 0x49d901
    if ((int32_t)v3 != 0) {
        // 0x49d9f8
        function_49e8b0(result3, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g7, "mbedtls_ssl_read_record", result);
        return result;
    }
    // 0x49d909
    if (*(int32_t *)(result3 + 216) != 22) {
        int64_t result2 = function_49e770(result3, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g8, "bad finished message"); // 0x49dacd
        return result2;
    }
    int64_t v4 = *(int64_t *)(result3 + 200); // 0x49d916
    if (*(char *)v4 != 20) {
        // 0x49da24
        function_49e770(result3, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g9, "bad finished message");
        return 0xffff8180;
    }
    int64_t v5 = *(int64_t *)(result3 + 272); // 0x49d929
    int64_t v6; // 0x49d8b0
    if ((*v1 & 2) != 0) {
        // 0x49da54
        v6 = 12;
        if (v5 != 24) {
            // 0x49da24
            function_49e770(result3, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g9, "bad finished message");
            return 0xffff8180;
        }
    } else {
        // 0x49d93d
        v6 = 4;
        if (v5 != 16) {
            // 0x49da24
            function_49e770(result3, 1, "/home/richard/code/mbedtls/library/ssl_tls.c", &g9, "bad finished message");
            return 0xffff8180;
        }
    }
    int64_t v7 = 0; // 0x49d953
    int64_t v8 = 0;
    char v9 = *(char *)(v8 + (int64_t)&v2); // 0x49d958
    int64_t v10 = v8 + 1; // 0x49d95f
    v7 |= (int64_t)(*(char *)(v6 + v4 + v8) ^ v9);
    while (v10 != 12) {
        // 0x49d958
        v8 = v10;
        v9 = *(char *)(v8 + (int64_t)&v2);
        v10 = v8 + 1;
        v7 |= (int64_t)(*(char *)(v6 + v4 + v8) ^ v9);
    }
    if ((char)v7 != 0) {
        // 0x49dadc
        return result3;
    }
    // 0x49d974
    *(int64_t *)(result3 + 408) = 12;
    *(int64_t *)(result3 + 428) = v2;
    int32_t v11 = *(int32_t *)(*(int64_t *)(result3 + 96) + (int64_t)&g30); // 0x49d998
    if (v11 == 0) {
        int32_t * v12 = (int32_t *)(result3 + 8); // 0x49da68
        *v12 = *v12 + 1;
        char v13 = *v1 & 2;
        if (v13 == 0) {
            // 0x49d9ca
            function_49e770(result3, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)&g10, "<= parse finished");
            return result;
        }
        // 0x49da7c
        function_496760(result3, (int32_t)v7, (int32_t)v13, v11);
        // 0x49d9ca
        function_49e770(result3, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)&g10, "<= parse finished");
        return result;
    }
    int32_t * v14 = (int32_t *)(result3 + 8);
    char v15; // 0x49d8b0
    if (*v1 % 2 == 0) {
        // 0x49da90
        *v14 = 10;
        unsigned char v16 = *v1; // 0x49da97
        v15 = v16;
        if (v16 % 2 == 0) {
            goto lab_0x49d9c1;
        } else {
            goto lab_0x49d9b3;
        }
    } else {
        goto lab_0x49d9b3;
    }
  lab_0x49d9b3:
    // 0x49d9b3
    *v14 = 15;
    v15 = *v1;
    goto lab_0x49d9c1;
  lab_0x49d9c1:;
    char v17 = v15 & 2;
    if (v17 == 0) {
        // 0x49d9ca
        function_49e770(result3, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)&g10, "<= parse finished");
        return result;
    }
    // 0x49da7c
    function_496760(result3, (int32_t)v7, (int32_t)v17, v11);
    // 0x49d9ca
    function_49e770(result3, 2, "/home/richard/code/mbedtls/library/ssl_tls.c", (int64_t *)&g10, "<= parse finished");
    return result;
}

// Address range: 0x49e960 - 0x49eb83
int64_t function_49e960(int64_t result, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int32_t a7) {
    int64_t v1 = a3; // bp-616, 0x49e97b
    if (result == 0) {
        // 0x49e997
        return 0;
    }
    // 0x49e988
    if (*(int64_t *)(result + 32) == 0 || (int64_t)g23 < a2) {
        // 0x49e997
        return result;
    }
    // 0x49e9b0
    int64_t str; // bp-568, 0x49e960
    int64_t result2 = (int64_t)&str; // 0x49e9c2
    snprintf((char *)&str, (int32_t)&g12, "dumping '%s' (%u bytes)\n", (char *)a5, a7);
    int64_t v2 = 0; // bp-600, 0x49ea06
    if (a7 == 0) {
        // 0x49e997
        return result2;
    }
    int64_t v3 = a7;
    int64_t v4 = (int64_t)&v1 + 16;
    int64_t v5 = 0;
    int64_t v6 = 0;
    uint32_t v7 = (int32_t)v6; // 0x49ea9d
    uint32_t v8 = v7 % 16; // 0x49ea9d
    int64_t v9 = v5; // 0x49eaa0
    int64_t v10; // 0x49e960
    int64_t str3; // 0x49e960
    int64_t size2; // 0x49e960
    int64_t size; // 0x49eaaa
    int64_t str2; // 0x49eaad
    if (v8 == 0) {
        // 0x49eaa2
        size = (int64_t)&g12 - v5;
        str2 = v5 + result2;
        size2 = size;
        str3 = str2;
        v10 = v5;
        if (v6 != 0) {
            // 0x49eab9
            snprintf((char *)str2, (int32_t)size, "  %s\n", &v2);
            v2 = 0;
            size2 = (int64_t)&g12;
            str3 = result2;
            v10 = 0;
        }
        // 0x49ea28
        v9 = v10 + (int64_t)snprintf((char *)str3, (int32_t)size2, "%04x: ", v7);
    }
    int64_t v11 = v9;
    char * v12 = (char *)(v6 + a6); // 0x49ea3e
    unsigned char v13 = *v12; // 0x49ea3e
    int32_t chars_printed = snprintf((char *)(v11 + result2), (int32_t)&g12 - (int32_t)v11, " %02x", (int32_t)v13); // 0x49ea5a
    char v14 = *v12; // 0x49ea5f
    int64_t v15 = v11 + (int64_t)chars_printed; // 0x49ea66
    int64_t v16 = v6 + 1; // 0x49ea77
    *(char *)(v4 + (int64_t)v8) = v14 < 127 ? v14 : 46;
    int64_t v17; // 0x49e960
    int64_t str4; // 0x49eb6e
    while (v16 != v3) {
        // 0x49ea8d
        v17 = v15;
        if (v16 == (int64_t)&g1) {
            // 0x49eb53
            str4 = v17 + result2;
            snprintf((char *)str4, (int32_t)&g12 - (int32_t)v17, "  %s\n", &v2);
            return str4;
        }
        v5 = v15;
        v6 = v16;
        v7 = (int32_t)v6;
        v8 = v7 % 16;
        v9 = v5;
        if (v8 == 0) {
            // 0x49eaa2
            size = (int64_t)&g12 - v5;
            str2 = v5 + result2;
            size2 = size;
            str3 = str2;
            v10 = v5;
            if (v6 != 0) {
                // 0x49eab9
                snprintf((char *)str2, (int32_t)size, "  %s\n", &v2);
                v2 = 0;
                size2 = (int64_t)&g12;
                str3 = result2;
                v10 = 0;
            }
            // 0x49ea28
            v9 = v10 + (int64_t)snprintf((char *)str3, (int32_t)size2, "%04x: ", v7);
        }
        // 0x49ea3e
        v11 = v9;
        v12 = (char *)(v6 + a6);
        v13 = *v12;
        chars_printed = snprintf((char *)(v11 + result2), (int32_t)&g12 - (int32_t)v11, " %02x", (int32_t)v13);
        v14 = *v12;
        v15 = v11 + (int64_t)chars_printed;
        v16 = v6 + 1;
        *(char *)(v4 + (int64_t)v8) = v14 < 127 ? v14 : 46;
    }
    int64_t v18 = v3; // 0x49eb1c
    if (v3 % 16 == 0) {
        // 0x49eb53
        str4 = v15 + result2;
        snprintf((char *)str4, (int32_t)&g12 - (int32_t)v15, "  %s\n", &v2);
        return str4;
    }
    int64_t v19 = v15;
    v18++;
    int32_t chars_printed2 = snprintf((char *)(v19 + result2), (int32_t)&g12 - (int32_t)v19, "   "); // 0x49eb43
    int64_t v20 = v19 + (int64_t)chars_printed2; // 0x49eb4a
    v17 = v20;
    while (v18 % 16 != 0) {
        // 0x49eb28
        v19 = v20;
        v18++;
        chars_printed2 = snprintf((char *)(v19 + result2), (int32_t)&g12 - (int32_t)v19, "   ");
        v20 = v19 + (int64_t)chars_printed2;
        v17 = v20;
    }
    // 0x49eb53
    str4 = v17 + result2;
    snprintf((char *)str4, (int32_t)&g12 - (int32_t)v17, "  %s\n", &v2);
    return str4;
}

// Address range: 0x4b42a0 - 0x4b44bc
int64_t function_4b42a0(int64_t a1, uint64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4b42a0
    if (a2 - 3 > (int64_t)&g11) {
        // 0x4b4324
        return 0xfffffffc;
    }
    // 0x4b42d7
    int64_t v1; // bp-88, 0x4b42a0
    function_4b0870(&v1);
    int64_t v2 = function_4b38b0(a1, 8 * (a2 / 64 + (int64_t)(a2 % 64 != 0)), a4, a5); // 0x4b430e
    int64_t v3 = v2 & 0xffffffff; // 0x4b4315
    if ((int32_t)v2 != 0) {
        // 0x4b431a
        function_4b0890(&v1);
        // 0x4b4324
        return v3 & 0xffffffff;
    }
    uint64_t v4 = function_4b0f10(a1); // 0x4b4353
    int64_t v5; // 0x4b42a0
    if (v4 > a2) {
        int64_t v6 = function_4b1220(a1, 1 - a2 + v4); // 0x4b43c2
        v5 = v6;
        if ((int32_t)v6 == 0) {
            goto lab_0x4b435d;
        } else {
            goto lab_0x4b43cb_2;
        }
    } else {
        goto lab_0x4b435d;
    }
  lab_0x4b43cb_2:
    // 0x4b431a
    function_4b0890(&v1);
    // 0x4b4324
    return v5 & 0xffffffff & 0xffffffff;
  lab_0x4b435d:
    // 0x4b435d
    function_4b0e20(a1, a2 - 1, 1);
    int64_t * v7 = (int64_t *)*(int64_t *)(a1 + 16); // 0x4b4372
    int64_t v8 = *v7; // 0x4b4372
    *v7 = v8 | 1;
    if ((int32_t)a3 == 0) {
        int64_t v9 = function_4b4200(a1, a4, a5); // 0x4b4391
        int32_t v10 = v9; // 0x4b4396
        while (v10 != 0) {
            // 0x4b439a
            v5 = v9;
            if (v10 != -14) {
                goto lab_0x4b43cb_2;
            }
            int64_t v11 = function_4b1a40(a1, a1, 2); // 0x4b43aa
            v5 = v11;
            if ((int32_t)v11 != 0) {
                goto lab_0x4b43cb_2;
            }
            v9 = function_4b4200(a1, a4, a5);
            v10 = v9;
        }
        // 0x4b431a
        function_4b0890(&v1);
        // 0x4b4324
        return v3 & 0xffffffff;
    }
    // 0x4b43d8
    *v7 = v8 | 3;
    int64_t result; // bp-96, 0x4b42a0
    int64_t v12 = function_4b2760(&result, a1, 3); // 0x4b43ec
    v5 = v12;
    if ((int32_t)v12 == 0) {
        // 0x4b43f5
        if (result < 2) {
            // 0x4b44c0
            return result;
        }
        int64_t v13 = function_4b0ac0(&v1, a1, 8); // 0x4b441a
        v5 = v13;
        if ((int32_t)v13 == 0) {
            int64_t v14 = (int64_t)&v1; // 0x4b4423
            int64_t v15 = function_4b1220(v14, 1); // 0x4b442d
            v5 = v15;
            if ((int32_t)v15 == 0) {
                int64_t v16 = function_4b2830(a1); // 0x4b447a
                int32_t v17 = v16;
                int32_t v18 = v17; // 0x4b4481
                int64_t v19 = v16; // 0x4b4481
                int64_t v20; // 0x4b4488
                int32_t v21; // 0x4b42a0
                int64_t v22; // 0x4b449a
                int32_t v23; // 0x4b42a0
                int64_t v24; // 0x4b44ae
                int32_t v25; // 0x4b42a0
                if (v17 == 0) {
                    // 0x4b4483
                    v20 = function_4b2830(v14);
                    v21 = v20;
                    v18 = v21;
                    v19 = v20;
                    if (v21 == 0) {
                        // 0x4b4491
                        v22 = function_4b3910(a1, a4, a5);
                        v23 = v22;
                        v18 = v23;
                        v19 = v22;
                        if (v23 == 0) {
                            // 0x4b44a3
                            v24 = function_4b3910(v14, a4, a5);
                            v25 = v24;
                            v18 = v25;
                            v19 = v24;
                            if (v25 == 0) {
                                // 0x4b431a
                                function_4b0890(&v1);
                                // 0x4b4324
                                return v3 & 0xffffffff;
                            }
                        }
                    }
                }
                // 0x4b4440
                v5 = v19;
                while (v18 == -14) {
                    int64_t v26 = function_4b1a40(a1, a1, 12); // 0x4b4450
                    v5 = v26;
                    if ((int32_t)v26 != 0) {
                        // break -> 0x4b43cb
                        break;
                    }
                    int64_t v27 = function_4b1a40(v14, v14, 6); // 0x4b446a
                    v5 = v27;
                    if ((int32_t)v27 != 0) {
                        // break -> 0x4b43cb
                        break;
                    }
                    v16 = function_4b2830(a1);
                    v17 = v16;
                    v18 = v17;
                    v19 = v16;
                    if (v17 == 0) {
                        // 0x4b4483
                        v20 = function_4b2830(v14);
                        v21 = v20;
                        v18 = v21;
                        v19 = v20;
                        if (v21 == 0) {
                            // 0x4b4491
                            v22 = function_4b3910(a1, a4, a5);
                            v23 = v22;
                            v18 = v23;
                            v19 = v22;
                            if (v23 == 0) {
                                // 0x4b44a3
                                v24 = function_4b3910(v14, a4, a5);
                                v25 = v24;
                                v18 = v25;
                                v19 = v24;
                                if (v25 == 0) {
                                    // 0x4b431a
                                    function_4b0890(&v1);
                                    // 0x4b4324
                                    return v3 & 0xffffffff;
                                }
                            }
                        }
                    }
                    // 0x4b4440
                    v5 = v19;
                }
            }
        }
    }
    goto lab_0x4b43cb_2;
}

// Address range: 0x4c0600 - 0x4c0823
int64_t function_4c0600(int64_t a1, int64_t a2, int64_t a3, uint64_t a4, int64_t a5, uint64_t a6) {
    int64_t v1 = 0; // bp-80, 0x4c0620
    if (a4 >= 0x2000000000000000) {
        // 0x4c07f5
        return a4 / 0x2000000000000000;
    }
    // 0x4c062f
    if (a6 >= 0x2000000000000000) {
        // 0x4c07f5
        return 0xffffffec;
    }
    int64_t v2 = a1 + 376; // 0x4c0648
    int64_t v3 = a1 + 392; // 0x4c064f
    int64_t * v4 = (int64_t *)v2; // 0x4c065a
    *v4 = 0;
    int64_t v5 = a1 + 384; // 0x4c0668
    *(int64_t *)v5 = 0;
    int64_t v6 = v3; // bp-104, 0x4c0670
    *(int32_t *)(a1 + 408) = (int32_t)a2;
    *(int64_t *)v3 = 0;
    *(int64_t *)(a1 + 400) = 0;
    *(int64_t *)(a1 + 344) = 0;
    int64_t * v7 = (int64_t *)(a1 + 352); // 0x4c069b
    *v7 = 0;
    switch (a4) {
        case 12: {
            // 0x4c0807
            *v4 = a3;
            *(int32_t *)v5 = *(int32_t *)(a3 + 8);
            *(char *)(a1 + 391) = 1;
            // break -> 0x4c0775
            break;
        }
        default: {
            uint64_t v8 = a4;
            int64_t v9 = v8 < 16 ? v8 : 16; // 0x4c070a
            int64_t v10 = 0; // 0x4c0713
            char * v11; // 0x4c071d
            int64_t v12; // 0x4c0725
            if (v9 != 0) {
                v11 = (char *)(v10 + v2);
                *v11 = *v11 ^ *(char *)(v10 + a3);
                v12 = v10 + 1;
                v10 = v12;
                while (v12 != v9) {
                    // 0x4c0718
                    v11 = (char *)(v10 + v2);
                    *v11 = *v11 ^ *(char *)(v10 + a3);
                    v12 = v10 + 1;
                    v10 = v12;
                }
            }
            // 0x4c072e
            function_4c00c0(a1, v2, v2, a4);
            int64_t v13 = v8 - v9; // 0x4c073f
            int64_t v14 = v9 + a3; // 0x4c0742
            while (v13 != 0) {
                int64_t v15 = v14;
                v8 = v13;
                v9 = v8 < 16 ? v8 : 16;
                v10 = 0;
                if (v9 != 0) {
                    v11 = (char *)(v10 + v2);
                    *v11 = *v11 ^ *(char *)(v10 + v15);
                    v12 = v10 + 1;
                    v10 = v12;
                    while (v12 != v9) {
                        // 0x4c0718
                        v11 = (char *)(v10 + v2);
                        *v11 = *v11 ^ *(char *)(v10 + v15);
                        v12 = v10 + 1;
                        v10 = v12;
                    }
                }
                // 0x4c072e
                function_4c00c0(a1, v2, v2, a4);
                v13 = v8 - v9;
                v14 = v9 + v15;
            }
        }
        case 0: {
            for (int64_t i = 1; i < 16; i++) {
                char * v16 = (char *)(i + v2); // 0x4c0755
                *v16 = *v16 ^ *(char *)((int64_t)&v6 + 32 + i);
            }
            // 0x4c0767
            function_4c00c0(a1, v2, v2, a4);
            // break -> 0x4c0775
            break;
        }
    }
    int64_t v17 = function_4b5070(a1, v2, 16, a1 + 360, &v1); // 0x4c078c
    int64_t result = v17 & 0xffffffff; // 0x4c0793
    if ((int32_t)v17 != 0) {
        // 0x4c07f5
        return result;
    }
    // 0x4c0798
    *v7 = a6;
    if (a6 == 0) {
        // 0x4c07f5
        return result;
    }
    uint64_t v18 = a6;
    int64_t v19 = v18 < 16 ? v18 : 16; // 0x4c07b7
    int64_t v20 = 0; // 0x4c07c0
    int64_t v21 = 0; // 0x4c07c0
    char * v22; // 0x4c07cd
    int64_t v23; // 0x4c07d5
    if (v19 != 0) {
        v22 = (char *)(v20 + v3);
        *v22 = *v22 ^ *(char *)(v20 + a5);
        v23 = v20 + 1;
        v20 = v23;
        v21 = v23;
        while (v23 != v19) {
            // 0x4c07c8
            v22 = (char *)(v20 + v3);
            *v22 = *v22 ^ *(char *)(v20 + a5);
            v23 = v20 + 1;
            v20 = v23;
            v21 = v23;
        }
    }
    int64_t v24 = v6; // 0x4c07de
    function_4c00c0(a1, v24, v24, v21);
    int64_t v25 = v18 - v19; // 0x4c07f0
    int64_t v26 = v19 + a5; // 0x4c07f3
    while (v25 != 0) {
        int64_t v27 = v26;
        v18 = v25;
        v19 = v18 < 16 ? v18 : 16;
        v20 = 0;
        v21 = 0;
        if (v19 != 0) {
            v22 = (char *)(v20 + v3);
            *v22 = *v22 ^ *(char *)(v20 + v27);
            v23 = v20 + 1;
            v20 = v23;
            v21 = v23;
            while (v23 != v19) {
                // 0x4c07c8
                v22 = (char *)(v20 + v3);
                *v22 = *v22 ^ *(char *)(v20 + v27);
                v23 = v20 + 1;
                v20 = v23;
                v21 = v23;
            }
        }
        // 0x4c07de
        v24 = v6;
        function_4c00c0(a1, v24, v24, v21);
        v25 = v18 - v19;
        v26 = v19 + v27;
    }
    // 0x4c07f5
    return result;
}

// Address range: 0x4fddc0 - 0x4fdfea
// From class:    __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
// Type:          virtual member function
int64_t function_4fddc0(int64_t a1, int64_t a2, int64_t a3) {
    char * v1 = (char *)(a1 + 192); // 0x4fddcb
    int64_t v2; // 0x4fddc0
    int64_t v3; // 0x4fddc0
    int64_t v4; // 0x4fddc0
    if (*v1 == 0) {
        char * v5 = (char *)(a1 + 170); // 0x4fde38
        if (*v5 != 0) {
            // 0x4fdeb0
            if ((int32_t)a1 == -1) {
                // 0x4fde9b
                return 0;
            }
            int64_t v6 = *(int64_t *)(a1 + 152); // 0x4fdec0
            *(int64_t *)(a1 + 40) = 0;
            *(int64_t *)(a1 + 32) = 0;
            *(int64_t *)(a1 + 48) = 0;
            *v5 = 0;
            *(int64_t *)(a1 + 8) = v6;
            *(int64_t *)(a1 + 16) = v6;
            *(int64_t *)(a1 + 24) = v6;
            v4 = a3;
            v2 = a2;
            v3 = 0;
        } else {
            // 0x4fde41
            v4 = a3;
            v2 = a2;
            v3 = 0;
        }
    } else {
        int64_t * v7 = (int64_t *)(a1 + 16); // 0x4fdde0
        int64_t v8 = *v7; // 0x4fdde0
        int64_t * v9 = (int64_t *)(a1 + 8); // 0x4fdde4
        int64_t v10 = *v9; // 0x4fdde4
        if (a3 > 0 == v10 == v8) {
            // 0x4fdf60
            *(char *)a2 = *(char *)v8;
            int64_t result = *v7 + 1; // 0x4fdf71
            *v7 = result;
            if (*v1 != 0) {
                // 0x4fde9b
                return result;
            }
            // 0x4fdf82
            v4 = a3 - 1;
            v2 = a2 + 1;
            v3 = 1;
        } else {
            // 0x4fddf3
            *v1 = 0;
            int64_t * v11 = (int64_t *)(a1 + 176); // 0x4fde15
            int64_t v12 = *v11 + (int64_t)(v10 != v8); // 0x4fde15
            *v9 = *(int64_t *)(a1 + 152);
            *(int64_t *)(a1 + 24) = *(int64_t *)(a1 + 184);
            *v11 = v12;
            *v7 = v12;
            v4 = a3;
            v2 = a2;
            v3 = 0;
        }
    }
    uint64_t v13 = *(int64_t *)(a1 + 160); // 0x4fde48
    int64_t result2 = v13 >= 2 ? v13 - 1 : 1; // 0x4fde5d
    if (v4 <= result2) {
        // 0x4fde9b
        return function_53fce0(a1, v2, v4) + v3;
    }
    int64_t v14 = *(int64_t *)(a1 + 200); // 0x4fde66
    if (v14 == 0) {
        // 0x4fde9b
        return result2;
    }
    // 0x4fde76
    if ((*(int32_t *)(a1 + 120) & 8) == 0 || (char)*(int64_t *)v14 == 0) {
        // 0x4fde9b
        return function_53fce0(a1, v2, v4) + v3;
    }
    int64_t * v15 = (int64_t *)(a1 + 16); // 0x4fdf08
    int64_t v16 = *v15; // 0x4fdf08
    int64_t * v17 = (int64_t *)(a1 + 24); // 0x4fdf0c
    int64_t v18 = *v17 - v16; // 0x4fdf10
    int64_t v19 = v4; // 0x4fdf13
    int64_t v20 = v2; // 0x4fdf13
    int64_t v21 = v3; // 0x4fdf13
    if (v18 != 0) {
        // 0x4fdf98
        memcpy((int64_t *)v2, (int64_t *)v16, (int32_t)v18);
        *v15 = *v15 + v18;
        v19 = v4 - v18;
        v20 = v18 + v2;
        v21 = v18 + v3;
    }
    int64_t v22 = a1 + 104; // 0x4fdf19
    int64_t v23 = function_4f1770(v22, v20, v19); // 0x4fdf34
    int64_t v24 = v23; // 0x4fdf3d
    int64_t v25 = v20; // 0x4fdf3d
    if (v23 == -1) {
        // 0x4fde9b
        return -1;
    }
    int64_t v26 = v19;
    int64_t v27 = v21;
    int64_t result3; // 0x4fddc0
    while (v24 != 0) {
        int64_t v28 = v27 + v24; // 0x4fdf20
        int64_t v29 = v26 - v24; // 0x4fdf23
        result3 = v28;
        if (v29 == 0) {
            goto lab_0x4fdf4d;
        }
        // 0x4fdf2b
        v25 += v24;
        v24 = function_4f1770(v22, v25, v29);
        if (v24 == -1) {
            // 0x4fde9b
            return -1;
        }
        v26 = v29;
        v27 = v28;
    }
    // 0x4fdf48
    result3 = v27;
    if (v26 == 0) {
      lab_0x4fdf4d:
        // 0x4fdf4d
        *(char *)(a1 + 169) = 1;
        // 0x4fde9b
        return result3;
    }
    int64_t result4 = *(int64_t *)(a1 + 152); // 0x4fdfb8
    *(int64_t *)(a1 + 40) = 0;
    *(int64_t *)(a1 + 32) = 0;
    *(int64_t *)(a1 + 48) = 0;
    *(char *)(a1 + 169) = 0;
    *(int64_t *)(a1 + 8) = result4;
    *v15 = result4;
    *v17 = result4;
    return result4;
}

// Address range: 0x4ff6a0 - 0x4ff8c2
// From class:    __gnu_cxx::stdio_filebuf<char, std::char_traits<char> >
// Type:          virtual member function
int64_t function_4ff6a0(int64_t a1, int64_t a2) {
    // 0x4ff6a0
    __readfsqword(40);
    int64_t v1 = a1 + 120; // 0x4ff6b6
    if ((*(char *)v1 & 17) == 0) {
        // 0x4ff786
        __readfsqword(40);
        return 0xffffffff;
    }
    // 0x4ff6c0
    if (*(char *)(a1 + 169) != 0) {
        char * v2 = (char *)(a1 + 192); // 0x4ff6ce
        if (*v2 != 0) {
            int64_t * v3 = (int64_t *)(a1 + 8); // 0x4ff880
            int64_t * v4 = (int64_t *)(a1 + 16); // 0x4ff884
            *v2 = 0;
            *v3 = *(int64_t *)(a1 + 152);
            *(int64_t *)(a1 + 24) = *(int64_t *)(a1 + 184);
            int64_t * v5 = (int64_t *)(a1 + 176); // 0x4ff8ab
            int64_t v6 = *v5 + (int64_t)(*v4 != *v3); // 0x4ff8ab
            *v5 = v6;
            *v4 = v6;
        }
        int64_t v7 = a1 + 140; // 0x4ff6db
        int64_t v8 = function_4ff3f0(a1, v7); // 0x4ff6e5
        if (function_4ff5b0(a1, 0x100000000 * v8 >> 32, 1, *(int64_t *)v7) == -1) {
            // 0x4ff786
            __readfsqword(40);
            return 0xffffffff;
        }
    }
    int64_t result3 = a2 & 0xffffffff; // 0x4ff6ca
    int64_t * v9 = (int64_t *)(a1 + 32); // 0x4ff70b
    uint64_t v10 = *v9; // 0x4ff70b
    int64_t * v11 = (int64_t *)(a1 + 40); // 0x4ff70f
    uint64_t v12 = *v11; // 0x4ff70f
    if (v10 >= v12) {
        uint64_t v13 = *(int64_t *)(a1 + 160); // 0x4ff7a8
        if (v13 < 2) {
            int64_t v14 = 0x100000000000000 * a2 >> 56; // bp-33, 0x4ff7b8
            if ((int32_t)a2 == -1) {
                // 0x4ff7c3
                *(char *)(a1 + 170) = 1;
                // 0x4ff786
                __readfsqword(40);
                return 0;
            }
            int64_t v15 = function_4ff270(a1, (int64_t)&v14, 1); // 0x4ff855
            int64_t result = 0xffffffff; // 0x4ff85c
            if ((char)v15 != 0) {
                // 0x4ff85e
                *(char *)(a1 + 170) = 1;
                result = result3;
            }
            // 0x4ff786
            __readfsqword(40);
            return result;
        }
        int64_t result2 = *(int64_t *)(a1 + 152); // 0x4ff7f3
        *(int64_t *)(a1 + 8) = result2;
        *(int64_t *)(a1 + 16) = result2;
        *(int64_t *)(a1 + 24) = result2;
        if ((*(int32_t *)v1 & 17) == 0) {
            // 0x4ff8c8
            return result2;
        }
        // 0x4ff814
        *v11 = result2;
        *v9 = result2;
        *(int64_t *)(a1 + 48) = v13 - 1 + result2;
        *(char *)(a1 + 170) = 1;
        if ((int32_t)a2 == -1) {
            // 0x4ff786
            __readfsqword(40);
            return 0;
        }
        // 0x4ff831
        *(char *)*v11 = (char)a2;
        *v11 = *v11 + 1;
        // 0x4ff786
        __readfsqword(40);
        return result3;
    }
    int64_t v16 = v12; // 0x4ff71f
    int64_t v17 = v10; // 0x4ff71f
    if ((int32_t)a2 != -1) {
        // 0x4ff721
        *(char *)v12 = (char)a2;
        v17 = *v9;
        v16 = *v11 + 1;
        *v11 = v16;
    }
    int64_t v18 = v17;
    if ((char)function_4ff270(a1, v18, v16 - v18) == 0) {
        // 0x4ff786
        __readfsqword(40);
        return 0xffffffff;
    }
    uint32_t v19 = *(int32_t *)v1; // 0x4ff747
    int64_t v20 = *(int64_t *)(a1 + 152); // 0x4ff74a
    *(int64_t *)(a1 + 8) = v20;
    *(int64_t *)(a1 + 16) = v20;
    *(int64_t *)(a1 + 24) = v20;
    if ((v19 & 16) != 0) {
        goto lab_0x4ff7d0;
    } else {
        if (v19 % 2 != 0) {
            goto lab_0x4ff7d0;
        } else {
            goto lab_0x4ff767;
        }
    }
  lab_0x4ff7d0:;
    uint64_t v21 = *(int64_t *)(a1 + 160); // 0x4ff7d0
    if (v21 < 2) {
        goto lab_0x4ff767;
    } else {
        // 0x4ff7dd
        *v11 = v20;
        *v9 = v20;
        *(int64_t *)(a1 + 48) = v20 - 1 + v21;
        goto lab_0x4ff77f;
    }
  lab_0x4ff767:
    // 0x4ff767
    *v11 = 0;
    *v9 = 0;
    *(int64_t *)(a1 + 48) = 0;
    goto lab_0x4ff77f;
  lab_0x4ff77f:
    // 0x4ff77f
    if ((int32_t)a2 == -1) {
        // 0x4ff786
        __readfsqword(40);
        return 0;
    }
    // 0x4ff786
    __readfsqword(40);
    return result3;
}

// Address range: 0x508660 - 0x508883
// From class:    std::collate_byname<wchar_t>
// Type:          virtual member function
int64_t function_508660(int64_t result, int64_t a2, int64_t a3, int64_t a4) {
    // 0x508660
    __readfsqword(40);
    *(int64_t *)result = (int64_t)&g25;
    int64_t v1 = function_551750(a3); // 0x5086ad
    int64_t v2 = a4 - a3 >> 1; // 0x5086c2
    if (v2 >= 0x1fffffffffffffff) {
        // 0x50889a
        return 0x1ffffffffffffffe;
    }
    // 0x5086e5
    int64_t v3; // bp-65, 0x508660
    int64_t v4 = (int64_t)&v3; // 0x5086a9
    int64_t v5 = v1 - 24; // 0x5086bd
    int64_t v6; // 0x508660
    int64_t v7 = function_4eec00(4 * v2, a4, v6); // 0x5086ed
    int64_t v8 = v2; // 0x5086f8
    int64_t v9 = v1; // 0x5086f8
    int64_t v10 = v7; // 0x5086f8
    int64_t v11; // 0x508660
    int64_t v12; // 0x508660
    int64_t v13; // 0x508774
    uint64_t v14; // 0x508789
    int64_t v15; // 0x508660
    while (true) {
      lab_0x508700:;
        int64_t v16 = v10;
        int64_t wstr = v9;
        int64_t v17 = v8;
        int64_t v18 = function_569120(a2, v16, wstr, v17); // 0x508710
        v8 = v17;
        int64_t v19 = v18; // 0x508718
        int64_t v20 = v16; // 0x508718
        if (v17 <= v18) {
            // 0x50871a
            v8 = v18 + 1;
            function_4eeb40(v16);
            if (v8 >= 0x1fffffffffffffff) {
                // 0x508829
                function_1fd40(function_208a0());
                v15 = v1 - 48;
                v12 = function_20a50();
                goto lab_0x50883e;
            }
            // 0x50873d
            v20 = function_4eec00(4 * v8, v16, wstr);
            v19 = function_569120(a2, v20, wstr, v8);
        }
        // 0x50875e
        v10 = v20;
        function_5289c(result, v10, v19);
        v13 = 4 * (int64_t)wcslen((int32_t *)wstr) + wstr;
        if (4 * *(int64_t *)v5 + v1 == v13) {
            // break -> 0x5087e0
            break;
        }
        // 0x50877e
        v14 = *(int64_t *)(wstr - 24) + 1;
        if (v14 > *(int64_t *)(wstr - 16)) {
            // 0x50879a
            function_527a4(result, v14);
            v11 = result;
            goto lab_0x5087a8;
        } else {
            // 0x508793
            v11 = wstr;
            if (*(int32_t *)(wstr - 8) < 1) {
                goto lab_0x5087a8;
            } else {
                // 0x50879a
                function_527a4(result, v14);
                v11 = result;
                goto lab_0x5087a8;
            }
        }
    }
    // 0x5087e0
    function_4eeb40(v10);
    if (v5 != g19) {
        // 0x50881e
        function_508450(v5, v4);
    }
    // 0x5087f9
    __readfsqword(40);
    return result;
  lab_0x5087a8:;
    int64_t v21 = v11;
    int64_t v22 = v21 - 24; // 0x5087a8
    int64_t * v23 = (int64_t *)v22; // 0x5087a8
    *(int32_t *)(4 * *v23 + v21) = 0;
    if (v22 != *(int64_t *)0x848c20) {
        // 0x5087c4
        *(int32_t *)(v21 - 8) = 0;
        *v23 = v14;
        *(int32_t *)(v21 + 4 * v14) = 0;
    }
    // 0x508700
    v9 = v13 + 4;
    goto lab_0x508700;
  lab_0x50883e:
    // 0x50883e
    if (v5 == g19) {
        // 0x508868
        function_508450(v15, v4);
        goto lab_0x508871;
    } else {
        // 0x508858
        function_508450(v5, v4);
        if (v15 == g19) {
            goto lab_0x508871;
        } else {
            // 0x508868
            function_508450(v15, v4);
            goto lab_0x508871;
        }
    }
  lab_0x508871:
    // 0x508871
    _Unwind_Resume((struct _Unwind_Exception *)v12);
    function_20540();
    v12 = (int64_t)&g31;
    goto lab_0x50883e;
}

// Address range: 0x50e6b0 - 0x50e8df
int64_t function_50e6b0(int64_t a1, int64_t result, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x50e6b0
    __readfsqword(40);
    int64_t v1 = function_50e0e0(); // 0x50e6f0
    uint32_t v2 = *(int32_t *)(a4 + 24); // 0x50e6f5
    int64_t v3; // bp-296, 0x50e6b0
    int64_t v4 = (int64_t)&v3; // 0x50e6f9
    int32_t v5 = v2 & 74; // 0x50e71f
    int64_t v6; // bp-128, 0x50e6b0
    int64_t v7 = function_50cf40(&v6, a6); // 0x50e745
    int32_t v8 = v7; // bp-68, 0x50e759
    int64_t v9 = 0x100000000 * v7; // 0x50e757
    int64_t v10; // bp-288, 0x50e6b0
    int64_t v11 = (0x2800000000 - v9 >> 30) + (int64_t)&v10; // 0x50e764
    int64_t v12; // 0x50e6b0
    int64_t v13; // 0x50e6b0
    int64_t v14; // 0x50e6b0
    int64_t v15; // 0x50e6b0
    int64_t v16; // 0x50e6b0
    if (*(char *)(v1 + 32) != 0) {
        int32_t v17 = *(int32_t *)(v1 + 76); // 0x50e7e3
        int64_t v18 = *(int64_t *)(v1 + 24); // 0x50e7ed
        int64_t v19 = v4 - ((v9 + 0x100000000 >> 29) + 30 & -16); // 0x50e804
        int64_t v20 = v19 + 15 & -16 | 8; // 0x50e810
        *(int64_t *)(v19 - 8) = (int64_t)&v8;
        *(int64_t *)(v19 - 16) = v11;
        function_50cd00(a1, *(int64_t *)(v1 + 16), v18, v17, a4, v20, v20);
        int64_t v21 = v8; // 0x50e82d
        v13 = v21;
        v15 = v19;
        v14 = v21;
        v16 = v19;
        v12 = v20;
        if (v5 != 64 && v5 != 8) {
            goto lab_0x50e772;
        } else {
            goto lab_0x50e83f;
        }
    } else {
        // 0x50e76a
        v13 = v7;
        v15 = v4;
        v14 = v7;
        v16 = v4;
        v12 = v11;
        if (v5 == 64 || v5 == 8) {
            goto lab_0x50e83f;
        } else {
            goto lab_0x50e772;
        }
    }
  lab_0x50e772:;
    int64_t * v22 = (int64_t *)(a4 + 16); // 0x50e772
    int64_t v23 = *v22; // 0x50e772
    if (0x100000000 * v13 >> 32 < v23) {
        // 0x50e890
        *(int64_t *)(v15 - 16 - (4 * v23 + 30 & -16)) = (int64_t)&v8;
        function_50cf10(a1, (int32_t)a5);
    }
    // 0x50e782
    *v22 = 0;
    __readfsqword(40);
    return result;
  lab_0x50e83f:
    // 0x50e83f
    v13 = v14;
    v15 = v16;
    if (a6 != 0 && (v2 & (int32_t)&g12) != 0) {
        if (v5 == 64) {
            // 0x50e8d1
            return v14 + 1 & 0xffffffff;
        }
        int64_t v24 = v14 + 2; // 0x50e865
        int32_t v25 = *(int32_t *)(v1 + 80 + (int64_t)(v2 / 0x1000 & 4 | 8)); // 0x50e877
        v8 = v24;
        *(int32_t *)(v12 - 4) = v25;
        *(int32_t *)(v12 - 8) = *(int32_t *)(v1 + 96);
        v13 = v24 & 0xffffffff;
        v15 = v16;
    }
    goto lab_0x50e772;
}

// Address range: 0x50ee90 - 0x50ee95
// From class:    std::num_put<wchar_t, std::ostreambuf_iterator<wchar_t, std::char_traits<wchar_t> > >
// Type:          virtual member function
int64_t function_50ee90(void) {
    // 0x50ee90
    return function_50ec50();
}

// Address range: 0x50eea0 - 0x50eeba
int64_t function_50eea0(int64_t a1) {
    int64_t result = *(int64_t *)(a1 + 48); // 0x50eea3
    if (result != g18) {
        // 0x50eeb8
        return result;
    }
    // 0x50eeb0
    return function_50ec50();
}

// Address range: 0x50eec0 - 0x50f0c6
int64_t function_50eec0(int64_t a1, int64_t result6, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x50eec0
    __readfsqword(40);
    int128_t v1; // 0x50eec0
    int64_t v2 = __asm_movsd(v1); // 0x50ef06
    int64_t v3 = function_50e0e0(); // 0x50ef12
    int64_t v4; // bp-88, 0x50eec0
    int64_t result = function_568f00(a4, &v4, 0x100000000000000 * a6 >> 56); // 0x50ef3c
    if ((*(int32_t *)(a4 + 24) & 260) == 260) {
        // 0x50f120
        return result;
    }
    int64_t v5 = function_565f30(); // bp-96, 0x50ef72
    int64_t str; // bp-224, 0x50eec0
    int64_t v6 = function_5088b0(&v5, &str, 45, __asm_movsd_133(v2)); // 0x50ef95
    int32_t v7 = v6; // 0x50ef9d
    if (v7 > 44) {
        // 0x50f0c0
        return 0x100000000 * v6 + 0x100000000 >> 32;
    }
    int64_t result4 = function_50ab00(a4 + 208); // 0x50efaa
    int64_t v8 = 0x100000000 * v6;
    int64_t n = v8 >> 32; // 0x50efe2
    int64_t result5; // 0x50eec0
    if (v7 != 0) {
        int64_t * found_byte_pos = memchr(&str, 46, (int32_t)n); // 0x50f086
        int64_t result2 = (int64_t)found_byte_pos; // 0x50f086
        if (found_byte_pos == NULL) {
            // 0x50f120
            return result2;
        }
        uint32_t v9 = *(int32_t *)(v3 + 72); // 0x50f0ab
        int64_t result3 = v9; // 0x50f0ab
        int64_t v10; // bp-232, 0x50eec0
        *(int32_t *)(4 * (result2 - (int64_t)&str) + ((int64_t)&v10 + 15 - ((v8 >> 30) + 30 & -16) & -16)) = v9;
        result5 = result3;
        if (*(char *)(v3 + 32) != 0) {
            // 0x50f120
            return result3;
        }
    } else {
        // 0x50eff2
        result5 = result4;
        if (*(char *)(v3 + 32) != 0) {
            // 0x50f120
            return result4;
        }
    }
    int64_t * v11 = (int64_t *)(a4 + 16); // 0x50effd
    if (n < *v11) {
        // 0x50f120
        return result5;
    }
    // 0x50f00e
    *v11 = 0;
    __readfsqword(40);
    return result6;
}

// Address range: 0x52ea70 - 0x52ec97
// From class:    std::__cxx11::collate_byname<wchar_t>
// Type:          virtual member function
int64_t function_52ea70(int64_t result, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = result + 16; // 0x52ea83
    *(int64_t *)result = v1;
    __readfsqword(40);
    int64_t * v2 = (int64_t *)(result + 8); // 0x52eaab
    *v2 = 0;
    *(int32_t *)v1 = 0;
    int64_t v3; // bp-88, 0x52ea70
    int32_t * v4 = (int32_t *)&v3; // bp-104, 0x52ead2
    function_54c860((int64_t *)&v4, a3);
    int64_t v5 = a4 - a3 >> 1; // 0x52eae7
    if (v5 >= 0x1fffffffffffffff) {
        // 0x52ec97
        return 0x1ffffffffffffffe;
    }
    int64_t v6 = (int64_t)v4; // 0x52eadc
    int64_t v7; // 0x52ea70
    int64_t v8 = function_4eec00(4 * v5, a3, v7);
    int64_t wstr = v6;
    int64_t v9 = function_56ba20(a2, v8, wstr, v5); // 0x52eb49
    int64_t v10 = v9; // 0x52eb51
    int64_t v11 = v5; // 0x52eb51
    int64_t v12 = v8; // 0x52eb51
    if (v5 <= v9) {
        // 0x52eb53
        v11 = v9 + 1;
        function_4eeb40(v8);
        if (v11 >= 0x1fffffffffffffff) {
            goto lab_0x52ec88;
        }
        // 0x52eb72
        v12 = function_4eec00(4 * v11, v8, wstr);
        v10 = function_56ba20(a2, v12, wstr, v11);
    }
    int64_t v13 = v12;
    uint64_t v14 = 0x1fffffffffffffff - *v2; // 0x52eba1
    while (v10 <= v14) {
        // 0x52ebae
        function_54b560(result, v13, v10);
        int64_t v15 = 4 * (int64_t)wcslen((int32_t *)wstr) + wstr; // 0x52ebc8
        if (4 * v7 + v6 == v15) {
            // 0x52ec20
            function_4eeb40(v13);
            int64_t v16 = (int64_t)v4; // 0x52ec2f
            if ((int64_t)&v4 + 16 == v16) {
                // 0x52ec41
                __readfsqword(40);
                return result;
            }
            // 0x52ec3c
            function_4eeb50(v16);
            // 0x52ec41
            __readfsqword(40);
            return result;
        }
        int64_t v17 = *v2; // 0x52ebd9
        int64_t v18 = 3; // 0x52ebed
        if (v1 != wstr) {
            // 0x52ebef
            v18 = *(int64_t *)v1;
        }
        uint64_t v19 = v17 + 1; // 0x52ebe9
        int64_t v20 = wstr; // 0x52ebf6
        if (v19 > v18) {
            // 0x52ebfc
            function_549e80(result, v17, 0, 0, 1);
            v20 = result;
        }
        int64_t v21 = v20 + 4 * v17;
        *(int32_t *)v21 = 0;
        *v2 = v19;
        *(int32_t *)(v21 + 4) = 0;
        v8 = v13;
        int64_t v22 = v11;
        wstr = v15 + 4;
        v9 = function_56ba20(a2, v8, wstr, v22);
        v10 = v9;
        v11 = v22;
        v12 = v8;
        if (v22 <= v9) {
            // 0x52eb53
            v11 = v9 + 1;
            function_4eeb40(v8);
            if (v11 >= 0x1fffffffffffffff) {
                goto lab_0x52ec88;
            }
            // 0x52eb72
            v12 = function_4eec00(4 * v11, v8, wstr);
            v10 = function_56ba20(a2, v12, wstr, v11);
        }
        // 0x52eb93
        v13 = v12;
        v14 = 0x1fffffffffffffff - *v2;
    }
    // 0x52ec63
    function_1fd40(function_542590("basic_string::append", result, v14));
    function_4eeb40(v13);
    while (true) {
        // 0x52ec7f
        function_20a50();
      lab_0x52ec88:
        // 0x52ec88
        function_1fd40(function_208a0());
    }
}

// Address range: 0x5590a0 - 0x5590a9
// From class:    std::num_put<char, std::ostreambuf_iterator<char, std::char_traits<char> > >
// Type:          virtual member function
int64_t function_5590a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x5590a0
    return function_558e70();
}

// Address range: 0x5590b0 - 0x5590d2
int64_t function_5590b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t result = *(int64_t *)(a1 + 48); // 0x5590b7
    if (result != g17) {
        // 0x5590d0
        return result;
    }
    // 0x5590c4
    return function_558e70();
}

// Address range: 0x5590e0 - 0x5592cb
int64_t function_5590e0(int64_t a1, int64_t result6, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x5590e0
    __readfsqword(40);
    int128_t v1; // 0x5590e0
    int64_t v2 = __asm_movsd(v1); // 0x559126
    int64_t v3 = function_558300(); // 0x559132
    int64_t v4; // bp-88, 0x5590e0
    int64_t result = function_568f00(a4, &v4, 0x100000000000000 * a6 >> 56); // 0x55915c
    if ((*(int32_t *)(a4 + 24) & 260) == 260) {
        // 0x5592d0
        return result;
    }
    int64_t v5 = function_565f30(); // bp-96, 0x559192
    int64_t str; // bp-224, 0x5590e0
    int64_t result2 = function_5088b0(&v5, &str, 45, __asm_movsd_133(v2)); // 0x5591b2
    int32_t n = result2; // 0x5591ba
    if (n > 44) {
        // 0x5592d0
        return result2;
    }
    int64_t v6 = (int64_t)&str; // 0x559175
    int64_t v7 = function_554b00(a4 + 208); // 0x5591c7
    uint64_t v8 = 0x100000000 * result2 >> 32; // 0x5591cc
    int64_t v9; // bp-232, 0x5590e0
    int64_t v10 = (int64_t)&v9 + 15 - (v8 + 30 & -16) & -16; // 0x5591e9
    int64_t result5 = function_519810(v7, &str, v8 + v6, v10); // 0x5591f4
    if (n != 0) {
        int64_t * found_byte_pos = memchr(&str, 46, n); // 0x559296
        int64_t result3 = (int64_t)found_byte_pos; // 0x559296
        if (found_byte_pos == NULL) {
            // 0x5592d0
            return result3;
        }
        unsigned char result4 = *(char *)(v3 + 72); // 0x5592b8
        *(char *)(v10 - v6 + result3) = result4;
        return result4;
    }
    // 0x559209
    if (*(char *)(v3 + 32) != 0) {
        // 0x5592d0
        return result5;
    }
    int64_t * v11 = (int64_t *)(a4 + 16); // 0x559214
    if (v8 < *v11) {
        // 0x5592d0
        return result5;
    }
    // 0x559225
    *v11 = 0;
    __readfsqword(40);
    return result6;
}

// Address range: 0x566890 - 0x566ac1
int64_t function_566890(int64_t a1, int64_t a2, int64_t a3) {
    // 0x566890
    int128_t v1; // 0x566890
    int128_t v2 = v1;
    int64_t v3 = __readfsqword(40); // 0x5668a7
    if (*(char *)&g26 == 0) {
        // 0x566998
        if ((int32_t)function_20550(&g26) != 0) {
            int128_t v4 = __asm_pxor(v2, v2); // 0x5669ac
            g29 = 0;
            *(int128_t *)&g27 = (int128_t)__asm_movaps(v4);
            *(int128_t *)&g28 = (int128_t)__asm_movaps(v4);
            function_1ff50();
        }
    }
    int64_t mutex = (int64_t)&g27; // bp-72, 0x5668d4
    if (g20 != 0) {
        // 0x5668dd
        if (pthread_mutex_lock(&g27) != 0) {
            // 0x566aa2
            return function_20210(8);
        }
    }
    int64_t v5 = a3; // 0x5668f7
    int64_t v6 = -1; // 0x5668f7
    if (g15 != 0) {
        int64_t v7 = (int64_t)&g15;
        int64_t v8 = function_566390(g15); // 0x566921
        int64_t v9 = function_566390(*(int64_t *)(v7 + 8));
        v5 = a3;
        v6 = v9;
        while (v8 != a3) {
            if (v9 == a3) {
                // 0x5669f0
                v5 = function_566390(*(int64_t *)v7);
                v6 = a3;
                goto lab_0x566937;
            }
            int64_t v10 = v7 + 16; // 0x566911
            int64_t v11 = *(int64_t *)v10; // 0x566915
            v5 = a3;
            v6 = -1;
            if (v11 == 0) {
                // break -> 0x566937
                break;
            }
            v7 = v10;
            v8 = function_566390(v11);
            v9 = function_566390(*(int64_t *)(v7 + 8));
            v5 = a3;
            v6 = v9;
        }
    }
    goto lab_0x566937;
  lab_0x566937:;
    int64_t * v12 = (int64_t *)(a1 + 24); // 0x566937
    int64_t v13 = *v12; // 0x566937
    int64_t v14 = 8 * v5; // 0x56693b
    int64_t * v15 = (int64_t *)(v13 + v14); // 0x566943
    if (*v15 == 0) {
        int32_t * v16 = (int32_t *)(a2 + 8);
        int32_t v17 = *v16;
        if (g20 == 0) {
            // 0x566a38
            *v16 = v17 + 1;
            *v15 = a2;
            if (v6 == -1) {
                goto lab_0x566972;
            } else {
                // 0x566a52
                *v16 = v17 + 2;
                // 0x566a28
                *(int64_t *)(v13 + 8 * v6) = a2;
                goto lab_0x56695c;
            }
        } else {
            // 0x566a05
            *v16 = v17 + 1;
            *(int64_t *)(*v12 + v14) = a2;
            if (v6 == -1) {
                goto lab_0x566961;
            } else {
                // 0x566a20
                *v16 = *v16 + 1;
                // 0x566a28
                *(int64_t *)(*v12 + 8 * v6) = a2;
                goto lab_0x56695c;
            }
        }
    } else {
        goto lab_0x56695c;
    }
  lab_0x56695c:
    if (g20 == 0) {
        goto lab_0x566972;
    } else {
        goto lab_0x566961;
    }
  lab_0x566972:;
    int64_t result = __readfsqword(40) ^ v3; // 0x566977
    if (result == 0) {
        // 0x566986
        return result;
    }
    // 0x566a5c
    __stack_chk_fail();
    function_4f1b70(&mutex);
    _Unwind_Resume((struct _Unwind_Exception *)&g31);
    int64_t v18 = function_20210(8); // 0x566a79
    *(int64_t *)v18 = (int64_t)&g14;
    function_203b0(v18, 0x843278, 0x4f1a60);
    // 0x566aa2
    return function_20210(8);
  lab_0x566961:
    // 0x566961
    if (pthread_mutex_unlock((int64_t *)mutex) != 0) {
        // 0x566a74
        v18 = function_20210(8);
        *(int64_t *)v18 = (int64_t)&g14;
        function_203b0(v18, 0x843278, 0x4f1a60);
        // 0x566aa2
        return function_20210(8);
    }
    goto lab_0x566972;
}

// Address range: 0x5681f0 - 0x568416
int64_t function_5681f0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x568200
    int64_t v2 = *v1; // 0x568200
    int64_t v3 = v2; // 0x568205
    if (v2 == 0) {
        // 0x568390
        v3 = function_4efd30(144);
        *(int32_t *)(v3 + 8) = 0;
        *(int64_t *)(v3 + 16) = 0;
        *(int64_t *)(v3 + 24) = 0;
        *(char *)(v3 + 32) = 0;
        *(int64_t *)(v3 + 40) = 0;
        *(int64_t *)(v3 + 48) = 0;
        *(int64_t *)(v3 + 56) = 0;
        *(int64_t *)v3 = (int64_t)&g16;
        *(int64_t *)(v3 + 64) = 0;
        *(int16_t *)(v3 + 72) = (int16_t)((int32_t)&g16 ^ (int32_t)&g16);
        *(char *)(v3 + 136) = 0;
        *v1 = v3;
    }
    if (a2 == 0) {
        // 0x5682c0
        *(int64_t *)(v3 + 16) = (int64_t)&g13;
        *(int64_t *)(*v1 + 24) = 0;
        *(char *)(*v1 + 32) = 0;
        *(char *)(*v1 + 72) = 46;
        *(char *)(*v1 + 73) = 44;
        int64_t v4 = *(int64_t *)&g21; // 0x5682fa
        int64_t v5 = (int32_t)&g21 ^ (int32_t)&g21; // 0x5682ff
        int64_t v6 = v5;
        *(char *)(v6 + 74 + *v1) = *(char *)(v6 + v4);
        v5 = v6 + 1;
        while (v6 != 35) {
            // 0x568300
            v6 = v5;
            *(char *)(v6 + 74 + *v1) = *(char *)(v6 + v4);
            v5 = v6 + 1;
        }
        int64_t v7 = (int32_t)&g22 ^ (int32_t)&g22; // 0x568322
        int64_t v8 = v7;
        char v9 = *(char *)(v8 + *(int64_t *)&g22); // 0x568328
        *(char *)(v8 + 110 + *v1) = v9;
        v7 = v8 + 1;
        while (v8 != 25) {
            // 0x568328
            v8 = v7;
            v9 = *(char *)(v8 + *(int64_t *)&g22);
            *(char *)(v8 + 110 + *v1) = v9;
            v7 = v8 + 1;
        }
    } else {
        struct __locale_struct * v10 = (struct __locale_struct *)a2; // 0x56821c
        *(char *)(*v1 + 72) = *__nl_langinfo_l((int32_t)&g2, v10);
        char v11 = *__nl_langinfo_l((int32_t)&g3, v10); // 0x568238
        int64_t v12 = *v1; // 0x56823b
        *(char *)(v12 + 73) = v11;
        int64_t v13 = *v1; // 0x568242
        if (*(char *)(v13 + 73) != 0) {
            char * str = __nl_langinfo_l((int32_t)&g4, v10); // 0x568350
            int32_t len = strlen(str); // 0x56835b
            int64_t v14 = len; // 0x56835b
            if (len != 0) {
                int64_t v15 = v14 + 1; // 0x5683f9
                int64_t v16 = function_4eec00(v15, a2, v12); // 0x568400
                return (int64_t)memcpy((int64_t *)v16, (int64_t *)str, (int32_t)v15);
            }
            // 0x56836c
            *(int64_t *)(*v1 + 16) = (int64_t)&g13;
            *(char *)(*v1 + 32) = 0;
            *(int64_t *)(*v1 + 24) = v14;
        } else {
            // 0x568250
            *(int64_t *)(v13 + 16) = (int64_t)&g13;
            *(int64_t *)(*v1 + 24) = 0;
            *(char *)(*v1 + 32) = 0;
            *(char *)(*v1 + 73) = 44;
        }
    }
    // 0x568277
    *(int64_t *)(*v1 + 40) = (int64_t)"true";
    *(int64_t *)(*v1 + 48) = 4;
    *(int64_t *)(*v1 + 56) = (int64_t)"false";
    int64_t result = *v1; // 0x5682a1
    *(int64_t *)(result + 64) = 5;
    return result;
}

// Address range: 0x56afb0 - 0x56b1d6
int64_t function_56afb0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)(a1 + 16); // 0x56afc0
    int64_t v2 = *v1; // 0x56afc0
    int64_t v3 = v2; // 0x56afc5
    if (v2 == 0) {
        // 0x56b150
        v3 = function_4efd30(144);
        *(int32_t *)(v3 + 8) = 0;
        *(int64_t *)(v3 + 16) = 0;
        *(int64_t *)(v3 + 24) = 0;
        *(char *)(v3 + 32) = 0;
        *(int64_t *)(v3 + 40) = 0;
        *(int64_t *)(v3 + 48) = 0;
        *(int64_t *)(v3 + 56) = 0;
        *(int64_t *)v3 = (int64_t)&g16;
        *(int64_t *)(v3 + 64) = 0;
        *(int16_t *)(v3 + 72) = (int16_t)((int32_t)&g16 ^ (int32_t)&g16);
        *(char *)(v3 + 136) = 0;
        *v1 = v3;
    }
    if (a2 == 0) {
        // 0x56b080
        *(int64_t *)(v3 + 16) = (int64_t)&g13;
        *(int64_t *)(*v1 + 24) = 0;
        *(char *)(*v1 + 32) = 0;
        *(char *)(*v1 + 72) = 46;
        *(char *)(*v1 + 73) = 44;
        int64_t v4 = *(int64_t *)&g21; // 0x56b0ba
        int64_t v5 = (int32_t)&g21 ^ (int32_t)&g21; // 0x56b0bf
        int64_t v6 = v5;
        *(char *)(v6 + 74 + *v1) = *(char *)(v6 + v4);
        v5 = v6 + 1;
        while (v6 != 35) {
            // 0x56b0c0
            v6 = v5;
            *(char *)(v6 + 74 + *v1) = *(char *)(v6 + v4);
            v5 = v6 + 1;
        }
        int64_t v7 = (int32_t)&g22 ^ (int32_t)&g22; // 0x56b0e2
        int64_t v8 = v7;
        char v9 = *(char *)(v8 + *(int64_t *)&g22); // 0x56b0e8
        *(char *)(v8 + 110 + *v1) = v9;
        v7 = v8 + 1;
        while (v8 != 25) {
            // 0x56b0e8
            v8 = v7;
            v9 = *(char *)(v8 + *(int64_t *)&g22);
            *(char *)(v8 + 110 + *v1) = v9;
            v7 = v8 + 1;
        }
    } else {
        struct __locale_struct * v10 = (struct __locale_struct *)a2; // 0x56afdc
        *(char *)(*v1 + 72) = *__nl_langinfo_l((int32_t)&g2, v10);
        char v11 = *__nl_langinfo_l((int32_t)&g3, v10); // 0x56aff8
        int64_t v12 = *v1; // 0x56affb
        *(char *)(v12 + 73) = v11;
        int64_t v13 = *v1; // 0x56b002
        if (*(char *)(v13 + 73) != 0) {
            char * str = __nl_langinfo_l((int32_t)&g4, v10); // 0x56b110
            int32_t len = strlen(str); // 0x56b11b
            int64_t v14 = len; // 0x56b11b
            if (len != 0) {
                int64_t v15 = v14 + 1; // 0x56b1b9
                int64_t v16 = function_4eec00(v15, a2, v12); // 0x56b1c0
                return (int64_t)memcpy((int64_t *)v16, (int64_t *)str, (int32_t)v15);
            }
            // 0x56b12c
            *(int64_t *)(*v1 + 16) = (int64_t)&g13;
            *(char *)(*v1 + 32) = 0;
            *(int64_t *)(*v1 + 24) = v14;
        } else {
            // 0x56b010
            *(int64_t *)(v13 + 16) = (int64_t)&g13;
            *(int64_t *)(*v1 + 24) = 0;
            *(char *)(*v1 + 32) = 0;
            *(char *)(*v1 + 73) = 44;
        }
    }
    // 0x56b037
    *(int64_t *)(*v1 + 40) = (int64_t)"true";
    *(int64_t *)(*v1 + 48) = 4;
    *(int64_t *)(*v1 + 56) = (int64_t)"false";
    int64_t result = *v1; // 0x56b061
    *(int64_t *)(result + 64) = 5;
    return result;
}

// Address range: 0x5762d0 - 0x5764f9
int64_t function_5762d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = __readfsqword(40); // 0x5762e4
    char v2 = a1; // 0x5762ff
    *(char *)(a2 + 72) = v2;
    int64_t * v3 = (int64_t *)(a2 + 16); // 0x57630c
    *v3 = 0;
    *(char *)(a2 + 73) = v2;
    int64_t * v4 = (int64_t *)(a2 + 40); // 0x57631a
    *v4 = 0;
    int64_t * v5 = (int64_t *)(a2 + 56); // 0x576322
    *v5 = 0;
    *(char *)(a2 + 136) = 1;
    int64_t result; // bp-72, 0x5762d0
    int64_t v6 = *(int64_t *)(result - 24); // 0x576340
    int64_t v7 = function_4eec00(v6 + 1, a1, a3); // 0x576348
    function_547670(&result, v7, v6, 0);
    *(char *)(v7 + v6) = 0;
    *v3 = v7;
    *(int64_t *)(a2 + 24) = v6;
    int64_t v8 = result - 24; // 0x576379
    int64_t v9 = v6; // 0x576380
    int64_t v10; // bp-73, 0x5762d0
    if (v8 != (int64_t)&g24) {
        int32_t * v11 = (int32_t *)(result - 8);
        uint32_t v12 = *v11;
        *v11 = v12 - 1;
        int64_t v13 = v12;
        v9 = v13;
        if (v12 >= 0 != v12 != 0) {
            // 0x576470
            function_547e30(v8, &v10, v12);
            v9 = v13;
        }
    }
    int64_t v14 = *(int64_t *)(result - 24); // 0x576398
    int64_t v15 = function_4eec00(v14 + 1, a1, v9); // 0x5763a0
    function_547670(&result, v15, v14, 0);
    *(char *)(v15 + v14) = 0;
    *v4 = v15;
    *(int64_t *)(a2 + 48) = v14;
    int64_t v16 = result - 24; // 0x5763ca
    int64_t v17 = v14; // 0x5763d1
    if (v16 != (int64_t)&g24) {
        // 0x576480
        if (g20 == 0) {
            // 0x5764f0
            return result;
        }
        int32_t * v18 = (int32_t *)(result - 8); // 0x57648f
        uint32_t v19 = *v18; // 0x57648f
        *v18 = v19 - 1;
        int64_t v20 = v19; // 0x57648f
        v17 = v20;
        if (v19 >= 0 != v19 != 0) {
            // 0x57649c
            function_547e30(v16, &v10, v19);
            v17 = v20;
        }
    }
    int64_t v21 = *(int64_t *)(result - 24); // 0x5763e9
    int64_t v22 = function_4eec00(v21 + 1, a1, v17); // 0x5763f1
    function_547670(&result, v22, v21, 0);
    *(char *)(v22 + v21) = 0;
    *v5 = v22;
    *(int64_t *)(a2 + 64) = v21;
    int64_t v23 = result - 24; // 0x57641c
    if (v23 == (int64_t)&g24) {
        // 0x576429
        return __readfsqword(40) ^ v1;
    }
    int32_t * v24 = (int32_t *)(result - 8);
    int32_t v25 = *v24;
    *v24 = v25 - 1;
    if (g20 == 0) {
        // 0x5764f0
        return result;
    }
    if (v25 >= 0 != v25 != 0) {
        // 0x5764cc
        function_547e30(v23, &v10, v25);
    }
    // 0x576429
    return __readfsqword(40) ^ v1;
}
