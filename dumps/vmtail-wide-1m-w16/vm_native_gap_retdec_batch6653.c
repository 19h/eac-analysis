/*
 * Targeted RetDec C for native executable gap queue batch 6653.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x20d8f-0x20d90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x20e67-0x20e68 rank=- name=- kind=- bytes=- uncovered=-
 *   0x249e5-0x249e6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x24a75-0x24a76 rank=- name=- kind=- bytes=- uncovered=-
 *   0x24ceb-0x24cec rank=- name=- kind=- bytes=- uncovered=-
 *   0x24cf9-0x24cfa rank=- name=- kind=- bytes=- uncovered=-
 *   0x24e69-0x24e6a rank=- name=- kind=- bytes=- uncovered=-
 *   0x24ef3-0x24ef4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25017-0x25018 rank=- name=- kind=- bytes=- uncovered=-
 *   0x250af-0x250b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25193-0x25194 rank=- name=- kind=- bytes=- uncovered=-
 *   0x251d5-0x251d6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x254fd-0x254fe rank=- name=- kind=- bytes=- uncovered=-
 *   0x25533-0x25534 rank=- name=- kind=- bytes=- uncovered=-
 *   0x255d9-0x255da rank=- name=- kind=- bytes=- uncovered=-
 *   0x25621-0x25622 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2562b-0x2562c rank=- name=- kind=- bytes=- uncovered=-
 *   0x25645-0x25646 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25711-0x25712 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25da5-0x25da6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x260cf-0x260d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x260eb-0x260ec rank=- name=- kind=- bytes=- uncovered=-
 *   0x260f7-0x260f8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x26105-0x26106 rank=- name=- kind=- bytes=- uncovered=-
 *   0x261a3-0x261a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x27a29-0x27a2a rank=- name=- kind=- bytes=- uncovered=-
 *   0x27e79-0x27e7a rank=- name=- kind=- bytes=- uncovered=-
 *   0x28495-0x28496 rank=- name=- kind=- bytes=- uncovered=-
 *   0x28a89-0x28a8a rank=- name=- kind=- bytes=- uncovered=-
 *   0x29ce9-0x29cea rank=- name=- kind=- bytes=- uncovered=-
 *   0x29cf3-0x29cf4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x29f0d-0x29f0e rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a25b-0x2a25c rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a2ab-0x2a2ac rank=- name=- kind=- bytes=- uncovered=-
 *   0x2a2f3-0x2a2f4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2c899-0x2c89a rank=- name=- kind=- bytes=- uncovered=-
 *   0x2ccd5-0x2ccd6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3601b-0x3601c rank=- name=- kind=- bytes=- uncovered=-
 *   0x3602b-0x3602c rank=- name=- kind=- bytes=- uncovered=-
 *   0x3609f-0x360a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x36915-0x36916 rank=- name=- kind=- bytes=- uncovered=-
 *   0x36965-0x36966 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3698f-0x36990 rank=- name=- kind=- bytes=- uncovered=-
 *   0x36a31-0x36a32 rank=- name=- kind=- bytes=- uncovered=-
 *   0x36b13-0x36b14 rank=- name=- kind=- bytes=- uncovered=-
 *   0x36d97-0x36d98 rank=- name=- kind=- bytes=- uncovered=-
 *   0x38041-0x38042 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3ae23-0x3ae24 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4482d-0x4482e rank=- name=- kind=- bytes=- uncovered=-
 *   0x44cad-0x44cae rank=- name=- kind=- bytes=- uncovered=-
 *   0x45787-0x45788 rank=- name=- kind=- bytes=- uncovered=-
 *   0x45793-0x45794 rank=- name=- kind=- bytes=- uncovered=-
 *   0x470df-0x470e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x474e5-0x474e6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x47517-0x47518 rank=- name=- kind=- bytes=- uncovered=-
 *   0x475dd-0x475de rank=- name=- kind=- bytes=- uncovered=-
 *   0x4765f-0x47660 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a41d-0x4a41e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a6e5-0x4a6e6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4aa61-0x4aa62 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4aa9f-0x4aaa0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ad77-0x4ad78 rank=- name=- kind=- bytes=- uncovered=-
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef __int128 int128_t;
typedef unsigned __int128 uint128_t;
typedef struct { uint8_t bytes[108]; } int864_t;
typedef struct { uint8_t bytes[32]; } int256_t;
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
int32_t __asm_in_135(uint16_t port);
char __asm_in_136(uint16_t port);
char __asm_in_137(uint16_t port);
int32_t __asm_in_138(uint16_t port);
char __asm_insb(uint16_t port);
int32_t __asm_insd(uint16_t port);
void __asm_out(uint16_t port, char value);
void __asm_out_133(uint16_t port, int32_t value);
void __asm_out_134(uint16_t port, int32_t value);
void __asm_out_135(uint16_t port, int32_t value);
void __asm_out_136(uint16_t port, int32_t value);
void __asm_out_137(uint16_t port, char value);
void __asm_out_138(uint16_t port, char value);
void __asm_out_139(uint16_t port, int32_t value);
void __asm_outsb(uint16_t port, char value);
void __asm_outsd(uint16_t port, int32_t value);
uint8_t __readfsbyte(int64_t offset);
uint32_t __readfsdword(int64_t offset);
uint64_t __readfsqword(int64_t offset);
uint8_t __readgsbyte(int64_t offset);
uint32_t __readgsdword(int64_t offset);
uint64_t __readgsqword(int64_t offset);
void __writefsbyte(int64_t offset, uint8_t value);
void __writegsbyte(int64_t offset, uint8_t value);
void __writegsdword(int64_t offset, uint32_t value);
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
int64_t unknown_b6ccb9(void);
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
void __asm_rcl_133(int32_t value);
void __asm_rep_movsb_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_stosb_memset(char *dst, char value, int64_t count);
void __asm_rep_stosd_memset(char *dst, int32_t value, int64_t count);
void __asm_rep_stosq_memset(char *dst, int64_t value, int64_t count);
void __asm_rep_movsd_memcpy(char *dst, char *src, int64_t count);
void __asm_rep_movsq_memcpy(char *dst, char *src, int64_t count);
int64_t __asm_hlt();
void __asm_clts(void);
int64_t __asm_mfence();
void __asm_pause(void);
int64_t __asm_rsm(void);
int64_t __asm_emms(void);
int64_t __asm_sldt(void);
int64_t __asm_wait(...);
void __asm_fbld(float80_t value);
float80_t __asm_fbstp(float80_t value);
int64_t __pseudo_get_significand(float80_t value);
int64_t __pseudo_get_exponent(float80_t value);
int864_t __asm_fnsave(void);
void __asm_frstor(int864_t value);
void __asm_fldenv(int224_t value);
int64_t __asm_fnstenv();
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
int128_t __asm_vdivpd(int128_t left, int128_t right);
int128_t __asm_divsd(int128_t left, int64_t right);
int128_t __asm_divsd_133(int128_t left, int128_t right);
int128_t __asm_pclmulqdq(int128_t left, int128_t right, int imm);
int128_t __asm_pcmpgtb(int128_t left, int128_t right);
int256_t __asm_vpcmpeqw(int256_t left, int256_t right);
int256_t __asm_vprord(int256_t value, int count);
int256_t __asm_vpaddd(int256_t left, int256_t right);
int256_t __asm_vpxord(int256_t left, int256_t right);
int128_t __asm_pshufd(int128_t value, int imm);
int128_t __asm_psadbw(int128_t left, int128_t right);
int128_t __asm_psrldq(int128_t value, int count);
int128_t __asm_pslldq(int128_t value, int count);
int128_t __asm_vpunpckhdq(int128_t left, int128_t right);
int128_t __asm_punpckldq(int128_t left, int128_t right);
int128_t __asm_punpcklqdq(int128_t left, int128_t right);
int128_t __asm_psllq(int128_t value, int count);
int128_t __asm_psrlq(int128_t value, int count);
int128_t __asm_paddq(int128_t left, int128_t right);
int128_t __asm_pavgw(int128_t left, int128_t right);
int128_t __asm_pmaxub(int128_t left, int128_t right);
int128_t __asm_pmaxsw(int128_t left, int128_t right);
int128_t __asm_packsswb(int128_t left, int128_t right);
int128_t __asm_pmulhw(int128_t left, int128_t right);
int128_t __asm_por(int128_t left, int128_t right);
int128_t __asm_pxor(int128_t left, int128_t right);
int128_t __asm_xorps(int128_t left, int128_t right);
int128_t __asm_addps(int128_t left, int128_t right);
int128_t __asm_maxps(int128_t left, int128_t right);
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

int64_t function_20d8f(void);
int64_t function_20e67(void);
int64_t function_249e5(void);
int64_t function_24a75(void);
int64_t function_24ceb(void);
int64_t function_24cf9(void);
int64_t function_24e69(void);
int64_t function_24ef3(void);
int64_t function_25017(void);
int64_t function_250af(void);
int64_t function_25193(void);
int64_t function_251d5(void);
int64_t function_254fd(void);
int64_t function_25533(void);
int64_t function_255d9(void);
int64_t function_25621(void);
int64_t function_2562b(void);
int64_t function_25645(void);
int64_t function_25711(void);
int64_t function_25da5(void);
int64_t function_260cf(void);
int64_t function_260eb(void);
int64_t function_260f7(void);
int64_t function_26105(void);
int64_t function_261a3(void);
int64_t function_27a29(void);
int64_t function_27e79(void);
int64_t function_28495(void);
int64_t function_28a89(void);
int64_t function_29ce9(void);
int64_t function_29cf3(void);
int64_t function_29f0d(void);
int64_t function_2a25b(void);
int64_t function_2a2ab(void);
int64_t function_2a2f3(void);
int64_t function_2c899(void);
int64_t function_2ccd5(void);
int64_t function_3601b(void);
int64_t function_3602b(void);
int64_t function_3609f(void);
int64_t function_36915(void);
int64_t function_36965(void);
int64_t function_3698f(void);
int64_t function_36a31(void);
int64_t function_36b13(void);
int64_t function_36d97(void);
int64_t function_38041(void);
int64_t function_3ae23(void);
int64_t function_4482d(void);
int64_t function_44cad(void);
int64_t function_45787(void);
int64_t function_45793(void);
int64_t function_470df(void);
int64_t function_474e5(void);
int64_t function_47517(void);
int64_t function_475dd(void);
int64_t function_4765f(void);
int64_t function_4a41d(void);
int64_t function_4a6e5(void);
int64_t function_4aa61(void);
int64_t function_4aa9f(void);
int64_t function_4ad77(void);

// Address range: 0x20d8f - 0x20d90
int64_t function_20d8f(void) {
    // 0x20d8f
    int64_t result; // 0x20d8f
    return result;
}

// Address range: 0x20e67 - 0x20e68
int64_t function_20e67(void) {
    // 0x20e67
    int64_t result; // 0x20e67
    return result;
}

// Address range: 0x249e5 - 0x249e6
int64_t function_249e5(void) {
    // 0x249e5
    int64_t result; // 0x249e5
    return result;
}

// Address range: 0x24a75 - 0x24a76
int64_t function_24a75(void) {
    // 0x24a75
    int64_t result; // 0x24a75
    return result;
}

// Address range: 0x24ceb - 0x24cec
int64_t function_24ceb(void) {
    // 0x24ceb
    int64_t result; // 0x24ceb
    return result;
}

// Address range: 0x24cf9 - 0x24cfa
int64_t function_24cf9(void) {
    // 0x24cf9
    int64_t result; // 0x24cf9
    return result;
}

// Address range: 0x24e69 - 0x24e6a
int64_t function_24e69(void) {
    // 0x24e69
    int64_t result; // 0x24e69
    return result;
}

// Address range: 0x24ef3 - 0x24ef4
int64_t function_24ef3(void) {
    // 0x24ef3
    int64_t result; // 0x24ef3
    return result;
}

// Address range: 0x25017 - 0x25018
int64_t function_25017(void) {
    // 0x25017
    int64_t result; // 0x25017
    return result;
}

// Address range: 0x250af - 0x250b0
int64_t function_250af(void) {
    // 0x250af
    int64_t result; // 0x250af
    return result;
}

// Address range: 0x25193 - 0x25194
int64_t function_25193(void) {
    // 0x25193
    int64_t result; // 0x25193
    return result;
}

// Address range: 0x251d5 - 0x251d6
int64_t function_251d5(void) {
    // 0x251d5
    int64_t result; // 0x251d5
    return result;
}

// Address range: 0x254fd - 0x254fe
int64_t function_254fd(void) {
    // 0x254fd
    int64_t result; // 0x254fd
    return result;
}

// Address range: 0x25533 - 0x25534
int64_t function_25533(void) {
    // 0x25533
    int64_t result; // 0x25533
    return result;
}

// Address range: 0x255d9 - 0x255da
int64_t function_255d9(void) {
    // 0x255d9
    int64_t result; // 0x255d9
    return result;
}

// Address range: 0x25621 - 0x25622
int64_t function_25621(void) {
    // 0x25621
    int64_t result; // 0x25621
    return result;
}

// Address range: 0x2562b - 0x2562c
int64_t function_2562b(void) {
    // 0x2562b
    int64_t result; // 0x2562b
    return result;
}

// Address range: 0x25645 - 0x25646
int64_t function_25645(void) {
    // 0x25645
    int64_t result; // 0x25645
    return result;
}

// Address range: 0x25711 - 0x25712
int64_t function_25711(void) {
    // 0x25711
    int64_t result; // 0x25711
    return result;
}

// Address range: 0x25da5 - 0x25da6
int64_t function_25da5(void) {
    // 0x25da5
    int64_t result; // 0x25da5
    return result;
}

// Address range: 0x260cf - 0x260d0
int64_t function_260cf(void) {
    // 0x260cf
    int64_t result; // 0x260cf
    return result;
}

// Address range: 0x260eb - 0x260ec
int64_t function_260eb(void) {
    // 0x260eb
    int64_t result; // 0x260eb
    return result;
}

// Address range: 0x260f7 - 0x260f8
int64_t function_260f7(void) {
    // 0x260f7
    int64_t result; // 0x260f7
    return result;
}

// Address range: 0x26105 - 0x26106
int64_t function_26105(void) {
    // 0x26105
    int64_t result; // 0x26105
    return result;
}

// Address range: 0x261a3 - 0x261a4
int64_t function_261a3(void) {
    // 0x261a3
    int64_t result; // 0x261a3
    return result;
}

// Address range: 0x27a29 - 0x27a2a
int64_t function_27a29(void) {
    // 0x27a29
    int64_t result; // 0x27a29
    return result;
}

// Address range: 0x27e79 - 0x27e7a
int64_t function_27e79(void) {
    // 0x27e79
    int64_t result; // 0x27e79
    return result;
}

// Address range: 0x28495 - 0x28496
int64_t function_28495(void) {
    // 0x28495
    int64_t result; // 0x28495
    return result;
}

// Address range: 0x28a89 - 0x28a8a
int64_t function_28a89(void) {
    // 0x28a89
    int64_t result; // 0x28a89
    return result;
}

// Address range: 0x29ce9 - 0x29cea
int64_t function_29ce9(void) {
    // 0x29ce9
    int64_t result; // 0x29ce9
    return result;
}

// Address range: 0x29cf3 - 0x29cf4
int64_t function_29cf3(void) {
    // 0x29cf3
    int64_t result; // 0x29cf3
    return result;
}

// Address range: 0x29f0d - 0x29f0e
int64_t function_29f0d(void) {
    // 0x29f0d
    int64_t result; // 0x29f0d
    return result;
}

// Address range: 0x2a25b - 0x2a25c
int64_t function_2a25b(void) {
    // 0x2a25b
    int64_t result; // 0x2a25b
    return result;
}

// Address range: 0x2a2ab - 0x2a2ac
int64_t function_2a2ab(void) {
    // 0x2a2ab
    int64_t result; // 0x2a2ab
    return result;
}

// Address range: 0x2a2f3 - 0x2a2f4
int64_t function_2a2f3(void) {
    // 0x2a2f3
    int64_t result; // 0x2a2f3
    return result;
}

// Address range: 0x2c899 - 0x2c89a
int64_t function_2c899(void) {
    // 0x2c899
    int64_t result; // 0x2c899
    return result;
}

// Address range: 0x2ccd5 - 0x2ccd6
int64_t function_2ccd5(void) {
    // 0x2ccd5
    int64_t result; // 0x2ccd5
    return result;
}

// Address range: 0x3601b - 0x3601c
int64_t function_3601b(void) {
    // 0x3601b
    int64_t result; // 0x3601b
    return result;
}

// Address range: 0x3602b - 0x3602c
int64_t function_3602b(void) {
    // 0x3602b
    int64_t result; // 0x3602b
    return result;
}

// Address range: 0x3609f - 0x360a0
int64_t function_3609f(void) {
    // 0x3609f
    int64_t result; // 0x3609f
    return result;
}

// Address range: 0x36915 - 0x36916
int64_t function_36915(void) {
    // 0x36915
    int64_t result; // 0x36915
    return result;
}

// Address range: 0x36965 - 0x36966
int64_t function_36965(void) {
    // 0x36965
    int64_t result; // 0x36965
    return result;
}

// Address range: 0x3698f - 0x36990
int64_t function_3698f(void) {
    // 0x3698f
    int64_t result; // 0x3698f
    return result;
}

// Address range: 0x36a31 - 0x36a32
int64_t function_36a31(void) {
    // 0x36a31
    int64_t result; // 0x36a31
    return result;
}

// Address range: 0x36b13 - 0x36b14
int64_t function_36b13(void) {
    // 0x36b13
    int64_t result; // 0x36b13
    return result;
}

// Address range: 0x36d97 - 0x36d98
int64_t function_36d97(void) {
    // 0x36d97
    int64_t result; // 0x36d97
    return result;
}

// Address range: 0x38041 - 0x38042
int64_t function_38041(void) {
    // 0x38041
    int64_t result; // 0x38041
    return result;
}

// Address range: 0x3ae23 - 0x3ae24
int64_t function_3ae23(void) {
    // 0x3ae23
    int64_t result; // 0x3ae23
    return result;
}

// Address range: 0x4482d - 0x4482e
int64_t function_4482d(void) {
    // 0x4482d
    int64_t result; // 0x4482d
    return result;
}

// Address range: 0x44cad - 0x44cae
int64_t function_44cad(void) {
    // 0x44cad
    int64_t result; // 0x44cad
    return result;
}

// Address range: 0x45787 - 0x45788
int64_t function_45787(void) {
    // 0x45787
    int64_t result; // 0x45787
    return result;
}

// Address range: 0x45793 - 0x45794
int64_t function_45793(void) {
    // 0x45793
    int64_t result; // 0x45793
    return result;
}

// Address range: 0x470df - 0x470e0
int64_t function_470df(void) {
    // 0x470df
    int64_t result; // 0x470df
    return result;
}

// Address range: 0x474e5 - 0x474e6
int64_t function_474e5(void) {
    // 0x474e5
    int64_t result; // 0x474e5
    return result;
}

// Address range: 0x47517 - 0x47518
int64_t function_47517(void) {
    // 0x47517
    int64_t result; // 0x47517
    return result;
}

// Address range: 0x475dd - 0x475de
int64_t function_475dd(void) {
    // 0x475dd
    int64_t result; // 0x475dd
    return result;
}

// Address range: 0x4765f - 0x47660
int64_t function_4765f(void) {
    // 0x4765f
    int64_t result; // 0x4765f
    return result;
}

// Address range: 0x4a41d - 0x4a41e
int64_t function_4a41d(void) {
    // 0x4a41d
    int64_t result; // 0x4a41d
    return result;
}

// Address range: 0x4a6e5 - 0x4a6e6
int64_t function_4a6e5(void) {
    // 0x4a6e5
    int64_t result; // 0x4a6e5
    return result;
}

// Address range: 0x4aa61 - 0x4aa62
int64_t function_4aa61(void) {
    // 0x4aa61
    int64_t result; // 0x4aa61
    return result;
}

// Address range: 0x4aa9f - 0x4aaa0
int64_t function_4aa9f(void) {
    // 0x4aa9f
    int64_t result; // 0x4aa9f
    return result;
}

// Address range: 0x4ad77 - 0x4ad78
int64_t function_4ad77(void) {
    // 0x4ad77
    int64_t result; // 0x4ad77
    return result;
}
