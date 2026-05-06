/*
 * Targeted RetDec C for native executable gap queue batch 6652.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x4762f-0x47630 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a367-0x4a368 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a399-0x4a39a rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a8c5-0x4a8c6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a939-0x4a93a rank=- name=- kind=- bytes=- uncovered=-
 *   0x4aad7-0x4aad8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ae3b-0x4ae3c rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ae53-0x4ae54 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b465-0x4b466 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b519-0x4b51a rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ba31-0x4ba32 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bca9-0x4bcaa rank=- name=- kind=- bytes=- uncovered=-
 *   0x4bffb-0x4bffc rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c2b5-0x4c2b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c3bd-0x4c3be rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c707-0x4c708 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c713-0x4c714 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c7ad-0x4c7ae rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c841-0x4c842 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cf85-0x4cf86 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d9cd-0x4d9ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x4da05-0x4da06 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4dacb-0x4dacc rank=- name=- kind=- bytes=- uncovered=-
 *   0x4daf5-0x4daf6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4dd21-0x4dd22 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4df59-0x4df5a rank=- name=- kind=- bytes=- uncovered=-
 *   0x4dfc1-0x4dfc2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e155-0x4e156 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e37b-0x4e37c rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e487-0x4e488 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e4ef-0x4e4f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e7d7-0x4e7d8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e8b1-0x4e8b2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e9c7-0x4e9c8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4e9fd-0x4e9fe rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ea03-0x4ea04 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ea09-0x4ea0a rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ea0f-0x4ea10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4eae9-0x4eaea rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f0b5-0x4f0b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f20d-0x4f20e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f5fb-0x4f5fc rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f643-0x4f644 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f719-0x4f71a rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f73b-0x4f73c rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f98f-0x4f990 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fa4f-0x4fa50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fc4f-0x4fc50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fd1d-0x4fd1e rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ff2f-0x4ff30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x507cb-0x507cc rank=- name=- kind=- bytes=- uncovered=-
 *   0x507f5-0x507f6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50905-0x50906 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50ae1-0x50ae2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50c4d-0x50c4e rank=- name=- kind=- bytes=- uncovered=-
 *   0x50ce1-0x50ce2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50e9d-0x50e9e rank=- name=- kind=- bytes=- uncovered=-
 *   0x5100d-0x5100e rank=- name=- kind=- bytes=- uncovered=-
 *   0x51049-0x5104a rank=- name=- kind=- bytes=- uncovered=-
 *   0x5146d-0x5146e rank=- name=- kind=- bytes=- uncovered=-
 *   0x51d33-0x51d34 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5236b-0x5236c rank=- name=- kind=- bytes=- uncovered=-
 *   0x5243f-0x52440 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5271d-0x5271e rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_4762f(void);
int64_t function_4a367(void);
int64_t function_4a399(void);
int64_t function_4a8c5(void);
int64_t function_4a939(void);
int64_t function_4aad7(void);
int64_t function_4ae3b(void);
int64_t function_4ae53(void);
int64_t function_4b465(void);
int64_t function_4b519(void);
int64_t function_4ba31(void);
int64_t function_4bca9(void);
int64_t function_4bffb(void);
int64_t function_4c2b5(void);
int64_t function_4c3bd(void);
int64_t function_4c707(void);
int64_t function_4c713(void);
int64_t function_4c7ad(void);
int64_t function_4c841(void);
int64_t function_4cf85(void);
int64_t function_4d9cd(void);
int64_t function_4da05(void);
int64_t function_4dacb(void);
int64_t function_4daf5(void);
int64_t function_4dd21(void);
int64_t function_4df59(void);
int64_t function_4dfc1(void);
int64_t function_4e155(void);
int64_t function_4e37b(void);
int64_t function_4e487(void);
int64_t function_4e4ef(void);
int64_t function_4e7d7(void);
int64_t function_4e8b1(void);
int64_t function_4e9c7(void);
int64_t function_4e9fd(void);
int64_t function_4ea03(void);
int64_t function_4ea09(void);
int64_t function_4ea0f(void);
int64_t function_4eae9(void);
int64_t function_4f0b5(void);
int64_t function_4f20d(void);
int64_t function_4f5fb(void);
int64_t function_4f643(void);
int64_t function_4f719(void);
int64_t function_4f73b(void);
int64_t function_4f98f(void);
int64_t function_4fa4f(void);
int64_t function_4fc4f(void);
int64_t function_4fd1d(void);
int64_t function_4ff2f(void);
int64_t function_507cb(void);
int64_t function_507f5(void);
int64_t function_50905(void);
int64_t function_50ae1(void);
int64_t function_50c4d(void);
int64_t function_50ce1(void);
int64_t function_50e9d(void);
int64_t function_5100d(void);
int64_t function_51049(void);
int64_t function_5146d(void);
int64_t function_51d33(void);
int64_t function_5236b(void);
int64_t function_5243f(void);
int64_t function_5271d(void);

// Address range: 0x4762f - 0x47630
int64_t function_4762f(void) {
    // 0x4762f
    int64_t result; // 0x4762f
    return result;
}

// Address range: 0x4a367 - 0x4a368
int64_t function_4a367(void) {
    // 0x4a367
    int64_t result; // 0x4a367
    return result;
}

// Address range: 0x4a399 - 0x4a39a
int64_t function_4a399(void) {
    // 0x4a399
    int64_t result; // 0x4a399
    return result;
}

// Address range: 0x4a8c5 - 0x4a8c6
int64_t function_4a8c5(void) {
    // 0x4a8c5
    int64_t result; // 0x4a8c5
    return result;
}

// Address range: 0x4a939 - 0x4a93a
int64_t function_4a939(void) {
    // 0x4a939
    int64_t result; // 0x4a939
    return result;
}

// Address range: 0x4aad7 - 0x4aad8
int64_t function_4aad7(void) {
    // 0x4aad7
    int64_t result; // 0x4aad7
    return result;
}

// Address range: 0x4ae3b - 0x4ae3c
int64_t function_4ae3b(void) {
    // 0x4ae3b
    int64_t result; // 0x4ae3b
    return result;
}

// Address range: 0x4ae53 - 0x4ae54
int64_t function_4ae53(void) {
    // 0x4ae53
    int64_t result; // 0x4ae53
    return result;
}

// Address range: 0x4b465 - 0x4b466
int64_t function_4b465(void) {
    // 0x4b465
    int64_t result; // 0x4b465
    return result;
}

// Address range: 0x4b519 - 0x4b51a
int64_t function_4b519(void) {
    // 0x4b519
    int64_t result; // 0x4b519
    return result;
}

// Address range: 0x4ba31 - 0x4ba32
int64_t function_4ba31(void) {
    // 0x4ba31
    int64_t result; // 0x4ba31
    return result;
}

// Address range: 0x4bca9 - 0x4bcaa
int64_t function_4bca9(void) {
    // 0x4bca9
    int64_t result; // 0x4bca9
    return result;
}

// Address range: 0x4bffb - 0x4bffc
int64_t function_4bffb(void) {
    // 0x4bffb
    int64_t result; // 0x4bffb
    return result;
}

// Address range: 0x4c2b5 - 0x4c2b6
int64_t function_4c2b5(void) {
    // 0x4c2b5
    int64_t result; // 0x4c2b5
    return result;
}

// Address range: 0x4c3bd - 0x4c3be
int64_t function_4c3bd(void) {
    // 0x4c3bd
    int64_t result; // 0x4c3bd
    return result;
}

// Address range: 0x4c707 - 0x4c708
int64_t function_4c707(void) {
    // 0x4c707
    int64_t result; // 0x4c707
    return result;
}

// Address range: 0x4c713 - 0x4c714
int64_t function_4c713(void) {
    // 0x4c713
    int64_t result; // 0x4c713
    return result;
}

// Address range: 0x4c7ad - 0x4c7ae
int64_t function_4c7ad(void) {
    // 0x4c7ad
    int64_t result; // 0x4c7ad
    return result;
}

// Address range: 0x4c841 - 0x4c842
int64_t function_4c841(void) {
    // 0x4c841
    int64_t result; // 0x4c841
    return result;
}

// Address range: 0x4cf85 - 0x4cf86
int64_t function_4cf85(void) {
    // 0x4cf85
    int64_t result; // 0x4cf85
    return result;
}

// Address range: 0x4d9cd - 0x4d9ce
int64_t function_4d9cd(void) {
    // 0x4d9cd
    int64_t result; // 0x4d9cd
    return result;
}

// Address range: 0x4da05 - 0x4da06
int64_t function_4da05(void) {
    // 0x4da05
    int64_t result; // 0x4da05
    return result;
}

// Address range: 0x4dacb - 0x4dacc
int64_t function_4dacb(void) {
    // 0x4dacb
    int64_t result; // 0x4dacb
    return result;
}

// Address range: 0x4daf5 - 0x4daf6
int64_t function_4daf5(void) {
    // 0x4daf5
    int64_t result; // 0x4daf5
    return result;
}

// Address range: 0x4dd21 - 0x4dd22
int64_t function_4dd21(void) {
    // 0x4dd21
    int64_t result; // 0x4dd21
    return result;
}

// Address range: 0x4df59 - 0x4df5a
int64_t function_4df59(void) {
    // 0x4df59
    int64_t result; // 0x4df59
    return result;
}

// Address range: 0x4dfc1 - 0x4dfc2
int64_t function_4dfc1(void) {
    // 0x4dfc1
    int64_t result; // 0x4dfc1
    return result;
}

// Address range: 0x4e155 - 0x4e156
int64_t function_4e155(void) {
    // 0x4e155
    int64_t result; // 0x4e155
    return result;
}

// Address range: 0x4e37b - 0x4e37c
int64_t function_4e37b(void) {
    // 0x4e37b
    int64_t result; // 0x4e37b
    return result;
}

// Address range: 0x4e487 - 0x4e488
int64_t function_4e487(void) {
    // 0x4e487
    int64_t result; // 0x4e487
    return result;
}

// Address range: 0x4e4ef - 0x4e4f0
int64_t function_4e4ef(void) {
    // 0x4e4ef
    int64_t result; // 0x4e4ef
    return result;
}

// Address range: 0x4e7d7 - 0x4e7d8
int64_t function_4e7d7(void) {
    // 0x4e7d7
    int64_t result; // 0x4e7d7
    return result;
}

// Address range: 0x4e8b1 - 0x4e8b2
int64_t function_4e8b1(void) {
    // 0x4e8b1
    int64_t result; // 0x4e8b1
    return result;
}

// Address range: 0x4e9c7 - 0x4e9c8
int64_t function_4e9c7(void) {
    // 0x4e9c7
    int64_t result; // 0x4e9c7
    return result;
}

// Address range: 0x4e9fd - 0x4e9fe
int64_t function_4e9fd(void) {
    // 0x4e9fd
    int64_t result; // 0x4e9fd
    return result;
}

// Address range: 0x4ea03 - 0x4ea04
int64_t function_4ea03(void) {
    // 0x4ea03
    int64_t result; // 0x4ea03
    return result;
}

// Address range: 0x4ea09 - 0x4ea0a
int64_t function_4ea09(void) {
    // 0x4ea09
    int64_t result; // 0x4ea09
    return result;
}

// Address range: 0x4ea0f - 0x4ea10
int64_t function_4ea0f(void) {
    // 0x4ea0f
    int64_t result; // 0x4ea0f
    return result;
}

// Address range: 0x4eae9 - 0x4eaea
int64_t function_4eae9(void) {
    // 0x4eae9
    int64_t result; // 0x4eae9
    return result;
}

// Address range: 0x4f0b5 - 0x4f0b6
int64_t function_4f0b5(void) {
    // 0x4f0b5
    int64_t result; // 0x4f0b5
    return result;
}

// Address range: 0x4f20d - 0x4f20e
int64_t function_4f20d(void) {
    // 0x4f20d
    int64_t result; // 0x4f20d
    return result;
}

// Address range: 0x4f5fb - 0x4f5fc
int64_t function_4f5fb(void) {
    // 0x4f5fb
    int64_t result; // 0x4f5fb
    return result;
}

// Address range: 0x4f643 - 0x4f644
int64_t function_4f643(void) {
    // 0x4f643
    int64_t result; // 0x4f643
    return result;
}

// Address range: 0x4f719 - 0x4f71a
int64_t function_4f719(void) {
    // 0x4f719
    int64_t result; // 0x4f719
    return result;
}

// Address range: 0x4f73b - 0x4f73c
int64_t function_4f73b(void) {
    // 0x4f73b
    int64_t result; // 0x4f73b
    return result;
}

// Address range: 0x4f98f - 0x4f990
int64_t function_4f98f(void) {
    // 0x4f98f
    int64_t result; // 0x4f98f
    return result;
}

// Address range: 0x4fa4f - 0x4fa50
int64_t function_4fa4f(void) {
    // 0x4fa4f
    int64_t result; // 0x4fa4f
    return result;
}

// Address range: 0x4fc4f - 0x4fc50
int64_t function_4fc4f(void) {
    // 0x4fc4f
    int64_t result; // 0x4fc4f
    return result;
}

// Address range: 0x4fd1d - 0x4fd1e
int64_t function_4fd1d(void) {
    // 0x4fd1d
    int64_t result; // 0x4fd1d
    return result;
}

// Address range: 0x4ff2f - 0x4ff30
int64_t function_4ff2f(void) {
    // 0x4ff2f
    int64_t result; // 0x4ff2f
    return result;
}

// Address range: 0x507cb - 0x507cc
int64_t function_507cb(void) {
    // 0x507cb
    int64_t result; // 0x507cb
    return result;
}

// Address range: 0x507f5 - 0x507f6
int64_t function_507f5(void) {
    // 0x507f5
    int64_t result; // 0x507f5
    return result;
}

// Address range: 0x50905 - 0x50906
int64_t function_50905(void) {
    // 0x50905
    int64_t result; // 0x50905
    return result;
}

// Address range: 0x50ae1 - 0x50ae2
int64_t function_50ae1(void) {
    // 0x50ae1
    int64_t result; // 0x50ae1
    return result;
}

// Address range: 0x50c4d - 0x50c4e
int64_t function_50c4d(void) {
    // 0x50c4d
    int64_t result; // 0x50c4d
    return result;
}

// Address range: 0x50ce1 - 0x50ce2
int64_t function_50ce1(void) {
    // 0x50ce1
    int64_t result; // 0x50ce1
    return result;
}

// Address range: 0x50e9d - 0x50e9e
int64_t function_50e9d(void) {
    // 0x50e9d
    int64_t result; // 0x50e9d
    return result;
}

// Address range: 0x5100d - 0x5100e
int64_t function_5100d(void) {
    // 0x5100d
    int64_t result; // 0x5100d
    return result;
}

// Address range: 0x51049 - 0x5104a
int64_t function_51049(void) {
    // 0x51049
    int64_t result; // 0x51049
    return result;
}

// Address range: 0x5146d - 0x5146e
int64_t function_5146d(void) {
    // 0x5146d
    int64_t result; // 0x5146d
    return result;
}

// Address range: 0x51d33 - 0x51d34
int64_t function_51d33(void) {
    // 0x51d33
    int64_t result; // 0x51d33
    return result;
}

// Address range: 0x5236b - 0x5236c
int64_t function_5236b(void) {
    // 0x5236b
    int64_t result; // 0x5236b
    return result;
}

// Address range: 0x5243f - 0x52440
int64_t function_5243f(void) {
    // 0x5243f
    int64_t result; // 0x5243f
    return result;
}

// Address range: 0x5271d - 0x5271e
int64_t function_5271d(void) {
    // 0x5271d
    int64_t result; // 0x5271d
    return result;
}
