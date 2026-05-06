/*
 * Targeted RetDec C for native executable gap queue batch 6647.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x2142a-0x21430 rank=- name=- kind=- bytes=- uncovered=-
 *   0x214aa-0x214b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x25088-0x2508e rank=- name=- kind=- bytes=- uncovered=-
 *   0x36007-0x3600c rank=- name=- kind=- bytes=- uncovered=-
 *   0x368fd-0x36902 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fbbd-0x4fbc4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57e28-0x57e2d rank=- name=- kind=- bytes=- uncovered=-
 *   0x57f50-0x57f56 rank=- name=- kind=- bytes=- uncovered=-
 *   0x61fa9-0x61fb0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6902d-0x69034 rank=- name=- kind=- bytes=- uncovered=-
 *   0x6a643-0x6a648 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4956fb-0x495700 rank=- name=- kind=- bytes=- uncovered=-
 *   0x496859-0x496860 rank=- name=- kind=- bytes=- uncovered=-
 *   0x496c89-0x496c90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x496c99-0x496ca0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49f0d9-0x49f0e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4aa46b-0x4aa470 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4aa829-0x4aa830 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4aff0a-0x4aff10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b04da-0x4b04e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b08ea-0x4b08f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b0dea-0x4b0df0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b0e1b-0x4b0e20 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b10f9-0x4b1100 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b2759-0x4b2760 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b282a-0x4b2830 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b429a-0x4b42a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b609b-0x4b60a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b6399-0x4b63a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b728b-0x4b7290 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b94c9-0x4b94d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bbb4a-0x4bbb50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bbc6a-0x4bbc70 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c1e9a-0x4c1ea0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c3a0a-0x4c3a10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c491a-0x4c4920 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c857a-0x4c8580 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ccdd9-0x4ccde0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d3f8b-0x4d3f90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d7f3b-0x4d7f40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e9d7a-0x4e9d80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ee70b-0x4ee710 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ee9db-0x4ee9e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4efcbb-0x4efcc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4efd0b-0x4efd10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f16fb-0x4f1700 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f17bb-0x4f17c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ff69b-0x4ff6a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50150b-0x501510 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50cf3b-0x50cf40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54f5ec-0x54f5f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x556f3a-0x556f40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x559cca-0x559cd0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5631da-0x5631e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56321a-0x563220 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5651ea-0x5651f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5658bb-0x5658c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x567d3a-0x567d40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5690ca-0x5690d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56911a-0x569120 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56b9ca-0x56b9d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56ba1a-0x56ba20 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56bf3b-0x56bf40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56fefc-0x56ff00 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_2142a(void);
int64_t function_214aa(void);
int64_t function_25088(void);
int64_t function_36007(int64_t result);
int64_t function_368fd(int64_t result);
int64_t function_4956fb(void);
int64_t function_496859(void);
int64_t function_496c89(void);
int64_t function_496c99(void);
int64_t function_49f0d9(void);
int64_t function_4aa46b(void);
int64_t function_4aa46d(void);
int64_t function_4aa829(void);
int64_t function_4afef4();
int64_t function_4aff0a(void);
int64_t function_4aff0d(void);
int64_t function_4b04c0();
int64_t function_4b04da(void);
int64_t function_4b08ea(void);
int64_t function_4b0dea(void);
int64_t function_4b0e1b(void);
int64_t function_4b10f9(void);
int64_t function_4b2759(void);
int64_t function_4b282a(void);
int64_t function_4b4259();
int64_t function_4b4292();
int64_t function_4b429a(void);
int64_t function_4b429e(void);
int64_t function_4b609b(void);
int64_t function_4b6399(void);
int64_t function_4b728b(void);
int64_t function_4b94c9(void);
int64_t function_4bbb4a(void);
int64_t function_4bbc49();
int64_t function_4bbc6a(void);
int64_t function_4bbc6c(void);
int64_t function_4c1e9a(void);
int64_t function_4c3a0a(void);
int64_t function_4c491a(void);
int64_t function_4c857a(void);
int64_t function_4ccdd9(void);
int64_t function_4d3f8b(void);
int64_t function_4d7f3b(void);
int64_t function_4e9d14();
int64_t function_4e9d7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_4ee70b(void);
int64_t function_4ee70d(void);
int64_t function_4ee9db(void);
int64_t function_4efcbb(void);
int64_t function_4efd0b(void);
int64_t function_4f16fb(int64_t a1, int64_t a2);
int64_t function_4f17bb(int64_t a1);
int64_t function_4fbbd(int64_t a1);
int64_t function_4ff69b(void);
int64_t function_4ff69d(void);
int64_t function_50150b(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_50cf3b(void);
int64_t function_54f5ec(int64_t a1, int64_t a2);
int64_t function_556f3a(void);
int64_t function_559cca(int64_t a1, int64_t a2);
int64_t function_5631da(void);
int64_t function_56321a(void);
int64_t function_5651ea(int64_t a1, int64_t a2);
int64_t function_5658bb(void);
int64_t function_567d3a(void);
int64_t function_5690ca(void);
int64_t function_56911a(void);
int64_t function_56b9ca(void);
int64_t function_56ba1a(void);
int64_t function_56bf3b(void);
int64_t function_56fefc(void);
int64_t function_57dda();
int64_t function_57e28(int64_t a1);
int64_t function_57f50(void);
int64_t function_57f53(void);
int64_t function_61fa9(int64_t a1);
int64_t function_6902d(int64_t a1, int64_t a2);
int64_t function_6a643(void);

// Address range: 0x2142a - 0x21430
int64_t function_2142a(void) {
    // 0x2142a
    int64_t result; // 0x2142a
    return result;
}

// Address range: 0x214aa - 0x214b0
int64_t function_214aa(void) {
    // 0x214aa
    int64_t result; // 0x214aa
    return result;
}

// Address range: 0x25088 - 0x2508d
int64_t function_25088(void) {
    // 0x25088
    int64_t result; // 0x25088
    return result;
}

// Address range: 0x36007 - 0x3600c
int64_t function_36007(int64_t result) {
    // 0x36007
    return result;
}

// Address range: 0x368fd - 0x36902
int64_t function_368fd(int64_t result) {
    // 0x368fd
    return result;
}

// Address range: 0x4fbbd - 0x4fbc3
int64_t function_4fbbd(int64_t a1) {
    // 0x4fbbd
    return *(int64_t *)(a1 + 24);
}

// Address range: 0x57e28 - 0x57e2d
int64_t function_57e28(int64_t a1) {
    // 0x57e28
    return function_57dda(a1);
}

// Address range: 0x57f50 - 0x57f53
int64_t function_57f50(void) {
    // 0x57f50
    return 0;
}

// Address range: 0x57f53 - 0x57f56
int64_t function_57f53(void) {
    // 0x57f53
    return 0;
}

// Address range: 0x61fa9 - 0x61faf
int64_t function_61fa9(int64_t a1) {
    // 0x61fa9
    return *(int64_t *)(a1 + 40);
}

// Address range: 0x6902d - 0x69033
int64_t function_6902d(int64_t a1, int64_t a2) {
    // 0x6902d
    *(char *)(a1 + 40) = (char)a2;
    int64_t result; // 0x6902d
    return result;
}

// Address range: 0x6a643 - 0x6a647
int64_t function_6a643(void) {
    // 0x6a643
    int64_t v1; // 0x6a643
    return v1 & -256 | 1;
}

// Address range: 0x4956fb - 0x495700
int64_t function_4956fb(void) {
    // 0x4956fb
    int64_t result; // 0x4956fb
    return result;
}

// Address range: 0x496859 - 0x496860
int64_t function_496859(void) {
    // 0x496859
    int64_t result; // 0x496859
    return result;
}

// Address range: 0x496c89 - 0x496c90
int64_t function_496c89(void) {
    // 0x496c89
    int64_t result; // 0x496c89
    return result;
}

// Address range: 0x496c99 - 0x496ca0
int64_t function_496c99(void) {
    // 0x496c99
    int64_t result; // 0x496c99
    return result;
}

// Address range: 0x49f0d9 - 0x49f0e0
int64_t function_49f0d9(void) {
    // 0x49f0d9
    int64_t result; // 0x49f0d9
    return result;
}

// Address range: 0x4aa46b - 0x4aa46c
int64_t function_4aa46b(void) {
    // 0x4aa46b
    int64_t result; // 0x4aa46b
    return result;
}

// Address range: 0x4aa46d - 0x4aa46e
int64_t function_4aa46d(void) {
    // 0x4aa46d
    int64_t result; // 0x4aa46d
    return result;
}

// Address range: 0x4aa829 - 0x4aa830
int64_t function_4aa829(void) {
    // 0x4aa829
    int64_t result; // 0x4aa829
    __asm_out(102, (char)result);
    return result;
}

// Address range: 0x4aff0a - 0x4aff0b
int64_t function_4aff0a(void) {
    // 0x4aff0a
    int64_t result; // 0x4aff0a
    return result;
}

// Address range: 0x4aff0d - 0x4aff0f
int64_t function_4aff0d(void) {
    // 0x4aff0d
    return function_4afef4();
}

// Address range: 0x4b04da - 0x4b04e0
int64_t function_4b04da(void) {
    // 0x4b04da
    int64_t result; // 0x4b04da
    int64_t v1; // 0x4b04da
    if ((int32_t)v1 != 0) {
        result = function_4b04c0();
    }
    // 0x4b04de
    return result;
}

// Address range: 0x4b08ea - 0x4b08f0
int64_t function_4b08ea(void) {
    // 0x4b08ea
    int64_t result; // 0x4b08ea
    return result;
}

// Address range: 0x4b0dea - 0x4b0df0
int64_t function_4b0dea(void) {
    // 0x4b0dea
    int64_t result; // 0x4b0dea
    return result;
}

// Address range: 0x4b0e1b - 0x4b0e20
int64_t function_4b0e1b(void) {
    // 0x4b0e1b
    int64_t result; // 0x4b0e1b
    return result;
}

// Address range: 0x4b10f9 - 0x4b1100
int64_t function_4b10f9(void) {
    // 0x4b10f9
    int64_t result; // 0x4b10f9
    return result;
}

// Address range: 0x4b2759 - 0x4b275a
int64_t function_4b2759(void) {
    // 0x4b2759
    int64_t result; // 0x4b2759
    return result;
}

// Address range: 0x4b282a - 0x4b2830
int64_t function_4b282a(void) {
    // 0x4b282a
    return 0xfffffff6;
}

// Address range: 0x4b429a - 0x4b429c
int64_t function_4b429a(void) {
    // 0x4b429a
    int64_t result; // 0x4b429a
    bool v1; // 0x4b429a
    if (v1) {
        result = function_4b4292();
    }
    // 0x4b429c
    return result;
}

// Address range: 0x4b429e - 0x4b42a0
int64_t function_4b429e(void) {
    // 0x4b429e
    return function_4b4259();
}

// Address range: 0x4b609b - 0x4b60a0
int64_t function_4b609b(void) {
    // 0x4b609b
    int64_t result; // 0x4b609b
    return result;
}

// Address range: 0x4b6399 - 0x4b63a0
int64_t function_4b6399(void) {
    // 0x4b6399
    int64_t result; // 0x4b6399
    return result;
}

// Address range: 0x4b728b - 0x4b7290
int64_t function_4b728b(void) {
    // 0x4b728b
    int64_t result; // 0x4b728b
    return result;
}

// Address range: 0x4b94c9 - 0x4b94d0
int64_t function_4b94c9(void) {
    // 0x4b94c9
    int64_t result; // 0x4b94c9
    char * v1 = (char *)(result - 0x13140001); // 0x4b94c9
    *v1 = *v1 ^ -112;
    return result;
}

// Address range: 0x4bbb4a - 0x4bbb50
int64_t function_4bbb4a(void) {
    // 0x4bbb4a
    int64_t v1; // 0x4bbb4a
    return v1 | 255;
}

// Address range: 0x4bbc6a - 0x4bbc6b
int64_t function_4bbc6a(void) {
    // 0x4bbc6a
    int64_t result; // 0x4bbc6a
    return result;
}

// Address range: 0x4bbc6c - 0x4bbc6e
int64_t function_4bbc6c(void) {
    // 0x4bbc6c
    return function_4bbc49();
}

// Address range: 0x4c1e9a - 0x4c1ea0
int64_t function_4c1e9a(void) {
    // 0x4c1e9a
    int64_t result; // 0x4c1e9a
    return result;
}

// Address range: 0x4c3a0a - 0x4c3a10
int64_t function_4c3a0a(void) {
    // 0x4c3a0a
    int64_t result; // 0x4c3a0a
    return result;
}

// Address range: 0x4c491a - 0x4c4920
int64_t function_4c491a(void) {
    // 0x4c491a
    int64_t v1; // 0x4c491a
    return v1 + 0xd3137 & 0xffffffff;
}

// Address range: 0x4c857a - 0x4c8580
int64_t function_4c857a(void) {
    // 0x4c857a
    int64_t result; // 0x4c857a
    return result;
}

// Address range: 0x4ccdd9 - 0x4ccddc
int64_t function_4ccdd9(void) {
    // 0x4ccdd9
    int64_t result; // 0x4ccdd9
    return result;
}

// Address range: 0x4d3f8b - 0x4d3f90
int64_t function_4d3f8b(void) {
    // 0x4d3f8b
    int64_t result; // 0x4d3f8b
    return result;
}

// Address range: 0x4d7f3b - 0x4d7f40
int64_t function_4d7f3b(void) {
    // 0x4d7f3b
    int64_t result; // 0x4d7f3b
    return result;
}

// Address range: 0x4e9d7a - 0x4e9d80
int64_t function_4e9d7a(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4e9d7a
    *(int32_t *)(a3 - 4 + a4) = (int32_t)a3;
    return function_4e9d14();
}

// Address range: 0x4ee70b - 0x4ee70c
int64_t function_4ee70b(void) {
    // 0x4ee70b
    int64_t result; // 0x4ee70b
    return result;
}

// Address range: 0x4ee70d - 0x4ee70e
int64_t function_4ee70d(void) {
    // 0x4ee70d
    int64_t result; // 0x4ee70d
    return result;
}

// Address range: 0x4ee9db - 0x4ee9e0
int64_t function_4ee9db(void) {
    // 0x4ee9db
    int64_t result; // 0x4ee9db
    return result;
}

// Address range: 0x4efcbb - 0x4efcc0
int64_t function_4efcbb(void) {
    // 0x4efcbb
    int64_t result; // 0x4efcbb
    return result;
}

// Address range: 0x4efd0b - 0x4efd10
int64_t function_4efd0b(void) {
    // 0x4efd0b
    int64_t result; // 0x4efd0b
    return result;
}

// Address range: 0x4f16fb - 0x4f16ff
int64_t function_4f16fb(int64_t a1, int64_t a2) {
    // 0x4f16fb
    int64_t result; // 0x4f16fb
    return result;
}

// Address range: 0x4f17bb - 0x4f17be
int64_t function_4f17bb(int64_t a1) {
    // 0x4f17bb
    int64_t result; // 0x4f17bb
    return result;
}

// Address range: 0x4ff69b - 0x4ff69c
int64_t function_4ff69b(void) {
    // 0x4ff69b
    int64_t result; // 0x4ff69b
    return result;
}

// Address range: 0x4ff69d - 0x4ff6a0
int64_t function_4ff69d(void) {
    // 0x4ff69d
    int64_t result; // 0x4ff69d
    return result;
}

// Address range: 0x50150b - 0x501510
int64_t function_50150b(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x50150b
    return __asm_int1(a1, a2, a3, a4);
}

// Address range: 0x50cf3b - 0x50cf40
int64_t function_50cf3b(void) {
    // 0x50cf3b
    int64_t result; // 0x50cf3b
    return result;
}

// Address range: 0x54f5ec - 0x54f5f0
int64_t function_54f5ec(int64_t a1, int64_t a2) {
    // 0x54f5ec
    int64_t v1; // 0x54f5ec
    return v1 & 0xffffffff;
}

// Address range: 0x556f3a - 0x556f40
int64_t function_556f3a(void) {
    // 0x556f3a
    int64_t result; // 0x556f3a
    return result;
}

// Address range: 0x559cca - 0x559ccd
int64_t function_559cca(int64_t a1, int64_t a2) {
    // 0x559cca
    int64_t v1; // 0x559cca
    *(int32_t *)a1 = (int32_t)v1 - 1;
    return v1 & -256 | v1 % 256;
}

// Address range: 0x5631da - 0x5631e0
int64_t function_5631da(void) {
    // 0x5631da
    int64_t result; // 0x5631da
    return result;
}

// Address range: 0x56321a - 0x563220
int64_t function_56321a(void) {
    // 0x56321a
    int64_t result; // 0x56321a
    return result;
}

// Address range: 0x5651ea - 0x5651f0
int64_t function_5651ea(int64_t a1, int64_t a2) {
    // 0x5651ea
    int64_t result; // 0x5651ea
    return result;
}

// Address range: 0x5658bb - 0x5658c0
int64_t function_5658bb(void) {
    // 0x5658bb
    int64_t result; // 0x5658bb
    return result;
}

// Address range: 0x567d3a - 0x567d40
int64_t function_567d3a(void) {
    // 0x567d3a
    int64_t v1; // 0x567d3a
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    int64_t result; // 0x567d3a
    int64_t v3 = result;
    *(char *)v3 = *(char *)&result + (char)v3;
    return result;
}

// Address range: 0x5690ca - 0x5690d0
int64_t function_5690ca(void) {
    // 0x5690ca
    int64_t result; // 0x5690ca
    return result;
}

// Address range: 0x56911a - 0x569120
int64_t function_56911a(void) {
    // 0x56911a
    int64_t result; // 0x56911a
    return result;
}

// Address range: 0x56b9ca - 0x56b9d0
int64_t function_56b9ca(void) {
    // 0x56b9ca
    int64_t result; // 0x56b9ca
    return result;
}

// Address range: 0x56ba1a - 0x56ba20
int64_t function_56ba1a(void) {
    // 0x56ba1a
    int64_t result; // 0x56ba1a
    return result;
}

// Address range: 0x56bf3b - 0x56bf40
int64_t function_56bf3b(void) {
    // 0x56bf3b
    int64_t result; // 0x56bf3b
    return result;
}

// Address range: 0x56fefc - 0x56ff00
int64_t function_56fefc(void) {
    // 0x56fefc
    int64_t result; // 0x56fefc
    return result;
}
