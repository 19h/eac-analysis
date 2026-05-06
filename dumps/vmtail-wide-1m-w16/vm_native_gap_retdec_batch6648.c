/*
 * Targeted RetDec C for native executable gap queue batch 6648.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x214ec-0x214f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x24cac-0x24cb0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x252dc-0x252e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x35a4c-0x35a50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3af2a-0x3af2e rank=- name=- kind=- bytes=- uncovered=-
 *   0x6a971-0x6a974 rank=- name=- kind=- bytes=- uncovered=-
 *   0x48c829-0x48c82e rank=- name=- kind=- bytes=- uncovered=-
 *   0x496aac-0x496ab0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ac56d-0x4ac570 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ad71b-0x4ad720 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b088d-0x4b0890 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b0bdd-0x4b0be0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b772d-0x4b7730 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b9fec-0x4b9ff0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c05fd-0x4c0600 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c1aed-0x4c1af0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c2b2d-0x4c2b30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c831d-0x4c8320 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cb51d-0x4cb520 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cc7cd-0x4cc7d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ccd4d-0x4ccd50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4cebad-0x4cebb0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d4f0c-0x4d4f10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d8fed-0x4d8ff0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4efb4c-0x4efb50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f159c-0x4f15a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f316c-0x4f3170 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f31fc-0x4f3200 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4f533d-0x4f5340 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fd54c-0x4fd550 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50106d-0x501070 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50827d-0x508280 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5082dd-0x5082e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x50cd3d-0x50cd40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x517bec-0x517bf0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52e2cd-0x52e2d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52e32d-0x52e330 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52e88c-0x52e890 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52e8dc-0x52e8e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52e92c-0x52e930 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52e97c-0x52e980 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52e9cc-0x52e9d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52ea1c-0x52ea20 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52ea6c-0x52ea70 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5403cc-0x5403d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x540b1c-0x540b20 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5472ec-0x5472f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54d6dc-0x54d6e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54e76d-0x54e770 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54e7fd-0x54e800 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54f42c-0x54f430 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5508fc-0x550900 rank=- name=- kind=- bytes=- uncovered=-
 *   0x55237d-0x552380 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5523dd-0x5523e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5631ac-0x5631b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5631ec-0x5631f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x564cdd-0x564ce0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56b99c-0x56b9a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56fc0d-0x56fc10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56fc7d-0x56fc80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5737fd-0x573800 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57391c-0x573920 rank=- name=- kind=- bytes=- uncovered=-
 *   0x579a2c-0x579a30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57a0bd-0x57a0c0 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_214ec(void);
int64_t function_24cac(int64_t result);
int64_t function_252dc(int64_t result);
int64_t function_35a4c(void);
int64_t function_3af2a(void);
int64_t function_3af2c(void);
int64_t function_48c829(int64_t result);
int64_t function_496aac(void);
int64_t function_4ac56d(void);
int64_t function_4ad71b(void);
int64_t function_4ad71d(int64_t a1);
int64_t function_4b088d(void);
int64_t function_4b0bdd(void);
int64_t function_4b772d(void);
int64_t function_4b9fec(void);
int64_t function_4c05fd(void);
int64_t function_4c1aed(void);
int64_t function_4c2b2d(void);
int64_t function_4c831d(void);
int64_t function_4cb51d(void);
int64_t function_4cc7cd(void);
int64_t function_4ccd4d(void);
int64_t function_4cebad(void);
int64_t function_4d4f0c(void);
int64_t function_4d8fed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4efb4c(void);
int64_t function_4f159c(void);
int64_t function_4f316c(void);
int64_t function_4f31fc(void);
int64_t function_4f533d(void);
int64_t function_4fd54c(void);
int64_t function_50106d(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_50827d(void);
int64_t function_5082dd(void);
int64_t function_50cd3d(void);
int64_t function_517bec(void);
int64_t function_52e2cd(void);
int64_t function_52e32d(void);
int64_t function_52e88c(void);
int64_t function_52e8dc(void);
int64_t function_52e92c(void);
int64_t function_52e97c(void);
int64_t function_52e9cc(void);
int64_t function_52ea1c(void);
int64_t function_52ea6c(void);
int64_t function_5403cc(void);
int64_t function_540b1c(void);
int64_t function_5472ec(void);
int64_t function_54d6dc(void);
int64_t function_54e76d(void);
int64_t function_54e7fd(void);
int64_t function_54f42c(void);
int64_t function_5508fc(void);
int64_t function_5508fd(void);
int64_t function_55237d(void);
int64_t function_5523dd(void);
int64_t function_5631ac(void);
int64_t function_5631ec(void);
int64_t function_564cdd(void);
int64_t function_56b99c(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_56fc0d(void);
int64_t function_56fc7d(void);
int64_t function_5737fd(void);
int64_t function_57391c(void);
int64_t function_579a2c(void);
int64_t function_57a0bd(int64_t a1);
int64_t function_6a971(void);

// Address range: 0x214ec - 0x214f0
int64_t function_214ec(void) {
    // 0x214ec
    int64_t result; // 0x214ec
    return result;
}

// Address range: 0x24cac - 0x24cb0
int64_t function_24cac(int64_t result) {
    // 0x24cac
    return result;
}

// Address range: 0x252dc - 0x252e0
int64_t function_252dc(int64_t result) {
    // 0x252dc
    return result;
}

// Address range: 0x35a4c - 0x35a4f
int64_t function_35a4c(void) {
    // 0x35a4c
    return 0;
}

// Address range: 0x3af2a - 0x3af2b
int64_t function_3af2a(void) {
    // 0x3af2a
    int64_t result; // 0x3af2a
    return result;
}

// Address range: 0x3af2c - 0x3af2d
int64_t function_3af2c(void) {
    // 0x3af2c
    int64_t result; // 0x3af2c
    return result;
}

// Address range: 0x6a971 - 0x6a973
int64_t function_6a971(void) {
    // 0x6a971
    int64_t result; // 0x6a971
    return result;
}

// Address range: 0x48c829 - 0x48c82e
int64_t function_48c829(int64_t result) {
    // 0x48c829
    return result;
}

// Address range: 0x496aac - 0x496ab0
int64_t function_496aac(void) {
    // 0x496aac
    int64_t result; // 0x496aac
    return result;
}

// Address range: 0x4ac56d - 0x4ac570
int64_t function_4ac56d(void) {
    // 0x4ac56d
    int64_t result; // 0x4ac56d
    return result;
}

// Address range: 0x4ad71b - 0x4ad71c
int64_t function_4ad71b(void) {
    // 0x4ad71b
    int64_t result; // 0x4ad71b
    return result;
}

// Address range: 0x4ad71d - 0x4ad71f
int64_t function_4ad71d(int64_t a1) {
    // 0x4ad71d
    int64_t result; // 0x4ad71d
    return result;
}

// Address range: 0x4b088d - 0x4b0890
int64_t function_4b088d(void) {
    // 0x4b088d
    int64_t result; // 0x4b088d
    return result;
}

// Address range: 0x4b0bdd - 0x4b0be0
int64_t function_4b0bdd(void) {
    // 0x4b0bdd
    int64_t result; // 0x4b0bdd
    return result;
}

// Address range: 0x4b772d - 0x4b7730
int64_t function_4b772d(void) {
    // 0x4b772d
    int64_t result; // 0x4b772d
    return result;
}

// Address range: 0x4b9fec - 0x4b9ff0
int64_t function_4b9fec(void) {
    // 0x4b9fec
    int64_t result; // 0x4b9fec
    return result;
}

// Address range: 0x4c05fd - 0x4c0600
int64_t function_4c05fd(void) {
    // 0x4c05fd
    int64_t result; // 0x4c05fd
    return result;
}

// Address range: 0x4c1aed - 0x4c1af0
int64_t function_4c1aed(void) {
    // 0x4c1aed
    int64_t result; // 0x4c1aed
    return result;
}

// Address range: 0x4c2b2d - 0x4c2b30
int64_t function_4c2b2d(void) {
    // 0x4c2b2d
    int64_t result; // 0x4c2b2d
    return result;
}

// Address range: 0x4c831d - 0x4c8320
int64_t function_4c831d(void) {
    // 0x4c831d
    int64_t result; // 0x4c831d
    return result;
}

// Address range: 0x4cb51d - 0x4cb520
int64_t function_4cb51d(void) {
    // 0x4cb51d
    int64_t result; // 0x4cb51d
    return result;
}

// Address range: 0x4cc7cd - 0x4cc7d0
int64_t function_4cc7cd(void) {
    // 0x4cc7cd
    int64_t result; // 0x4cc7cd
    return result;
}

// Address range: 0x4ccd4d - 0x4ccd50
int64_t function_4ccd4d(void) {
    // 0x4ccd4d
    int64_t result; // 0x4ccd4d
    return result;
}

// Address range: 0x4cebad - 0x4cebb0
int64_t function_4cebad(void) {
    // 0x4cebad
    int64_t result; // 0x4cebad
    return result;
}

// Address range: 0x4d4f0c - 0x4d4f10
int64_t function_4d4f0c(void) {
    // 0x4d4f0c
    int64_t result; // 0x4d4f0c
    return result;
}

// Address range: 0x4d8fed - 0x4d8ff0
int64_t function_4d8fed(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4d8fed
    int64_t v1; // 0x4d8fed
    int64_t result = v1;
    *(char *)result = (char)result + (char)a5;
    return result;
}

// Address range: 0x4efb4c - 0x4efb50
int64_t function_4efb4c(void) {
    // 0x4efb4c
    int64_t result; // 0x4efb4c
    return result;
}

// Address range: 0x4f159c - 0x4f15a0
int64_t function_4f159c(void) {
    // 0x4f159c
    int64_t result; // 0x4f159c
    return result;
}

// Address range: 0x4f316c - 0x4f3170
int64_t function_4f316c(void) {
    // 0x4f316c
    int64_t result; // 0x4f316c
    return result;
}

// Address range: 0x4f31fc - 0x4f3200
int64_t function_4f31fc(void) {
    // 0x4f31fc
    int64_t result; // 0x4f31fc
    return result;
}

// Address range: 0x4f533d - 0x4f5340
int64_t function_4f533d(void) {
    // 0x4f533d
    int64_t result; // 0x4f533d
    return result;
}

// Address range: 0x4fd54c - 0x4fd54f
int64_t function_4fd54c(void) {
    // 0x4fd54c
    int64_t v1; // 0x4fd54c
    return -v1 & 0xffffffff;
}

// Address range: 0x50106d - 0x501070
int64_t function_50106d(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x50106d
    int64_t result; // 0x50106d
    return result;
}

// Address range: 0x50827d - 0x508280
int64_t function_50827d(void) {
    // 0x50827d
    int64_t result; // 0x50827d
    return result;
}

// Address range: 0x5082dd - 0x5082e0
int64_t function_5082dd(void) {
    // 0x5082dd
    int64_t result; // 0x5082dd
    return result;
}

// Address range: 0x50cd3d - 0x50cd40
int64_t function_50cd3d(void) {
    // 0x50cd3d
    int64_t result; // 0x50cd3d
    return result;
}

// Address range: 0x517bec - 0x517bee
int64_t function_517bec(void) {
    // 0x517bec
    int64_t v1; // 0x517bec
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x52e2cd - 0x52e2d0
int64_t function_52e2cd(void) {
    // 0x52e2cd
    int64_t result; // 0x52e2cd
    return result;
}

// Address range: 0x52e32d - 0x52e330
int64_t function_52e32d(void) {
    // 0x52e32d
    int64_t result; // 0x52e32d
    return result;
}

// Address range: 0x52e88c - 0x52e890
int64_t function_52e88c(void) {
    // 0x52e88c
    int64_t result; // 0x52e88c
    return result;
}

// Address range: 0x52e8dc - 0x52e8e0
int64_t function_52e8dc(void) {
    // 0x52e8dc
    int64_t result; // 0x52e8dc
    return result;
}

// Address range: 0x52e92c - 0x52e930
int64_t function_52e92c(void) {
    // 0x52e92c
    int64_t result; // 0x52e92c
    return result;
}

// Address range: 0x52e97c - 0x52e980
int64_t function_52e97c(void) {
    // 0x52e97c
    int64_t result; // 0x52e97c
    return result;
}

// Address range: 0x52e9cc - 0x52e9d0
int64_t function_52e9cc(void) {
    // 0x52e9cc
    int64_t result; // 0x52e9cc
    return result;
}

// Address range: 0x52ea1c - 0x52ea20
int64_t function_52ea1c(void) {
    // 0x52ea1c
    int64_t result; // 0x52ea1c
    return result;
}

// Address range: 0x52ea6c - 0x52ea70
int64_t function_52ea6c(void) {
    // 0x52ea6c
    int64_t result; // 0x52ea6c
    return result;
}

// Address range: 0x5403cc - 0x5403d0
int64_t function_5403cc(void) {
    // 0x5403cc
    int64_t result; // 0x5403cc
    return result;
}

// Address range: 0x540b1c - 0x540b20
int64_t function_540b1c(void) {
    // 0x540b1c
    int64_t result; // 0x540b1c
    return result;
}

// Address range: 0x5472ec - 0x5472f0
int64_t function_5472ec(void) {
    // 0x5472ec
    int64_t result; // 0x5472ec
    return result;
}

// Address range: 0x54d6dc - 0x54d6e0
int64_t function_54d6dc(void) {
    // 0x54d6dc
    int64_t result; // 0x54d6dc
    return result;
}

// Address range: 0x54e76d - 0x54e770
int64_t function_54e76d(void) {
    // 0x54e76d
    int64_t result; // 0x54e76d
    return result;
}

// Address range: 0x54e7fd - 0x54e800
int64_t function_54e7fd(void) {
    // 0x54e7fd
    int64_t result; // 0x54e7fd
    return result;
}

// Address range: 0x54f42c - 0x54f430
int64_t function_54f42c(void) {
    // 0x54f42c
    int64_t result; // 0x54f42c
    return result;
}

// Address range: 0x5508fc - 0x5508fd
int64_t function_5508fc(void) {
    // 0x5508fc
    int64_t result; // 0x5508fc
    return result;
}

// Address range: 0x5508fd - 0x550900
int64_t function_5508fd(void) {
    // 0x5508fd
    int64_t result; // 0x5508fd
    return result;
}

// Address range: 0x55237d - 0x552380
int64_t function_55237d(void) {
    // 0x55237d
    int64_t result; // 0x55237d
    return result;
}

// Address range: 0x5523dd - 0x5523e0
int64_t function_5523dd(void) {
    // 0x5523dd
    int64_t result; // 0x5523dd
    return result;
}

// Address range: 0x5631ac - 0x5631b0
int64_t function_5631ac(void) {
    // 0x5631ac
    int64_t result; // 0x5631ac
    return result;
}

// Address range: 0x5631ec - 0x5631f0
int64_t function_5631ec(void) {
    // 0x5631ec
    int64_t result; // 0x5631ec
    return result;
}

// Address range: 0x564cdd - 0x564ce0
int64_t function_564cdd(void) {
    // 0x564cdd
    int64_t result; // 0x564cdd
    return result;
}

// Address range: 0x56b99c - 0x56b99f
int64_t function_56b99c(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x56b99c
    int64_t result; // 0x56b99c
    char * v1 = (char *)(result - 85); // 0x56b99c
    *v1 = *v1 & (char)a4;
    return result;
}

// Address range: 0x56fc0d - 0x56fc10
int64_t function_56fc0d(void) {
    // 0x56fc0d
    int64_t result; // 0x56fc0d
    return result;
}

// Address range: 0x56fc7d - 0x56fc80
int64_t function_56fc7d(void) {
    // 0x56fc7d
    int64_t result; // 0x56fc7d
    return result;
}

// Address range: 0x5737fd - 0x5737ff
int64_t function_5737fd(void) {
    // 0x5737fd
    int64_t v1; // 0x5737fd
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x57391c - 0x57391d
int64_t function_57391c(void) {
    // 0x57391c
    int64_t result; // 0x57391c
    return result;
}

// Address range: 0x579a2c - 0x579a30
int64_t function_579a2c(void) {
    // 0x579a2c
    int64_t result; // 0x579a2c
    return result;
}

// Address range: 0x57a0bd - 0x57a0c0
int64_t function_57a0bd(int64_t a1) {
    // 0x57a0bd
    return a1 & 0xffffffff;
}
