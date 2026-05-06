/*
 * Targeted RetDec C for native executable gap queue batch 6638.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x32791-0x327a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x39101-0x39110 rank=- name=- kind=- bytes=- uncovered=-
 *   0x3de78-0x3de87 rank=- name=- kind=- bytes=- uncovered=-
 *   0x508eb-0x508fa rank=- name=- kind=- bytes=- uncovered=-
 *   0x60c75-0x60c84 rank=- name=- kind=- bytes=- uncovered=-
 *   0x676f2-0x67701 rank=- name=- kind=- bytes=- uncovered=-
 *   0x134648-0x134657 rank=- name=- kind=- bytes=- uncovered=-
 *   0x496a51-0x496a60 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49a041-0x49a050 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4a0701-0x4a0710 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b00d1-0x4b00e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b8791-0x4b87a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5245f2-0x524600 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53f742-0x53f750 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54d312-0x54d320 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54d332-0x54d340 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54da42-0x54da50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54da62-0x54da70 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54da82-0x54da90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54daa2-0x54dab0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54dac2-0x54dad0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54dae2-0x54daf0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54db02-0x54db10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54db22-0x54db30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54dc42-0x54dc50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54dc62-0x54dc70 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54dc82-0x54dc90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54dca2-0x54dcb0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54dcc2-0x54dcd0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54dce2-0x54dcf0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54dd02-0x54dd10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54dd22-0x54dd30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54deb2-0x54dec0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54def2-0x54df00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54df32-0x54df40 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54df72-0x54df80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54e0b2-0x54e0c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54e4b2-0x54e4c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54f542-0x54f550 rank=- name=- kind=- bytes=- uncovered=-
 *   0x551ea2-0x551eb0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x551f22-0x551f30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x552452-0x552460 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5524c2-0x5524d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x558af2-0x558b00 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5632d2-0x5632e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x563492-0x5634a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x563802-0x563810 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5651f2-0x565200 rank=- name=- kind=- bytes=- uncovered=-
 *   0x565962-0x565970 rank=- name=- kind=- bytes=- uncovered=-
 *   0x565972-0x565980 rank=- name=- kind=- bytes=- uncovered=-
 *   0x566ba2-0x566bb0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x566be2-0x566bf0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x566c22-0x566c30 rank=- name=- kind=- bytes=- uncovered=-
 *   0x566c62-0x566c70 rank=- name=- kind=- bytes=- uncovered=-
 *   0x566ca2-0x566cb0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x566d52-0x566d60 rank=- name=- kind=- bytes=- uncovered=-
 *   0x566d92-0x566da0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x566dd2-0x566de0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x566e12-0x566e20 rank=- name=- kind=- bytes=- uncovered=-
 *   0x567842-0x567850 rank=- name=- kind=- bytes=- uncovered=-
 *   0x568882-0x568890 rank=- name=- kind=- bytes=- uncovered=-
 *   0x568fc2-0x568fd0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56bf02-0x56bf10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57ca92-0x57caa0 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_1345ea();
int64_t function_134648(uint64_t a1);
int64_t function_32791(void);
int64_t function_39101(void);
int64_t function_3de78(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_496a51(void);
int64_t function_496a54(void);
int64_t function_49a041(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_49a049(void);
int64_t function_4a0701(void);
int64_t function_4b00d1(void);
int64_t function_4b8705();
int64_t function_4b8791(int64_t a1);
int64_t function_4b8794(void);
int64_t function_508eb(void);
int64_t function_508f0(int64_t a1);
int64_t function_508f6(void);
int64_t function_5245de();
int64_t function_5245f2(void);
int64_t function_5245f3(void);
int64_t function_53f742(void);
int64_t function_54d312(void);
int64_t function_54d332(void);
int64_t function_54da42(void);
int64_t function_54da62(void);
int64_t function_54da82(void);
int64_t function_54daa2(void);
int64_t function_54dac2(void);
int64_t function_54dae2(void);
int64_t function_54db02(void);
int64_t function_54db22(void);
int64_t function_54dc42(void);
int64_t function_54dc62(void);
int64_t function_54dc82(void);
int64_t function_54dca2(void);
int64_t function_54dcc2(void);
int64_t function_54dce2(void);
int64_t function_54dd02(void);
int64_t function_54dd22(void);
int64_t function_54deb2(int64_t a1);
int64_t function_54def2(void);
int64_t function_54df32(void);
int64_t function_54df72(void);
int64_t function_54e0b2(int64_t a1);
int64_t function_54e4b2(int64_t a1);
int64_t function_54f542(void);
int64_t function_551ea2(void);
int64_t function_551f22(void);
int64_t function_552452(void);
int64_t function_5524c2(void);
int64_t function_558aa5();
int64_t function_558af2(void);
int64_t function_558af7(void);
int64_t function_5632d2(void);
int64_t function_563492(void);
int64_t function_563802(void);
int64_t function_5651f2(void);
int64_t function_565962(void);
int64_t function_565972(void);
int64_t function_566ba2(void);
int64_t function_566be2(void);
int64_t function_566c22(void);
int64_t function_566c62(void);
int64_t function_566ca2(void);
int64_t function_566d52(void);
int64_t function_566d92(void);
int64_t function_566dd2(void);
int64_t function_566e12(void);
int64_t function_5677d2();
int64_t function_567842(int64_t a1);
int64_t function_568882(void);
int64_t function_568fc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_56bf02(void);
int64_t function_57ca92(int64_t a1);
int64_t function_57ca98(void);
int64_t function_60c75(int64_t a1, int64_t a2, int64_t a3);
int64_t function_676f2(uint64_t a1, uint64_t a2, uint64_t a3);

// Address range: 0x32791 - 0x32795
int64_t function_32791(void) {
    // 0x32791
    return 0;
}

// Address range: 0x39101 - 0x39110
int64_t function_39101(void) {
    // 0x39101
    int64_t result; // 0x39101
    return result;
}

// Address range: 0x3de78 - 0x3de87
int64_t function_3de78(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x3de78
    return (int64_t)realloc((int64_t *)a2, (int32_t)(a4 * a3));
}

// Address range: 0x508eb - 0x508ef
int64_t function_508eb(void) {
    // 0x508eb
    int64_t v1; // 0x508eb
    return v1 & -256 | 1;
}

// Address range: 0x508f0 - 0x508f5
int64_t function_508f0(int64_t a1) {
    // 0x508f0
    return *(int64_t *)(a1 + 48);
}

// Address range: 0x508f6 - 0x508f9
int64_t function_508f6(void) {
    // 0x508f6
    int64_t v1; // 0x508f6
    return v1 & -256 | 1;
}

// Address range: 0x60c75 - 0x60c83
int64_t function_60c75(int64_t a1, int64_t a2, int64_t a3) {
    // 0x60c75
    int64_t v1; // 0x60c75
    return (int16_t)v1 >= (int16_t)v1 ? a1 : a2;
}

// Address range: 0x676f2 - 0x67701
int64_t function_676f2(uint64_t a1, uint64_t a2, uint64_t a3) {
    // 0x676f2
    int64_t v1; // 0x676f2
    return (v1 & 0xffffff00 | (int64_t)(a1 >= a2)) & (a3 & 0xffffff00 | (int64_t)(a1 < a3));
}

// Address range: 0x134648 - 0x134654
int64_t function_134648(uint64_t a1) {
    // 0x134648
    int64_t v1; // 0x134648
    uint32_t v2 = (int32_t)v1; // 0x134649
    uint32_t v3 = (a1 % 2 != 0 ? 0x32fcb908 : 0x32fcb907) + v2; // 0x134649
    int64_t v4 = v3; // 0x13464e
    if (v3 < 0 == (v3 + (int32_t)(a1 % 2 != 0) & (v2 ^ -0x80000000)) < 0 == (v3 != 0)) {
        v4 = function_1345ea();
    }
    int64_t v5 = v4;
    int64_t v6 = a1 % 2 != 0 ? v3 <= v2 : v2 > 0xcd0346f8 ? 215 : 214; // 0x134650
    return (v5 + v6) % 256 | v5 & -256;
}

// Address range: 0x496a51 - 0x496a52
int64_t function_496a51(void) {
    // 0x496a51
    int64_t result; // 0x496a51
    return result;
}

// Address range: 0x496a54 - 0x496a57
int64_t function_496a54(void) {
    // 0x496a54
    int64_t v1; // 0x496a54
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    return result;
}

// Address range: 0x49a041 - 0x49a047
int64_t function_49a041(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    char * v1 = (char *)(a1 + 0x9e9ffff); // 0x49a041
    *v1 = *v1 + (char)a4;
    int64_t result; // 0x49a041
    return result;
}

// Address range: 0x49a049 - 0x49a04c
int64_t function_49a049(void) {
    // 0x49a049
    int64_t result; // 0x49a049
    return result;
}

// Address range: 0x4a0701 - 0x4a0710
int64_t function_4a0701(void) {
    // 0x4a0701
    int64_t result; // 0x4a0701
    return result;
}

// Address range: 0x4b00d1 - 0x4b00e0
int64_t function_4b00d1(void) {
    // 0x4b00d1
    int64_t result; // 0x4b00d1
    return result;
}

// Address range: 0x4b8791 - 0x4b8794
int64_t function_4b8791(int64_t a1) {
    // 0x4b8791
    int64_t result; // 0x4b8791
    return result;
}

// Address range: 0x4b8794 - 0x4b879e
int64_t function_4b8794(void) {
    // 0x4b8794
    return function_4b8705();
}

// Address range: 0x5245f2 - 0x5245f3
int64_t function_5245f2(void) {
    // 0x5245f2
    int64_t result; // 0x5245f2
    return result;
}

// Address range: 0x5245f3 - 0x5245f8
int64_t function_5245f3(void) {
    // 0x5245f3
    return function_5245de();
}

// Address range: 0x53f742 - 0x53f750
int64_t function_53f742(void) {
    // 0x53f742
    int64_t result; // 0x53f742
    return result;
}

// Address range: 0x54d312 - 0x54d320
int64_t function_54d312(void) {
    // 0x54d312
    int64_t result; // 0x54d312
    return result;
}

// Address range: 0x54d332 - 0x54d340
int64_t function_54d332(void) {
    // 0x54d332
    int64_t result; // 0x54d332
    return result;
}

// Address range: 0x54da42 - 0x54da50
int64_t function_54da42(void) {
    // 0x54da42
    int64_t result; // 0x54da42
    return result;
}

// Address range: 0x54da62 - 0x54da70
int64_t function_54da62(void) {
    // 0x54da62
    int64_t result; // 0x54da62
    return result;
}

// Address range: 0x54da82 - 0x54da90
int64_t function_54da82(void) {
    // 0x54da82
    int64_t result; // 0x54da82
    return result;
}

// Address range: 0x54daa2 - 0x54dab0
int64_t function_54daa2(void) {
    // 0x54daa2
    int64_t result; // 0x54daa2
    return result;
}

// Address range: 0x54dac2 - 0x54dad0
int64_t function_54dac2(void) {
    // 0x54dac2
    int64_t result; // 0x54dac2
    return result;
}

// Address range: 0x54dae2 - 0x54daf0
int64_t function_54dae2(void) {
    // 0x54dae2
    int64_t result; // 0x54dae2
    return result;
}

// Address range: 0x54db02 - 0x54db10
int64_t function_54db02(void) {
    // 0x54db02
    int64_t result; // 0x54db02
    return result;
}

// Address range: 0x54db22 - 0x54db30
int64_t function_54db22(void) {
    // 0x54db22
    int64_t result; // 0x54db22
    return result;
}

// Address range: 0x54dc42 - 0x54dc50
int64_t function_54dc42(void) {
    // 0x54dc42
    int64_t result; // 0x54dc42
    return result;
}

// Address range: 0x54dc62 - 0x54dc70
int64_t function_54dc62(void) {
    // 0x54dc62
    int64_t result; // 0x54dc62
    return result;
}

// Address range: 0x54dc82 - 0x54dc90
int64_t function_54dc82(void) {
    // 0x54dc82
    int64_t result; // 0x54dc82
    return result;
}

// Address range: 0x54dca2 - 0x54dcb0
int64_t function_54dca2(void) {
    // 0x54dca2
    int64_t result; // 0x54dca2
    return result;
}

// Address range: 0x54dcc2 - 0x54dcd0
int64_t function_54dcc2(void) {
    // 0x54dcc2
    int64_t result; // 0x54dcc2
    return result;
}

// Address range: 0x54dce2 - 0x54dcf0
int64_t function_54dce2(void) {
    // 0x54dce2
    int64_t result; // 0x54dce2
    return result;
}

// Address range: 0x54dd02 - 0x54dd10
int64_t function_54dd02(void) {
    // 0x54dd02
    int64_t result; // 0x54dd02
    return result;
}

// Address range: 0x54dd22 - 0x54dd30
int64_t function_54dd22(void) {
    // 0x54dd22
    int64_t result; // 0x54dd22
    return result;
}

// Address range: 0x54deb2 - 0x54debb
int64_t function_54deb2(int64_t a1) {
    // 0x54deb2
    int64_t v1; // 0x54deb2
    int64_t v2 = v1;
    *(int32_t *)v2 = 2 * (int32_t)v2;
    int64_t result; // 0x54deb2
    int64_t v3 = result;
    *(char *)v3 = *(char *)&result + (char)v3;
    *(int64_t *)a1 = a1 + 2;
    return result;
}

// Address range: 0x54def2 - 0x54df00
int64_t function_54def2(void) {
    // 0x54def2
    int64_t result; // 0x54def2
    return result;
}

// Address range: 0x54df32 - 0x54df40
int64_t function_54df32(void) {
    // 0x54df32
    int64_t result; // 0x54df32
    return result;
}

// Address range: 0x54df72 - 0x54df80
int64_t function_54df72(void) {
    // 0x54df72
    int64_t result; // 0x54df72
    return result;
}

// Address range: 0x54e0b2 - 0x54e0b6
int64_t function_54e0b2(int64_t a1) {
    // 0x54e0b2
    int64_t result; // 0x54e0b2
    *(int32_t *)a1 = (int32_t)result + 3;
    return result;
}

// Address range: 0x54e4b2 - 0x54e4bc
int64_t function_54e4b2(int64_t a1) {
    // 0x54e4b2
    *(int64_t *)a1 = a1 + 2;
    return 1;
}

// Address range: 0x54f542 - 0x54f550
int64_t function_54f542(void) {
    // 0x54f542
    int64_t result; // 0x54f542
    return result;
}

// Address range: 0x551ea2 - 0x551eb0
int64_t function_551ea2(void) {
    // 0x551ea2
    int64_t result; // 0x551ea2
    return result;
}

// Address range: 0x551f22 - 0x551f30
int64_t function_551f22(void) {
    // 0x551f22
    int64_t result; // 0x551f22
    return result;
}

// Address range: 0x552452 - 0x552460
int64_t function_552452(void) {
    // 0x552452
    int64_t result; // 0x552452
    return result;
}

// Address range: 0x5524c2 - 0x5524d0
int64_t function_5524c2(void) {
    // 0x5524c2
    int64_t result; // 0x5524c2
    return result;
}

// Address range: 0x558af2 - 0x558af3
int64_t function_558af2(void) {
    // 0x558af2
    int64_t result; // 0x558af2
    return result;
}

// Address range: 0x558af7 - 0x558afc
int64_t function_558af7(void) {
    // 0x558af7
    int64_t result; // 0x558af7
    bool v1; // 0x558af7
    if (!v1) {
        result = function_558aa5();
    }
    // 0x558af9
    return result;
}

// Address range: 0x5632d2 - 0x5632e0
int64_t function_5632d2(void) {
    // 0x5632d2
    int64_t result; // 0x5632d2
    return result;
}

// Address range: 0x563492 - 0x5634a0
int64_t function_563492(void) {
    // 0x563492
    int64_t result; // 0x563492
    return result;
}

// Address range: 0x563802 - 0x563810
int64_t function_563802(void) {
    // 0x563802
    int64_t result; // 0x563802
    return result;
}

// Address range: 0x5651f2 - 0x565200
int64_t function_5651f2(void) {
    // 0x5651f2
    int64_t result; // 0x5651f2
    return result;
}

// Address range: 0x565962 - 0x565970
int64_t function_565962(void) {
    // 0x565962
    int64_t result; // 0x565962
    return result;
}

// Address range: 0x565972 - 0x565980
int64_t function_565972(void) {
    // 0x565972
    int64_t result; // 0x565972
    return result;
}

// Address range: 0x566ba2 - 0x566bb0
int64_t function_566ba2(void) {
    // 0x566ba2
    int64_t result; // 0x566ba2
    return result;
}

// Address range: 0x566be2 - 0x566bf0
int64_t function_566be2(void) {
    // 0x566be2
    int64_t result; // 0x566be2
    return result;
}

// Address range: 0x566c22 - 0x566c30
int64_t function_566c22(void) {
    // 0x566c22
    int64_t result; // 0x566c22
    return result;
}

// Address range: 0x566c62 - 0x566c70
int64_t function_566c62(void) {
    // 0x566c62
    int64_t result; // 0x566c62
    return result;
}

// Address range: 0x566ca2 - 0x566cb0
int64_t function_566ca2(void) {
    // 0x566ca2
    int64_t result; // 0x566ca2
    return result;
}

// Address range: 0x566d52 - 0x566d60
int64_t function_566d52(void) {
    // 0x566d52
    int64_t result; // 0x566d52
    return result;
}

// Address range: 0x566d92 - 0x566da0
int64_t function_566d92(void) {
    // 0x566d92
    int64_t result; // 0x566d92
    return result;
}

// Address range: 0x566dd2 - 0x566de0
int64_t function_566dd2(void) {
    // 0x566dd2
    int64_t result; // 0x566dd2
    return result;
}

// Address range: 0x566e12 - 0x566e20
int64_t function_566e12(void) {
    // 0x566e12
    int64_t result; // 0x566e12
    return result;
}

// Address range: 0x567842 - 0x567848
int64_t function_567842(int64_t a1) {
    // 0x567842
    int64_t result; // 0x567842
    bool v1; // 0x567842
    if (v1) {
        result = function_5677d2();
    }
    // 0x567844
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x568882 - 0x568890
int64_t function_568882(void) {
    // 0x568882
    int64_t result; // 0x568882
    return result;
}

// Address range: 0x568fc2 - 0x568fce
int64_t function_568fc2(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x568fc2
    int64_t v1; // 0x568fc2
    int64_t result = v1 & 32 | 65; // 0x568fc5
    *(char *)a4 = (char)result;
    *(char *)a3 = 0;
    return result;
}

// Address range: 0x56bf02 - 0x56bf10
int64_t function_56bf02(void) {
    // 0x56bf02
    int64_t result; // 0x56bf02
    return result;
}

// Address range: 0x57ca92 - 0x57ca94
int64_t function_57ca92(int64_t a1) {
    // 0x57ca92
    int64_t result; // 0x57ca92
    return result;
}

// Address range: 0x57ca98 - 0x57ca9b
int64_t function_57ca98(void) {
    // 0x57ca98
    return 0;
}
