/*
 * Targeted RetDec C for native executable gap queue batch 6641.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x216f3-0x21700 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3e042-0x3e04f rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c9ee-0x4c9fa rank=- name=- kind=- bytes=- uncovered=-
 *   0x6585b-0x65868 rank=- name=- kind=- bytes=- uncovered=-
 *   0x488cf4-0x488d00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48c8f2-0x48c8fe rank=- name=- kind=- bytes=- uncovered=-
 *   0x494dc3-0x494dd0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4967d3-0x4967e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49e954-0x49e960 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49f104-0x49f110 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a8d43-0x4a8d50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ab513-0x4ab520 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ac5e3-0x4ac5f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4aec13-0x4aec20 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b0453-0x4b0460 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b0864-0x4b0870 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b1584-0x4b1590 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b2674-0x4b2680 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b2984-0x4b2990 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b6264-0x4b6270 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b7803-0x4b7810 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b90a4-0x4b90b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b9594-0x4b95a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ba4d4-0x4ba4e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ba5a3-0x4ba5b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ba6d3-0x4ba6e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bf873-0x4bf880 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bfcc3-0x4bfcd0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c35d3-0x4c35e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c3b04-0x4c3b10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d09d3-0x4d09e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d2263-0x4d2270 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d2c83-0x4d2c90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d2d33-0x4d2d40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d4734-0x4d4740 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d48d3-0x4d48e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ee634-0x4ee640 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ef273-0x4ef280 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4efb73-0x4efb80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4efdb3-0x4efdc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f17e4-0x4f17f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50cc34-0x50cc40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53f754-0x53f760 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53f844-0x53f850 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54e3d4-0x54e3e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x562ac5-0x562ad0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x563634-0x563640 rank=- name=- kind=- bytes=- uncovered=-
 *   0x564b84-0x564b90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x564bd4-0x564be0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x564e25-0x564e30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5659f4-0x565a00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x565f75-0x565f80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x566884-0x566890 rank=- name=- kind=- bytes=- uncovered=-
 *   0x566af5-0x566b00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x569135-0x569140 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56b724-0x56b730 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56b9e5-0x56b9f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56ba35-0x56ba40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56ec25-0x56ec30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56ec75-0x56ec80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56fc64-0x56fc70 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56fcd4-0x56fce0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x578375-0x578380 rank=- name=- kind=- bytes=- uncovered=-
 *   0x579ff4-0x57a000 rank=- name=- kind=- bytes=- uncovered=-
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
extern int g2;
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

int64_t function_216f3(void);
int64_t function_3e042(void);
int64_t function_3e047(void);
int64_t function_488cf4(void);
int64_t function_48c8f2(int64_t a1, int64_t a2);
int64_t function_494dc3(void);
int64_t function_4967d3(int64_t a1);
int64_t function_49e954(int64_t a1, int64_t a2, int64_t a3);
int64_t function_49f104(void);
int64_t function_4a8d43(void);
int64_t function_4ab513(void);
int64_t function_4ac5c9();
int64_t function_4ac5e3(void);
int64_t function_4ac5e5(void);
int64_t function_4aec13(void);
int64_t function_4b044f();
int64_t function_4b0453(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4b0864(void);
int64_t function_4b153d();
int64_t function_4b1584(void);
int64_t function_4b1586(void);
int64_t function_4b25fa();
int64_t function_4b2674(void);
int64_t function_4b28fb();
int64_t function_4b2984(void);
int64_t function_4b298b(void);
int64_t function_4b6264(int64_t a1, int64_t a2);
int64_t function_4b7803(void);
int64_t function_4b9029();
int64_t function_4b90a4(void);
int64_t function_4b9523();
int64_t function_4b9594(void);
int64_t function_4b9595(void);
int64_t function_4ba4d4(void);
int64_t function_4ba5a3(int64_t a1);
int64_t function_4ba6d3(int64_t a1);
int64_t function_4bf873(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4bfcc3(void);
int64_t function_4c35d3(void);
int64_t function_4c3b04(void);
int64_t function_4c9ee(int64_t a1);
int64_t function_4d09d3(void);
int64_t function_4d2236();
int64_t function_4d2263(void);
int64_t function_4d2265(void);
int64_t function_4d2267(void);
int64_t function_4d2c83(int64_t a1, int64_t a2);
int64_t function_4d2d33(void);
int64_t function_4d4734(void);
int64_t function_4d48d3(void);
int64_t function_4ee634(void);
int64_t function_4ef273(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6);
int64_t function_4efb73(void);
int64_t function_4efdb3(void);
int64_t function_4f17e4(void);
int64_t function_50cb53();
int64_t function_50cc34(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_50cc38(void);
int64_t function_53f754(void);
int64_t function_53f844(void);
int64_t function_54e3d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_562ac5(void);
int64_t function_563634(void);
int64_t function_564b84(void);
int64_t function_564bd4(void);
int64_t function_564e25(void);
int64_t function_5659f4(void);
int64_t function_565f75(int64_t a1);
int64_t function_566884(void);
int64_t function_566af5(void);
int64_t function_569135(void);
int64_t function_56b724(void);
int64_t function_56b9e5(void);
int64_t function_56ba35(void);
int64_t function_56ec25(void);
int64_t function_56ec75(void);
int64_t function_56fc64(int64_t a1, int64_t a2);
int64_t function_56fcd4(int64_t a1, int64_t a2);
int64_t function_578375(void);
int64_t function_579f99();
int64_t function_579ff4(void);
int64_t function_579ff6(void);
int64_t function_6585b(int64_t a1, int64_t a2, uint64_t a3);
int64_t function_6837a();
int64_t function_72b18();

// Address range: 0x216f3 - 0x216fa
int64_t function_216f3(void) {
    // 0x216f3
    int64_t v1; // 0x216f3
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t result; // 0x216f3
    int64_t v3 = result;
    *(char *)v3 = *(char *)&result + (char)v3;
    return result;
}

// Address range: 0x3e042 - 0x3e047
int64_t function_3e042(void) {
    // 0x3e042
    int64_t v1; // 0x3e042
    free((int64_t *)v1);
    return (int64_t)&g2;
}

// Address range: 0x3e047 - 0x3e04f
int64_t function_3e047(void) {
    // 0x3e047
    return (int64_t)"9.1.15";
}

// Address range: 0x4c9ee - 0x4c9fa
int64_t function_4c9ee(int64_t a1) {
    // 0x4c9ee
    return function_6837a(a1 + (int64_t)&g1);
}

// Address range: 0x6585b - 0x65868
int64_t function_6585b(int64_t a1, int64_t a2, uint64_t a3) {
    int64_t v1 = a2 - a1; // 0x6585e
    int64_t result; // 0x6585b
    if (v1 != 0) {
        // 0x65863
        __asm_rep_stosb_memset((char *)a1, (char)a3, v1);
        int64_t v2; // 0x6585b
        result = v2 & -256 | a3 % 256;
    }
    // 0x65867
    return result;
}

// Address range: 0x488cf4 - 0x488d00
int64_t function_488cf4(void) {
    // 0x488cf4
    int64_t result; // 0x488cf4
    return result;
}

// Address range: 0x48c8f2 - 0x48c8fd
int64_t function_48c8f2(int64_t a1, int64_t a2) {
    // 0x48c8f2
    return function_72b18(a1 + 56, 0);
}

// Address range: 0x494dc3 - 0x494dd0
int64_t function_494dc3(void) {
    // 0x494dc3
    int64_t result; // 0x494dc3
    return result;
}

// Address range: 0x4967d3 - 0x4967d9
int64_t function_4967d3(int64_t a1) {
    // 0x4967d3
    int64_t v1; // 0x4967d3
    int64_t v2 = v1;
    uint32_t result = 2 * (int32_t)v1; // 0x4967d3
    *(char *)v2 = (char)result + (char)v2;
    return result;
}

// Address range: 0x49e954 - 0x49e960
int64_t function_49e954(int64_t a1, int64_t a2, int64_t a3) {
    // 0x49e954
    return a3 & 0xffffffff;
}

// Address range: 0x49f104 - 0x49f10b
int64_t function_49f104(void) {
    // 0x49f104
    int64_t v1; // 0x49f104
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t v3; // 0x49f104
    int64_t v4 = v3;
    *(char *)v4 = *(char *)&v3 + (char)v4;
    return 0;
}

// Address range: 0x4a8d43 - 0x4a8d50
int64_t function_4a8d43(void) {
    // 0x4a8d43
    int64_t result; // 0x4a8d43
    return result;
}

// Address range: 0x4ab513 - 0x4ab520
int64_t function_4ab513(void) {
    // 0x4ab513
    int64_t result; // 0x4ab513
    return result;
}

// Address range: 0x4ac5e3 - 0x4ac5e4
int64_t function_4ac5e3(void) {
    // 0x4ac5e3
    int64_t result; // 0x4ac5e3
    return result;
}

// Address range: 0x4ac5e5 - 0x4ac5e7
int64_t function_4ac5e5(void) {
    // 0x4ac5e5
    return function_4ac5c9();
}

// Address range: 0x4aec13 - 0x4aec20
int64_t function_4aec13(void) {
    // 0x4aec13
    int64_t result; // 0x4aec13
    return result;
}

// Address range: 0x4b0453 - 0x4b0456
int64_t function_4b0453(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4b0453
    int64_t result; // 0x4b0453
    bool v1; // 0x4b0453
    if (a4 != 1 && !v1) {
        result = function_4b044f(a1, a2, a3, a4);
    }
    // 0x4b0455
    return result;
}

// Address range: 0x4b0864 - 0x4b0870
int64_t function_4b0864(void) {
    // 0x4b0864
    int64_t result; // 0x4b0864
    return result;
}

// Address range: 0x4b1584 - 0x4b1585
int64_t function_4b1584(void) {
    // 0x4b1584
    int64_t result; // 0x4b1584
    return result;
}

// Address range: 0x4b1586 - 0x4b1588
int64_t function_4b1586(void) {
    // 0x4b1586
    return function_4b153d();
}

// Address range: 0x4b2674 - 0x4b267f
int64_t function_4b2674(void) {
    // 0x4b2674
    int64_t v1; // 0x4b2674
    int64_t v2 = v1;
    int64_t v3 = v1;
    *(char *)v3 = 2 * (char)v3;
    *(int64_t *)v2 = v2 - 1;
    return function_4b25fa();
}

// Address range: 0x4b2984 - 0x4b298b
int64_t function_4b2984(void) {
    // 0x4b2984
    int64_t result; // 0x4b2984
    int32_t * v1 = (int32_t *)(result - 0x76448b40); // 0x4b2984
    *v1 = *v1 + 1;
    return result;
}

// Address range: 0x4b298b - 0x4b2990
int64_t function_4b298b(void) {
    // 0x4b298b
    return function_4b28fb();
}

// Address range: 0x4b6264 - 0x4b6268
int64_t function_4b6264(int64_t a1, int64_t a2) {
    // 0x4b6264
    int64_t result; // 0x4b6264
    return result;
}

// Address range: 0x4b7803 - 0x4b7810
int64_t function_4b7803(void) {
    // 0x4b7803
    int64_t result; // 0x4b7803
    return result;
}

// Address range: 0x4b90a4 - 0x4b90a8
int64_t function_4b90a4(void) {
    // 0x4b90a4
    return function_4b9029();
}

// Address range: 0x4b9594 - 0x4b9595
int64_t function_4b9594(void) {
    // 0x4b9594
    int64_t result; // 0x4b9594
    return result;
}

// Address range: 0x4b9595 - 0x4b9597
int64_t function_4b9595(void) {
    // 0x4b9595
    return function_4b9523();
}

// Address range: 0x4ba4d4 - 0x4ba4e0
int64_t function_4ba4d4(void) {
    // 0x4ba4d4
    int64_t result; // 0x4ba4d4
    return result;
}

// Address range: 0x4ba5a3 - 0x4ba5aa
int64_t function_4ba5a3(int64_t a1) {
    // 0x4ba5a3
    int64_t v1; // 0x4ba5a3
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t result; // 0x4ba5a3
    int64_t v3 = result;
    *(char *)v3 = *(char *)&result + (char)v3;
    return result;
}

// Address range: 0x4ba6d3 - 0x4ba6da
int64_t function_4ba6d3(int64_t a1) {
    // 0x4ba6d3
    int64_t v1; // 0x4ba6d3
    int64_t v2 = v1;
    *(char *)v2 = (char)v2;
    int64_t result; // 0x4ba6d3
    int64_t v3 = result;
    *(char *)v3 = *(char *)&result + (char)v3;
    return result;
}

// Address range: 0x4bf873 - 0x4bf880
int64_t function_4bf873(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4bf873
    int64_t v1; // 0x4bf873
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    return 0x10000 * (int32_t)v2 >> 16;
}

// Address range: 0x4bfcc3 - 0x4bfcd0
int64_t function_4bfcc3(void) {
    // 0x4bfcc3
    int64_t result; // 0x4bfcc3
    return result;
}

// Address range: 0x4c35d3 - 0x4c35e0
int64_t function_4c35d3(void) {
    // 0x4c35d3
    int64_t result; // 0x4c35d3
    return result;
}

// Address range: 0x4c3b04 - 0x4c3b10
int64_t function_4c3b04(void) {
    // 0x4c3b04
    int64_t result; // 0x4c3b04
    return result;
}

// Address range: 0x4d09d3 - 0x4d09e0
int64_t function_4d09d3(void) {
    // 0x4d09d3
    int64_t result; // 0x4d09d3
    return result;
}

// Address range: 0x4d2263 - 0x4d2264
int64_t function_4d2263(void) {
    // 0x4d2263
    int64_t result; // 0x4d2263
    return result;
}

// Address range: 0x4d2265 - 0x4d2267
int64_t function_4d2265(void) {
    // 0x4d2265
    return function_4d2236();
}

// Address range: 0x4d2267 - 0x4d226e
int64_t function_4d2267(void) {
    // 0x4d2267
    return function_4d2236();
}

// Address range: 0x4d2c83 - 0x4d2c8f
int64_t function_4d2c83(int64_t a1, int64_t a2) {
    // 0x4d2c83
    int64_t result; // 0x4d2c83
    return result;
}

// Address range: 0x4d2d33 - 0x4d2d40
int64_t function_4d2d33(void) {
    // 0x4d2d33
    int64_t result; // 0x4d2d33
    return result;
}

// Address range: 0x4d4734 - 0x4d4740
int64_t function_4d4734(void) {
    // 0x4d4734
    int64_t result; // 0x4d4734
    return result;
}

// Address range: 0x4d48d3 - 0x4d48e0
int64_t function_4d48d3(void) {
    // 0x4d48d3
    int64_t result; // 0x4d48d3
    return result;
}

// Address range: 0x4ee634 - 0x4ee640
int64_t function_4ee634(void) {
    // 0x4ee634
    int64_t result; // 0x4ee634
    return result;
}

// Address range: 0x4ef273 - 0x4ef27d
int64_t function_4ef273(int64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4ef273
    int64_t result; // 0x4ef273
    unsigned char v1 = (char)result;
    bool v2; // 0x4ef273
    char v3 = v2; // 0x4ef273
    unsigned char v4 = v3 + (char)(a3 / 256); // 0x4ef273
    char v5 = v1 - v4; // 0x4ef273
    bool v6 = v2 ? v4 != -1 | v5 - v3 > v1 : v4 > v1; // 0x4ef273
    *(char *)a4 = v5;
    char * v7 = (char *)(result + 93); // 0x4ef275
    *v7 = 128 * (char)v6 | *v7 / 2;
    return result;
}

// Address range: 0x4efb73 - 0x4efb80
int64_t function_4efb73(void) {
    // 0x4efb73
    int64_t result; // 0x4efb73
    return result;
}

// Address range: 0x4efdb3 - 0x4efdc0
int64_t function_4efdb3(void) {
    // 0x4efdb3
    int64_t result; // 0x4efdb3
    return result;
}

// Address range: 0x4f17e4 - 0x4f17f0
int64_t function_4f17e4(void) {
    // 0x4f17e4
    int64_t result; // 0x4f17e4
    return result;
}

// Address range: 0x50cc34 - 0x50cc36
int64_t function_50cc34(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x50cc34
    int64_t result; // 0x50cc34
    return result;
}

// Address range: 0x50cc38 - 0x50cc40
int64_t function_50cc38(void) {
    // 0x50cc38
    return function_50cb53();
}

// Address range: 0x53f754 - 0x53f760
int64_t function_53f754(void) {
    // 0x53f754
    int64_t result; // 0x53f754
    return result;
}

// Address range: 0x53f844 - 0x53f850
int64_t function_53f844(void) {
    // 0x53f844
    int64_t result; // 0x53f844
    return result;
}

// Address range: 0x54e3d4 - 0x54e3e0
int64_t function_54e3d4(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x54e3d4
    int64_t v1; // 0x54e3d4
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t result; // 0x54e3d4
    int64_t v3 = result;
    *(char *)v3 = *(char *)&result + (char)v3;
    return result;
}

// Address range: 0x562ac5 - 0x562ad0
int64_t function_562ac5(void) {
    // 0x562ac5
    int64_t result; // 0x562ac5
    return result;
}

// Address range: 0x563634 - 0x563640
int64_t function_563634(void) {
    // 0x563634
    int64_t result; // 0x563634
    return result;
}

// Address range: 0x564b84 - 0x564b90
int64_t function_564b84(void) {
    // 0x564b84
    int64_t result; // 0x564b84
    return result;
}

// Address range: 0x564bd4 - 0x564be0
int64_t function_564bd4(void) {
    // 0x564bd4
    int64_t result; // 0x564bd4
    return result;
}

// Address range: 0x564e25 - 0x564e30
int64_t function_564e25(void) {
    // 0x564e25
    int64_t result; // 0x564e25
    return result;
}

// Address range: 0x5659f4 - 0x565a00
int64_t function_5659f4(void) {
    // 0x5659f4
    int64_t result; // 0x5659f4
    return result;
}

// Address range: 0x565f75 - 0x565f7a
int64_t function_565f75(int64_t a1) {
    // 0x565f75
    int64_t result; // 0x565f75
    return result;
}

// Address range: 0x566884 - 0x566890
int64_t function_566884(void) {
    // 0x566884
    int64_t result; // 0x566884
    return result;
}

// Address range: 0x566af5 - 0x566b00
int64_t function_566af5(void) {
    // 0x566af5
    int64_t result; // 0x566af5
    return result;
}

// Address range: 0x569135 - 0x569140
int64_t function_569135(void) {
    // 0x569135
    int64_t result; // 0x569135
    return result;
}

// Address range: 0x56b724 - 0x56b725
int64_t function_56b724(void) {
    // 0x56b724
    int64_t result; // 0x56b724
    return result;
}

// Address range: 0x56b9e5 - 0x56b9f0
int64_t function_56b9e5(void) {
    // 0x56b9e5
    int64_t result; // 0x56b9e5
    return result;
}

// Address range: 0x56ba35 - 0x56ba40
int64_t function_56ba35(void) {
    // 0x56ba35
    int64_t result; // 0x56ba35
    return result;
}

// Address range: 0x56ec25 - 0x56ec30
int64_t function_56ec25(void) {
    // 0x56ec25
    int64_t result; // 0x56ec25
    return result;
}

// Address range: 0x56ec75 - 0x56ec80
int64_t function_56ec75(void) {
    // 0x56ec75
    int64_t result; // 0x56ec75
    return result;
}

// Address range: 0x56fc64 - 0x56fc68
int64_t function_56fc64(int64_t a1, int64_t a2) {
    // 0x56fc64
    int64_t result; // 0x56fc64
    return result;
}

// Address range: 0x56fcd4 - 0x56fcd8
int64_t function_56fcd4(int64_t a1, int64_t a2) {
    // 0x56fcd4
    int64_t result; // 0x56fcd4
    return result;
}

// Address range: 0x578375 - 0x57837c
int64_t function_578375(void) {
    // 0x578375
    int64_t v1; // 0x578375
    return v1 + 0xfffaa87 & 0xffffffff;
}

// Address range: 0x579ff4 - 0x579ff6
int64_t function_579ff4(void) {
    // 0x579ff4
    return function_579f99();
}

// Address range: 0x579ff6 - 0x579ff9
int64_t function_579ff6(void) {
    // 0x579ff6
    return 0;
}
