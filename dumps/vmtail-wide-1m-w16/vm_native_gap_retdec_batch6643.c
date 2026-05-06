/*
 * Targeted RetDec C for native executable gap queue batch 6643.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x213a6-0x213b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x21625-0x21630 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f94a-0x4f954 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48a125-0x48a130 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4968a5-0x4968b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b0eb5-0x4b0ec0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b73c6-0x4b73d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b7446-0x4b7450 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b8bb6-0x4b8bc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b9276-0x4b9280 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c0306-0x4c0310 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c18a6-0x4c18b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c28e6-0x4c28f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c62d6-0x4c62e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c8e56-0x4c8e60 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cda96-0x4cdaa0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cece6-0x4cecf0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cf936-0x4cf940 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cffa6-0x4cffb0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d3c86-0x4d3c90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ea386-0x4ea390 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4eeea6-0x4eeeb0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f5086-0x4f5090 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f5096-0x4f50a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ffbe6-0x4ffbf0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x519456-0x519460 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5194a6-0x5194b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5194f6-0x519500 rank=- name=- kind=- bytes=- uncovered=-
 *   0x519546-0x519550 rank=- name=- kind=- bytes=- uncovered=-
 *   0x519596-0x5195a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5195e6-0x5195f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53f806-0x53f810 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53f816-0x53f820 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53f826-0x53f830 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53f8f6-0x53f900 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53f906-0x53f910 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53f916-0x53f920 rank=- name=- kind=- bytes=- uncovered=-
 *   0x542916-0x542920 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54c38c-0x54c396 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54d9c6-0x54d9d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54da06-0x54da10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54e456-0x54e460 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54f766-0x54f770 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54f7e6-0x54f7f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54f866-0x54f870 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5572c6-0x5572d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x557386-0x557390 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5656a6-0x5656b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x566176-0x566180 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56dd56-0x56dd60 rank=- name=- kind=- bytes=- uncovered=-
 *   0x572416-0x572420 rank=- name=- kind=- bytes=- uncovered=-
 *   0x572426-0x572430 rank=- name=- kind=- bytes=- uncovered=-
 *   0x573296-0x5732a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5732a6-0x5732b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5732b6-0x5732c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5732c6-0x5732d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x576846-0x576850 rank=- name=- kind=- bytes=- uncovered=-
 *   0x576856-0x576860 rank=- name=- kind=- bytes=- uncovered=-
 *   0x577d66-0x577d70 rank=- name=- kind=- bytes=- uncovered=-
 *   0x577d76-0x577d80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x577d86-0x577d90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x579af6-0x579b00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x581696-0x5816a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x583606-0x583610 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_213a6(void);
int64_t function_21625(void);
int64_t function_48a125(void);
int64_t function_4968a5(void);
int64_t function_4b0eb5(int64_t a1, int64_t a2);
int64_t function_4b73c6(void);
int64_t function_4b7446(void);
int64_t function_4b8bb6(void);
int64_t function_4b920d();
int64_t function_4b9276(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4c0306(int64_t a1, int64_t a2, int64_t a3);
int64_t function_4c18a6(void);
int64_t function_4c28e6(void);
int64_t function_4c62d6(void);
int64_t function_4c8e56(void);
int64_t function_4cda96(int64_t a1);
int64_t function_4cece6(void);
int64_t function_4cece9(void);
int64_t function_4cf936(void);
int64_t function_4cffa6(void);
int64_t function_4d3c86(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4d3c89(void);
int64_t function_4ea386(void);
int64_t function_4eeea6(int64_t a1, int64_t a2);
int64_t function_4f5086(void);
int64_t function_4f5096(void);
int64_t function_4f94a(int64_t a1);
int64_t function_4ffbe6(int64_t a1, int64_t a2, int64_t a3);
int64_t function_519456(void);
int64_t function_5194a6(void);
int64_t function_5194f6(void);
int64_t function_519546(void);
int64_t function_519596(void);
int64_t function_5195e6(void);
int64_t function_53f806(void);
int64_t function_53f816(void);
int64_t function_53f826(void);
int64_t function_53f8f6(void);
int64_t function_53f906(void);
int64_t function_53f916(void);
int64_t function_542916(void);
int64_t function_54c38c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_54d9c6(void);
int64_t function_54d9cc(int64_t a1, int64_t a2, int64_t a3);
int64_t function_54da06(void);
int64_t function_54e456(void);
int64_t function_54f766(void);
int64_t function_54f7e6(void);
int64_t function_54f866(void);
int64_t function_557251();
int64_t function_5572b0();
int64_t function_5572c6(void);
int64_t function_557311();
int64_t function_557370();
int64_t function_557386(void);
int64_t function_5652d0();
int64_t function_5656a6(void);
int64_t function_566176(int64_t a1);
int64_t function_56dd56(void);
int64_t function_572416(void);
int64_t function_572426(void);
int64_t function_573296(void);
int64_t function_5732a6(void);
int64_t function_5732b6(void);
int64_t function_5732c6(void);
int64_t function_576846(void);
int64_t function_576856(void);
int64_t function_577d66(void);
int64_t function_577d76(void);
int64_t function_577d86(void);
int64_t function_579af6(void);
int64_t function_581696(int64_t a1, int64_t a2);
int64_t function_583606(void);
int64_t function_72994();

// Address range: 0x213a6 - 0x213b0
int64_t function_213a6(void) {
    // 0x213a6
    int64_t result; // 0x213a6
    return result;
}

// Address range: 0x21625 - 0x21630
int64_t function_21625(void) {
    // 0x21625
    int64_t result; // 0x21625
    return result;
}

// Address range: 0x4f94a - 0x4f953
int64_t function_4f94a(int64_t a1) {
    // 0x4f94a
    return function_72994(a1 + 8);
}

// Address range: 0x48a125 - 0x48a130
int64_t function_48a125(void) {
    // 0x48a125
    int64_t result; // 0x48a125
    return result;
}

// Address range: 0x4968a5 - 0x4968b0
int64_t function_4968a5(void) {
    // 0x4968a5
    int64_t result; // 0x4968a5
    return result;
}

// Address range: 0x4b0eb5 - 0x4b0ec0
int64_t function_4b0eb5(int64_t a1, int64_t a2) {
    char * v1 = (char *)(a2 + 46); // 0x4b0eb5
    *v1 = 2 * *v1;
    int64_t result; // 0x4b0eb5
    return result;
}

// Address range: 0x4b73c6 - 0x4b73d0
int64_t function_4b73c6(void) {
    // 0x4b73c6
    int64_t result; // 0x4b73c6
    return result;
}

// Address range: 0x4b7446 - 0x4b7450
int64_t function_4b7446(void) {
    // 0x4b7446
    int64_t result; // 0x4b7446
    return result;
}

// Address range: 0x4b8bb6 - 0x4b8bc0
int64_t function_4b8bb6(void) {
    // 0x4b8bb6
    int64_t result; // 0x4b8bb6
    return result;
}

// Address range: 0x4b9276 - 0x4b927b
int64_t function_4b9276(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4b9276
    int64_t v1; // 0x4b9276
    *(int64_t *)v1 = a3;
    return function_4b920d();
}

// Address range: 0x4c0306 - 0x4c030e
int64_t function_4c0306(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4c0306
    int64_t result; // 0x4c0306
    return result;
}

// Address range: 0x4c18a6 - 0x4c18b0
int64_t function_4c18a6(void) {
    // 0x4c18a6
    int64_t result; // 0x4c18a6
    return result;
}

// Address range: 0x4c28e6 - 0x4c28f0
int64_t function_4c28e6(void) {
    // 0x4c28e6
    int64_t result; // 0x4c28e6
    return result;
}

// Address range: 0x4c62d6 - 0x4c62d7
int64_t function_4c62d6(void) {
    // 0x4c62d6
    int64_t result; // 0x4c62d6
    return result;
}

// Address range: 0x4c8e56 - 0x4c8e60
int64_t function_4c8e56(void) {
    // 0x4c8e56
    int64_t result; // 0x4c8e56
    return result;
}

// Address range: 0x4cda96 - 0x4cda99
int64_t function_4cda96(int64_t a1) {
    // 0x4cda96
    int64_t result; // 0x4cda96
    return result;
}

// Address range: 0x4cece6 - 0x4cece7
int64_t function_4cece6(void) {
    // 0x4cece6
    int64_t result; // 0x4cece6
    return result;
}

// Address range: 0x4cece9 - 0x4cecec
int64_t function_4cece9(void) {
    // 0x4cece9
    int64_t result; // 0x4cece9
    return result;
}

// Address range: 0x4cf936 - 0x4cf940
int64_t function_4cf936(void) {
    // 0x4cf936
    int64_t result; // 0x4cf936
    return result;
}

// Address range: 0x4cffa6 - 0x4cffb0
int64_t function_4cffa6(void) {
    // 0x4cffa6
    int64_t result; // 0x4cffa6
    return result;
}

// Address range: 0x4d3c86 - 0x4d3c88
int64_t function_4d3c86(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = a4 - 1; // 0x4d3c86
    int64_t result; // 0x4d3c86
    if (v1 != 0) {
        result = function_4d3c86(a1, a2, a3, v1);
    }
    // 0x4d3c88
    return result;
}

// Address range: 0x4d3c89 - 0x4d3c8c
int64_t function_4d3c89(void) {
    // 0x4d3c89
    int64_t result; // 0x4d3c89
    return result;
}

// Address range: 0x4ea386 - 0x4ea390
int64_t function_4ea386(void) {
    // 0x4ea386
    int64_t result; // 0x4ea386
    return result;
}

// Address range: 0x4eeea6 - 0x4eeea9
int64_t function_4eeea6(int64_t a1, int64_t a2) {
    // 0x4eeea6
    int64_t v1; // 0x4eeea6
    uint64_t result = v1;
    char * v2 = (char *)(a2 + 15); // 0x4eeea6
    *v2 = *v2 + (char)(result / 256);
    return result;
}

// Address range: 0x4f5086 - 0x4f5090
int64_t function_4f5086(void) {
    // 0x4f5086
    int64_t result; // 0x4f5086
    return result;
}

// Address range: 0x4f5096 - 0x4f50a0
int64_t function_4f5096(void) {
    // 0x4f5096
    int64_t result; // 0x4f5096
    return result;
}

// Address range: 0x4ffbe6 - 0x4ffbe7
int64_t function_4ffbe6(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4ffbe6
    *(int32_t *)a1 = __asm_insd((int16_t)a3);
    int64_t result; // 0x4ffbe6
    return result;
}

// Address range: 0x519456 - 0x519460
int64_t function_519456(void) {
    // 0x519456
    int64_t result; // 0x519456
    return result;
}

// Address range: 0x5194a6 - 0x5194b0
int64_t function_5194a6(void) {
    // 0x5194a6
    int64_t result; // 0x5194a6
    return result;
}

// Address range: 0x5194f6 - 0x519500
int64_t function_5194f6(void) {
    // 0x5194f6
    int64_t result; // 0x5194f6
    return result;
}

// Address range: 0x519546 - 0x519550
int64_t function_519546(void) {
    // 0x519546
    int64_t result; // 0x519546
    return result;
}

// Address range: 0x519596 - 0x5195a0
int64_t function_519596(void) {
    // 0x519596
    int64_t result; // 0x519596
    return result;
}

// Address range: 0x5195e6 - 0x5195f0
int64_t function_5195e6(void) {
    // 0x5195e6
    int64_t result; // 0x5195e6
    return result;
}

// Address range: 0x53f806 - 0x53f810
int64_t function_53f806(void) {
    // 0x53f806
    int64_t result; // 0x53f806
    return result;
}

// Address range: 0x53f816 - 0x53f820
int64_t function_53f816(void) {
    // 0x53f816
    int64_t result; // 0x53f816
    return result;
}

// Address range: 0x53f826 - 0x53f830
int64_t function_53f826(void) {
    // 0x53f826
    int64_t result; // 0x53f826
    return result;
}

// Address range: 0x53f8f6 - 0x53f900
int64_t function_53f8f6(void) {
    // 0x53f8f6
    int64_t result; // 0x53f8f6
    return result;
}

// Address range: 0x53f906 - 0x53f910
int64_t function_53f906(void) {
    // 0x53f906
    int64_t result; // 0x53f906
    return result;
}

// Address range: 0x53f916 - 0x53f920
int64_t function_53f916(void) {
    // 0x53f916
    int64_t result; // 0x53f916
    return result;
}

// Address range: 0x542916 - 0x542920
int64_t function_542916(void) {
    // 0x542916
    int64_t result; // 0x542916
    return result;
}

// Address range: 0x54c38c - 0x54c394
int64_t function_54c38c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x54c38c
    int64_t v1; // 0x54c38c
    char * v2 = (char *)(v1 - 115); // 0x54c38c
    *v2 = *v2 + (char)a4;
    return v1 & 0xffffffff ^ 0x3d14a;
}

// Address range: 0x54d9c6 - 0x54d9cc
int64_t function_54d9c6(void) {
    // 0x54d9c6
    int64_t result; // 0x54d9c6
    int32_t * v1 = (int32_t *)(result - 125); // 0x54d9c6
    *v1 = *v1 - 1;
    return result;
}

// Address range: 0x54d9cc - 0x54d9cf
int64_t function_54d9cc(int64_t a1, int64_t a2, int64_t a3) {
    // 0x54d9cc
    *(int32_t *)a1 = (int32_t)a3;
    int64_t result; // 0x54d9cc
    return result;
}

// Address range: 0x54da06 - 0x54da10
int64_t function_54da06(void) {
    // 0x54da06
    int64_t result; // 0x54da06
    return result;
}

// Address range: 0x54e456 - 0x54e460
int64_t function_54e456(void) {
    // 0x54e456
    int64_t result; // 0x54e456
    return result;
}

// Address range: 0x54f766 - 0x54f770
int64_t function_54f766(void) {
    // 0x54f766
    int64_t result; // 0x54f766
    return result;
}

// Address range: 0x54f7e6 - 0x54f7f0
int64_t function_54f7e6(void) {
    // 0x54f7e6
    int64_t result; // 0x54f7e6
    return result;
}

// Address range: 0x54f866 - 0x54f870
int64_t function_54f866(void) {
    // 0x54f866
    int64_t result; // 0x54f866
    return result;
}

// Address range: 0x5572c6 - 0x5572ce
int64_t function_5572c6(void) {
    // 0x5572c6
    int64_t v1; // 0x5572c6
    unsigned char v2 = (char)v1 + 65; // 0x5572c6
    *(char *)(v1 & -256 | (int64_t)v2) = v2;
    if (v2 != 0) {
        function_5572b0();
    }
    // 0x5572cc
    return function_557251();
}

// Address range: 0x557386 - 0x55738e
int64_t function_557386(void) {
    // 0x557386
    int64_t v1; // 0x557386
    unsigned char v2 = (char)v1 + 65; // 0x557386
    *(char *)(v1 & -256 | (int64_t)v2) = v2;
    if (v2 != 0) {
        function_557370();
    }
    // 0x55738c
    return function_557311();
}

// Address range: 0x5656a6 - 0x5656ad
int64_t function_5656a6(void) {
    // 0x5656a6
    int64_t v1; // 0x5656a6
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    return function_5652d0();
}

// Address range: 0x566176 - 0x56617b
int64_t function_566176(int64_t a1) {
    // 0x566176
    int64_t result; // 0x566176
    return result;
}

// Address range: 0x56dd56 - 0x56dd60
int64_t function_56dd56(void) {
    // 0x56dd56
    int64_t result; // 0x56dd56
    return result;
}

// Address range: 0x572416 - 0x572420
int64_t function_572416(void) {
    // 0x572416
    int64_t result; // 0x572416
    return result;
}

// Address range: 0x572426 - 0x572430
int64_t function_572426(void) {
    // 0x572426
    int64_t result; // 0x572426
    return result;
}

// Address range: 0x573296 - 0x5732a0
int64_t function_573296(void) {
    // 0x573296
    int64_t result; // 0x573296
    return result;
}

// Address range: 0x5732a6 - 0x5732b0
int64_t function_5732a6(void) {
    // 0x5732a6
    int64_t result; // 0x5732a6
    return result;
}

// Address range: 0x5732b6 - 0x5732c0
int64_t function_5732b6(void) {
    // 0x5732b6
    int64_t result; // 0x5732b6
    return result;
}

// Address range: 0x5732c6 - 0x5732d0
int64_t function_5732c6(void) {
    // 0x5732c6
    int64_t result; // 0x5732c6
    return result;
}

// Address range: 0x576846 - 0x576850
int64_t function_576846(void) {
    // 0x576846
    int64_t result; // 0x576846
    return result;
}

// Address range: 0x576856 - 0x576860
int64_t function_576856(void) {
    // 0x576856
    int64_t result; // 0x576856
    return result;
}

// Address range: 0x577d66 - 0x577d70
int64_t function_577d66(void) {
    // 0x577d66
    int64_t result; // 0x577d66
    return result;
}

// Address range: 0x577d76 - 0x577d80
int64_t function_577d76(void) {
    // 0x577d76
    int64_t result; // 0x577d76
    return result;
}

// Address range: 0x577d86 - 0x577d90
int64_t function_577d86(void) {
    // 0x577d86
    int64_t result; // 0x577d86
    return result;
}

// Address range: 0x579af6 - 0x579af7
int64_t function_579af6(void) {
    // 0x579af6
    int64_t result; // 0x579af6
    return result;
}

// Address range: 0x581696 - 0x5816a0
int64_t function_581696(int64_t a1, int64_t a2) {
    // 0x581696
    __stack_chk_fail();
    return (int64_t)&g1;
}

// Address range: 0x583606 - 0x583610
int64_t function_583606(void) {
    // 0x583606
    int64_t result; // 0x583606
    return result;
}
