/*
 * Targeted RetDec C for native executable gap queue batch 6637.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2869b-0x286ac rank=- name=- kind=- bytes=- uncovered=-
 *   0x4da72-0x4da82 rank=- name=- kind=- bytes=- uncovered=-
 *   0x7215b-0x7216c rank=- name=- kind=- bytes=- uncovered=-
 *   0x19edc5-0x19edd5 rank=- name=- kind=- bytes=- uncovered=-
 *   0x1f40e8-0x1f40f8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x2debee-0x2debfe rank=- name=- kind=- bytes=- uncovered=-
 *   0x2e03de-0x2e03ee rank=- name=- kind=- bytes=- uncovered=-
 *   0x496b2f-0x496b40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x496bbf-0x496bd0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x496cb1-0x496cc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49a380-0x49a390 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a48e0-0x4a48f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a98a0-0x4a98b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ab36f-0x4ab380 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4acb8f-0x4acba0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ad290-0x4ad2a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ad440-0x4ad450 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b1c91-0x4b1ca0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4baf31-0x4baf40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bbb00-0x4bbb10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bbfe0-0x4bbff0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bf961-0x4bf970 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c1bb0-0x4c1bc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c2a10-0x4c2a20 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c3131-0x4c3140 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c31b0-0x4c31c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c3231-0x4c3240 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c3500-0x4c3510 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c3580-0x4c3590 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c4610-0x4c4620 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c69d1-0x4c69e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c8440-0x4c8450 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c8ee1-0x4c8ef0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cb551-0x4cb560 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cc8f0-0x4cc900 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cd8f0-0x4cd900 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cdee1-0x4cdef0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ce8e1-0x4ce8f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d23e0-0x4d23f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d2f40-0x4d2f50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d4781-0x4d4790 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d8cb1-0x4d8cc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d9ea1-0x4d9eb0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4dcbb9-0x4dcbc9 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ee680-0x4ee690 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ee831-0x4ee840 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ee860-0x4ee870 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ee9b0-0x4ee9c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4efcd1-0x4efce0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f1a11-0x4f1a20 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f5061-0x4f5070 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fd6c1-0x4fd6d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50e8e1-0x50e8f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54ea81-0x54ea90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54fa91-0x54faa0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5582f0-0x558300 rank=- name=- kind=- bytes=- uncovered=-
 *   0x567a01-0x567a10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x567de1-0x567df0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x567f10-0x567f20 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5689c1-0x5689d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x572400-0x572410 rank=- name=- kind=- bytes=- uncovered=-
 *   0x579d71-0x579d80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57a080-0x57a090 rank=- name=- kind=- bytes=- uncovered=-
 *   0x582b11-0x582b20 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g1;
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

int64_t function_19edc5(int64_t a1, int64_t a2);
int64_t function_19edca(void);
int64_t function_1f40e8(int64_t a1);
int64_t function_2029339();
int64_t function_2869b(int64_t a1);
int64_t function_286a4(int64_t a1);
int64_t function_2debee(void);
int64_t function_2e03ba();
int64_t function_2e03de(void);
int64_t function_2e03e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_496ac7();
int64_t function_496b2f(void);
int64_t function_496b30(int64_t a1);
int64_t function_496b57();
int64_t function_496bbf(void);
int64_t function_496bc0(int64_t a1);
int64_t function_496cb1(void);
int64_t function_49a380(void);
int64_t function_4a488c();
int64_t function_4a48e0(void);
int64_t function_4a98a0(int64_t a1);
int64_t function_4ab307();
int64_t function_4ab36f(void);
int64_t function_4ab370(int64_t a1);
int64_t function_4acb66();
int64_t function_4acb8f(void);
int64_t function_4acb90(void);
int64_t function_4ad239();
int64_t function_4ad290(void);
int64_t function_4ad431();
int64_t function_4ad440(int64_t a1);
int64_t function_4ad443(void);
int64_t function_4b0ac0();
int64_t function_4b1c91(void);
int64_t function_4ba96f();
int64_t function_4baf31(void);
int64_t function_4bbae5();
int64_t function_4bbb00(void);
int64_t function_4bbb07(void);
int64_t function_4bbfe0(void);
int64_t function_4bf940();
int64_t function_4bf961(void);
int64_t function_4bf963(void);
int64_t function_4c1ba0();
int64_t function_4c1bb0(void);
int64_t function_4c1ea0();
int64_t function_4c2946();
int64_t function_4c2a10(void);
int64_t function_4c3131(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4c31b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4c3231(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4c3500(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4c3580(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4c45f5();
int64_t function_4c4610(void);
int64_t function_4c4611(void);
int64_t function_4c69d1(void);
int64_t function_4c69e0();
int64_t function_4c8376();
int64_t function_4c8440(void);
int64_t function_4c8ee1(int64_t a1, int64_t a2);
int64_t function_4cb551(void);
int64_t function_4cb560();
int64_t function_4cc826();
int64_t function_4cc8f0(void);
int64_t function_4ccde0();
int64_t function_4cd826();
int64_t function_4cd8f0(void);
int64_t function_4cdee1(void);
int64_t function_4ce8e1(void);
int64_t function_4d2319();
int64_t function_4d23e0(void);
int64_t function_4d2f00();
int64_t function_4d2f40(void);
int64_t function_4d4781(void);
int64_t function_4d4785(int64_t a1);
int64_t function_4d8cb1(void);
int64_t function_4d9ea1(void);
int64_t function_4da06();
int64_t function_4da72(int64_t a1, int64_t a2);
int64_t function_4dcbb9(void);
int64_t function_4ee680(void);
int64_t function_4ee831(void);
int64_t function_4ee860(void);
int64_t function_4ee9b0(void);
int64_t function_4efcd1(void);
int64_t function_4f196c();
int64_t function_4f1a11(void);
int64_t function_4f5061(void);
int64_t function_4fd6c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_50e8e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_54ea81(void);
int64_t function_54fa52();
int64_t function_54fa91(void);
int64_t function_5574b0();
int64_t function_5582f0(void);
int64_t function_567a01(void);
int64_t function_567a08(void);
int64_t function_567de1(void);
int64_t function_567e5c();
int64_t function_567f10(void);
int64_t function_5689c1(void);
int64_t function_5723d7();
int64_t function_572400(void);
int64_t function_579d71(void);
int64_t function_57a07d();
int64_t function_57a080(int64_t a1);
int64_t function_581610();
int64_t function_582b11(void);
int64_t function_582b14(void);
int64_t function_71e86();
int64_t function_7215b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_ffffffffe4020499();
int64_t unknown_34281cea();
int64_t unknown_670d00e0();
int64_t unknown_ffffffffd3cc5fef();

// Address range: 0x2869b - 0x286a4
int64_t function_2869b(int64_t a1) {
    // 0x2869b
    *(char *)(a1 + (int64_t)&g1) = 1;
    int64_t result; // 0x2869b
    return result;
}

// Address range: 0x286a4 - 0x286ab
int64_t function_286a4(int64_t a1) {
    unsigned char v1 = *(char *)(a1 + (int64_t)&g1); // 0x286a4
    int64_t v2; // 0x286a4
    return v2 & -256 | (int64_t)v1;
}

// Address range: 0x4da72 - 0x4da82
int64_t function_4da72(int64_t a1, int64_t a2) {
    // 0x4da72
    function_4da06(a2);
    return 0;
}

// Address range: 0x7215b - 0x7216b
int64_t function_7215b(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x7215b
    return function_71e86();
}

// Address range: 0x19edc5 - 0x19edc6
int64_t function_19edc5(int64_t a1, int64_t a2) {
    // 0x19edc5
    int64_t result; // 0x19edc5
    return result;
}

// Address range: 0x19edca - 0x19edcf
int64_t function_19edca(void) {
    // 0x19edca
    return function_2029339();
}

// Address range: 0x1f40e8 - 0x1f40f4
int64_t function_1f40e8(int64_t a1) {
    // 0x1f40e8
    bool v1; // 0x1f40e8
    int64_t result = unknown_ffffffffd3cc5fef((v1 ? -1 : 1) + a1); // 0x1f40e9
    *(int32_t *)0x207f2be = *(int32_t *)0x207f2be + 1;
    return result;
}

// Address range: 0x2debee - 0x2debf0
int64_t function_2debee(void) {
    // 0x2debee
    int64_t v1; // 0x2debee
    int64_t result = v1;
    *(int32_t *)result = 2 * (int32_t)result;
    return result;
}

// Address range: 0x2e03de - 0x2e03df
int64_t function_2e03de(void) {
    // 0x2e03de
    int64_t result; // 0x2e03de
    return result;
}

// Address range: 0x2e03e0 - 0x2e03ee
int64_t function_2e03e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x2e03e0
    bool v1; // 0x2e03e0
    if (a4 != 1 && !v1) {
        function_2e03ba();
    }
    // 0x2e03e2
    unknown_34281cea();
    return function_ffffffffe4020499();
}

// Address range: 0x496b2f - 0x496b30
int64_t function_496b2f(void) {
    // 0x496b2f
    int64_t result; // 0x496b2f
    return result;
}

// Address range: 0x496b30 - 0x496b37
int64_t function_496b30(int64_t a1) {
    // 0x496b30
    return function_496ac7((int32_t)a1 + 4);
}

// Address range: 0x496bbf - 0x496bc0
int64_t function_496bbf(void) {
    // 0x496bbf
    int64_t result; // 0x496bbf
    return result;
}

// Address range: 0x496bc0 - 0x496bc7
int64_t function_496bc0(int64_t a1) {
    // 0x496bc0
    return function_496b57((int32_t)a1 + 4);
}

// Address range: 0x496cb1 - 0x496cc0
int64_t function_496cb1(void) {
    // 0x496cb1
    int64_t result; // 0x496cb1
    return result;
}

// Address range: 0x49a380 - 0x49a390
int64_t function_49a380(void) {
    // 0x49a380
    return unknown_670d00e0();
}

// Address range: 0x4a48e0 - 0x4a48ee
int64_t function_4a48e0(void) {
    // 0x4a48e0
    return function_4a488c();
}

// Address range: 0x4a98a0 - 0x4a98aa
int64_t function_4a98a0(int64_t a1) {
    // 0x4a98a0
    int64_t v1; // 0x4a98a0
    return v1 < (int64_t)*(int32_t *)(v1 + 12) ? 0xffffffff : 0;
}

// Address range: 0x4ab36f - 0x4ab370
int64_t function_4ab36f(void) {
    // 0x4ab36f
    int64_t result; // 0x4ab36f
    return result;
}

// Address range: 0x4ab370 - 0x4ab377
int64_t function_4ab370(int64_t a1) {
    // 0x4ab370
    return function_4ab307((int32_t)a1 + 4);
}

// Address range: 0x4acb8f - 0x4acb90
int64_t function_4acb8f(void) {
    // 0x4acb8f
    int64_t result; // 0x4acb8f
    return result;
}

// Address range: 0x4acb90 - 0x4acb99
int64_t function_4acb90(void) {
    // 0x4acb90
    return function_4acb66();
}

// Address range: 0x4ad290 - 0x4ad297
int64_t function_4ad290(void) {
    // 0x4ad290
    return function_4ad239();
}

// Address range: 0x4ad440 - 0x4ad443
int64_t function_4ad440(int64_t a1) {
    // 0x4ad440
    int64_t result; // 0x4ad440
    return result;
}

// Address range: 0x4ad443 - 0x4ad447
int64_t function_4ad443(void) {
    // 0x4ad443
    return function_4ad431();
}

// Address range: 0x4b1c91 - 0x4b1ca0
int64_t function_4b1c91(void) {
    // 0x4b1c91
    int64_t result; // 0x4b1c91
    return result;
}

// Address range: 0x4baf31 - 0x4baf3d
int64_t function_4baf31(void) {
    // 0x4baf31
    int64_t v1; // 0x4baf31
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    function_4b0ac0();
    return function_4ba96f();
}

// Address range: 0x4bbb00 - 0x4bbb07
int64_t function_4bbb00(void) {
    // 0x4bbb00
    return function_4bbae5();
}

// Address range: 0x4bbb07 - 0x4bbb0d
int64_t function_4bbb07(void) {
    // 0x4bbb07
    return 0xffffb080;
}

// Address range: 0x4bbfe0 - 0x4bbfe4
int64_t function_4bbfe0(void) {
    // 0x4bbfe0
    int64_t result; // 0x4bbfe0
    return result;
}

// Address range: 0x4bf961 - 0x4bf962
int64_t function_4bf961(void) {
    // 0x4bf961
    int64_t result; // 0x4bf961
    return result;
}

// Address range: 0x4bf963 - 0x4bf965
int64_t function_4bf963(void) {
    // 0x4bf963
    return function_4bf940();
}

// Address range: 0x4c1bb0 - 0x4c1bb7
int64_t function_4c1bb0(void) {
    // 0x4c1bb0
    return function_4c1ba0();
}

// Address range: 0x4c2a10 - 0x4c2a1c
int64_t function_4c2a10(void) {
    // 0x4c2a10
    int64_t v1; // 0x4c2a10
    function_4c1ea0(&v1);
    return function_4c2946();
}

// Address range: 0x4c3131 - 0x4c3140
int64_t function_4c3131(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4c3131
    return 0xffffffd2;
}

// Address range: 0x4c31b0 - 0x4c31c0
int64_t function_4c31b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4c31b0
    return 0xffffffd2;
}

// Address range: 0x4c3231 - 0x4c3240
int64_t function_4c3231(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4c3231
    return 0xffffffd2;
}

// Address range: 0x4c3500 - 0x4c3510
int64_t function_4c3500(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4c3500
    return 0xffffffd2;
}

// Address range: 0x4c3580 - 0x4c3590
int64_t function_4c3580(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4c3580
    return 0xffffffd2;
}

// Address range: 0x4c4610 - 0x4c4611
int64_t function_4c4610(void) {
    // 0x4c4610
    int64_t result; // 0x4c4610
    return result;
}

// Address range: 0x4c4611 - 0x4c461f
int64_t function_4c4611(void) {
    // 0x4c4611
    return function_4c45f5();
}

// Address range: 0x4c69d1 - 0x4c69e0
int64_t function_4c69d1(void) {
    // 0x4c69d1
    int64_t result; // 0x4c69d1
    return result;
}

// Address range: 0x4c8440 - 0x4c844c
int64_t function_4c8440(void) {
    // 0x4c8440
    int64_t v1; // 0x4c8440
    function_4c69e0(&v1);
    return function_4c8376();
}

// Address range: 0x4c8ee1 - 0x4c8ee4
int64_t function_4c8ee1(int64_t a1, int64_t a2) {
    // 0x4c8ee1
    int64_t result; // 0x4c8ee1
    return result;
}

// Address range: 0x4cb551 - 0x4cb560
int64_t function_4cb551(void) {
    // 0x4cb551
    int64_t result; // 0x4cb551
    return result;
}

// Address range: 0x4cc8f0 - 0x4cc8fc
int64_t function_4cc8f0(void) {
    // 0x4cc8f0
    int64_t v1; // 0x4cc8f0
    function_4cb560(&v1);
    return function_4cc826();
}

// Address range: 0x4cd8f0 - 0x4cd8fc
int64_t function_4cd8f0(void) {
    // 0x4cd8f0
    int64_t v1; // 0x4cd8f0
    function_4ccde0(&v1);
    return function_4cd826();
}

// Address range: 0x4cdee1 - 0x4cdef0
int64_t function_4cdee1(void) {
    // 0x4cdee1
    int64_t v1; // 0x4cdee1
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x4ce8e1 - 0x4ce8f0
int64_t function_4ce8e1(void) {
    // 0x4ce8e1
    int64_t result; // 0x4ce8e1
    return result;
}

// Address range: 0x4d23e0 - 0x4d23ea
int64_t function_4d23e0(void) {
    // 0x4d23e0
    return function_4d2319();
}

// Address range: 0x4d2f40 - 0x4d2f48
int64_t function_4d2f40(void) {
    // 0x4d2f40
    __asm_in(-8);
    return function_4d2f00();
}

// Address range: 0x4d4781 - 0x4d4782
int64_t function_4d4781(void) {
    // 0x4d4781
    int64_t v1; // 0x4d4781
    return (int64_t)&v1;
}

// Address range: 0x4d4785 - 0x4d4787
int64_t function_4d4785(int64_t a1) {
    // 0x4d4785
    int64_t result; // 0x4d4785
    return result;
}

// Address range: 0x4d8cb1 - 0x4d8cc0
int64_t function_4d8cb1(void) {
    // 0x4d8cb1
    int64_t result; // 0x4d8cb1
    return result;
}

// Address range: 0x4d9ea1 - 0x4d9eb0
int64_t function_4d9ea1(void) {
    // 0x4d9ea1
    int64_t result; // 0x4d9ea1
    return result;
}

// Address range: 0x4dcbb9 - 0x4dcbc6
int64_t function_4dcbb9(void) {
    // 0x4dcbb9
    int256_t v1; // 0x4dcbb9
    __asm_vpaddd(v1, v1);
    __asm_vpaddd(v1, v1);
    int64_t v2; // 0x4dcbb9
    return v2 & -160;
}

// Address range: 0x4ee680 - 0x4ee683
int64_t function_4ee680(void) {
    // 0x4ee680
    return 0;
}

// Address range: 0x4ee831 - 0x4ee840
int64_t function_4ee831(void) {
    // 0x4ee831
    int64_t result; // 0x4ee831
    return result;
}

// Address range: 0x4ee860 - 0x4ee863
int64_t function_4ee860(void) {
    // 0x4ee860
    return 0;
}

// Address range: 0x4ee9b0 - 0x4ee9b3
int64_t function_4ee9b0(void) {
    // 0x4ee9b0
    return 0;
}

// Address range: 0x4efcd1 - 0x4efce0
int64_t function_4efcd1(void) {
    // 0x4efcd1
    int64_t result; // 0x4efcd1
    return result;
}

// Address range: 0x4f1a11 - 0x4f1a16
int64_t function_4f1a11(void) {
    // 0x4f1a11
    return function_4f196c();
}

// Address range: 0x4f5061 - 0x4f5070
int64_t function_4f5061(void) {
    // 0x4f5061
    int64_t result; // 0x4f5061
    return result;
}

// Address range: 0x4fd6c1 - 0x4fd6c6
int64_t function_4fd6c1(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4fd6c1
    int64_t result; // 0x4fd6c1
    return result;
}

// Address range: 0x50e8e1 - 0x50e8e5
int64_t function_50e8e1(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x50e8e1
    int64_t result; // 0x50e8e1
    return result;
}

// Address range: 0x54ea81 - 0x54ea90
int64_t function_54ea81(void) {
    // 0x54ea81
    int64_t result; // 0x54ea81
    return result;
}

// Address range: 0x54fa91 - 0x54fa93
int64_t function_54fa91(void) {
    // 0x54fa91
    return function_54fa52();
}

// Address range: 0x5582f0 - 0x5582f5
int64_t function_5582f0(void) {
    // 0x5582f0
    return function_5574b0();
}

// Address range: 0x567a01 - 0x567a02
int64_t function_567a01(void) {
    // 0x567a01
    int64_t result; // 0x567a01
    return result;
}

// Address range: 0x567a08 - 0x567a0a
int64_t function_567a08(void) {
    // 0x567a08
    int64_t result; // 0x567a08
    return result;
}

// Address range: 0x567de1 - 0x567de6
int64_t function_567de1(void) {
    // 0x567de1
    int64_t result; // 0x567de1
    return result;
}

// Address range: 0x567f10 - 0x567f1e
int64_t function_567f10(void) {
    // 0x567f10
    return function_567e5c();
}

// Address range: 0x5689c1 - 0x5689c2
int64_t function_5689c1(void) {
    // 0x5689c1
    int64_t result; // 0x5689c1
    return result;
}

// Address range: 0x572400 - 0x572402
int64_t function_572400(void) {
    // 0x572400
    return function_5723d7();
}

// Address range: 0x579d71 - 0x579d80
int64_t function_579d71(void) {
    // 0x579d71
    int64_t result; // 0x579d71
    return result;
}

// Address range: 0x57a080 - 0x57a087
int64_t function_57a080(int64_t a1) {
    // 0x57a080
    bool v1; // 0x57a080
    if (!v1) {
        function_57a07d();
    }
    // 0x57a082
    return *(int64_t *)(a1 + 8);
}

// Address range: 0x582b11 - 0x582b12
int64_t function_582b11(void) {
    // 0x582b11
    int64_t result; // 0x582b11
    return result;
}

// Address range: 0x582b14 - 0x582b19
int64_t function_582b14(void) {
    // 0x582b14
    return function_581610();
}
