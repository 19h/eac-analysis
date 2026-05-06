/*
 * Targeted RetDec C for native executable gap queue batch 6651.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x5244f-0x52450 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52489-0x5248a rank=- name=- kind=- bytes=- uncovered=-
 *   0x525ef-0x525f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52767-0x52768 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5276f-0x52770 rank=- name=- kind=- bytes=- uncovered=-
 *   0x527a3-0x527a4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52875-0x52876 rank=- name=- kind=- bytes=- uncovered=-
 *   0x529c1-0x529c2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52c61-0x52c62 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52d85-0x52d86 rank=- name=- kind=- bytes=- uncovered=-
 *   0x531bd-0x531be rank=- name=- kind=- bytes=- uncovered=-
 *   0x533c5-0x533c6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53471-0x53472 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53a4b-0x53a4c rank=- name=- kind=- bytes=- uncovered=-
 *   0x53a57-0x53a58 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53ee5-0x53ee6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x548af-0x548b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54b1f-0x54b20 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54be5-0x54be6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54c7b-0x54c7c rank=- name=- kind=- bytes=- uncovered=-
 *   0x54cf7-0x54cf8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54d03-0x54d04 rank=- name=- kind=- bytes=- uncovered=-
 *   0x552bd-0x552be rank=- name=- kind=- bytes=- uncovered=-
 *   0x55de1-0x55de2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x560a5-0x560a6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56109-0x5610a rank=- name=- kind=- bytes=- uncovered=-
 *   0x56273-0x56274 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5646b-0x5646c rank=- name=- kind=- bytes=- uncovered=-
 *   0x5650f-0x56510 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5659f-0x565a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5662f-0x56630 rank=- name=- kind=- bytes=- uncovered=-
 *   0x566bf-0x566c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5674f-0x56750 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56787-0x56788 rank=- name=- kind=- bytes=- uncovered=-
 *   0x568c3-0x568c4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56df7-0x56df8 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56ee3-0x56ee4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56f15-0x56f16 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5715f-0x57160 rank=- name=- kind=- bytes=- uncovered=-
 *   0x573fd-0x573fe rank=- name=- kind=- bytes=- uncovered=-
 *   0x5764f-0x57650 rank=- name=- kind=- bytes=- uncovered=-
 *   0x57777-0x57778 rank=- name=- kind=- bytes=- uncovered=-
 *   0x593cd-0x593ce rank=- name=- kind=- bytes=- uncovered=-
 *   0x59c57-0x59c58 rank=- name=- kind=- bytes=- uncovered=-
 *   0x59cd1-0x59cd2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x59e45-0x59e46 rank=- name=- kind=- bytes=- uncovered=-
 *   0x59e47-0x59e48 rank=- name=- kind=- bytes=- uncovered=-
 *   0x59e5b-0x59e5c rank=- name=- kind=- bytes=- uncovered=-
 *   0x5a25d-0x5a25e rank=- name=- kind=- bytes=- uncovered=-
 *   0x5a46f-0x5a470 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5a55f-0x5a560 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5bfb1-0x5bfb2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5c045-0x5c046 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5c2b5-0x5c2b6 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5c5e1-0x5c5e2 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5c799-0x5c79a rank=- name=- kind=- bytes=- uncovered=-
 *   0x5cab3-0x5cab4 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5dc67-0x5dc68 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5dd29-0x5dd2a rank=- name=- kind=- bytes=- uncovered=-
 *   0x5f4cf-0x5f4d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x60809-0x6080a rank=- name=- kind=- bytes=- uncovered=-
 *   0x61221-0x61222 rank=- name=- kind=- bytes=- uncovered=-
 *   0x612e9-0x612ea rank=- name=- kind=- bytes=- uncovered=-
 *   0x61c45-0x61c46 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_5244f(void);
int64_t function_52489(void);
int64_t function_525ef(void);
int64_t function_52767(void);
int64_t function_5276f(void);
int64_t function_527a3(void);
int64_t function_52875(void);
int64_t function_529c1(void);
int64_t function_52c61(void);
int64_t function_52d85(void);
int64_t function_531bd(void);
int64_t function_533c5(void);
int64_t function_53471(void);
int64_t function_53a4b(void);
int64_t function_53a57(void);
int64_t function_53ee5(void);
int64_t function_548af(void);
int64_t function_54b1f(void);
int64_t function_54be5(void);
int64_t function_54c7b(void);
int64_t function_54cf7(void);
int64_t function_54d03(void);
int64_t function_552bd(void);
int64_t function_55de1(void);
int64_t function_560a5(void);
int64_t function_56109(void);
int64_t function_56273(void);
int64_t function_5646b(void);
int64_t function_5650f(void);
int64_t function_5659f(void);
int64_t function_5662f(void);
int64_t function_566bf(void);
int64_t function_5674f(void);
int64_t function_56787(void);
int64_t function_568c3(void);
int64_t function_56df7(void);
int64_t function_56ee3(void);
int64_t function_56f15(void);
int64_t function_5715f(void);
int64_t function_573fd(void);
int64_t function_5764f(void);
int64_t function_57777(void);
int64_t function_593cd(void);
int64_t function_59c57(void);
int64_t function_59cd1(void);
int64_t function_59e45(void);
int64_t function_59e47(void);
int64_t function_59e5b(void);
int64_t function_5a25d(void);
int64_t function_5a46f(void);
int64_t function_5a55f(void);
int64_t function_5bfb1(void);
int64_t function_5c045(void);
int64_t function_5c2b5(void);
int64_t function_5c5e1(void);
int64_t function_5c799(void);
int64_t function_5cab3(void);
int64_t function_5dc67(void);
int64_t function_5dd29(void);
int64_t function_5f4cf(void);
int64_t function_60809(void);
int64_t function_61221(void);
int64_t function_612e9(void);
int64_t function_61c45(void);

// Address range: 0x5244f - 0x52450
int64_t function_5244f(void) {
    // 0x5244f
    int64_t result; // 0x5244f
    return result;
}

// Address range: 0x52489 - 0x5248a
int64_t function_52489(void) {
    // 0x52489
    int64_t result; // 0x52489
    return result;
}

// Address range: 0x525ef - 0x525f0
int64_t function_525ef(void) {
    // 0x525ef
    int64_t result; // 0x525ef
    return result;
}

// Address range: 0x52767 - 0x52768
int64_t function_52767(void) {
    // 0x52767
    int64_t result; // 0x52767
    return result;
}

// Address range: 0x5276f - 0x52770
int64_t function_5276f(void) {
    // 0x5276f
    int64_t result; // 0x5276f
    return result;
}

// Address range: 0x527a3 - 0x527a4
int64_t function_527a3(void) {
    // 0x527a3
    int64_t result; // 0x527a3
    return result;
}

// Address range: 0x52875 - 0x52876
int64_t function_52875(void) {
    // 0x52875
    int64_t result; // 0x52875
    return result;
}

// Address range: 0x529c1 - 0x529c2
int64_t function_529c1(void) {
    // 0x529c1
    int64_t result; // 0x529c1
    return result;
}

// Address range: 0x52c61 - 0x52c62
int64_t function_52c61(void) {
    // 0x52c61
    int64_t result; // 0x52c61
    return result;
}

// Address range: 0x52d85 - 0x52d86
int64_t function_52d85(void) {
    // 0x52d85
    int64_t result; // 0x52d85
    return result;
}

// Address range: 0x531bd - 0x531be
int64_t function_531bd(void) {
    // 0x531bd
    int64_t result; // 0x531bd
    return result;
}

// Address range: 0x533c5 - 0x533c6
int64_t function_533c5(void) {
    // 0x533c5
    int64_t result; // 0x533c5
    return result;
}

// Address range: 0x53471 - 0x53472
int64_t function_53471(void) {
    // 0x53471
    int64_t result; // 0x53471
    return result;
}

// Address range: 0x53a4b - 0x53a4c
int64_t function_53a4b(void) {
    // 0x53a4b
    int64_t result; // 0x53a4b
    return result;
}

// Address range: 0x53a57 - 0x53a58
int64_t function_53a57(void) {
    // 0x53a57
    int64_t result; // 0x53a57
    return result;
}

// Address range: 0x53ee5 - 0x53ee6
int64_t function_53ee5(void) {
    // 0x53ee5
    int64_t result; // 0x53ee5
    return result;
}

// Address range: 0x548af - 0x548b0
int64_t function_548af(void) {
    // 0x548af
    int64_t result; // 0x548af
    return result;
}

// Address range: 0x54b1f - 0x54b20
int64_t function_54b1f(void) {
    // 0x54b1f
    int64_t result; // 0x54b1f
    return result;
}

// Address range: 0x54be5 - 0x54be6
int64_t function_54be5(void) {
    // 0x54be5
    int64_t result; // 0x54be5
    return result;
}

// Address range: 0x54c7b - 0x54c7c
int64_t function_54c7b(void) {
    // 0x54c7b
    int64_t result; // 0x54c7b
    return result;
}

// Address range: 0x54cf7 - 0x54cf8
int64_t function_54cf7(void) {
    // 0x54cf7
    int64_t result; // 0x54cf7
    return result;
}

// Address range: 0x54d03 - 0x54d04
int64_t function_54d03(void) {
    // 0x54d03
    int64_t result; // 0x54d03
    return result;
}

// Address range: 0x552bd - 0x552be
int64_t function_552bd(void) {
    // 0x552bd
    int64_t result; // 0x552bd
    return result;
}

// Address range: 0x55de1 - 0x55de2
int64_t function_55de1(void) {
    // 0x55de1
    int64_t result; // 0x55de1
    return result;
}

// Address range: 0x560a5 - 0x560a6
int64_t function_560a5(void) {
    // 0x560a5
    int64_t result; // 0x560a5
    return result;
}

// Address range: 0x56109 - 0x5610a
int64_t function_56109(void) {
    // 0x56109
    int64_t result; // 0x56109
    return result;
}

// Address range: 0x56273 - 0x56274
int64_t function_56273(void) {
    // 0x56273
    int64_t result; // 0x56273
    return result;
}

// Address range: 0x5646b - 0x5646c
int64_t function_5646b(void) {
    // 0x5646b
    int64_t result; // 0x5646b
    return result;
}

// Address range: 0x5650f - 0x56510
int64_t function_5650f(void) {
    // 0x5650f
    int64_t result; // 0x5650f
    return result;
}

// Address range: 0x5659f - 0x565a0
int64_t function_5659f(void) {
    // 0x5659f
    int64_t result; // 0x5659f
    return result;
}

// Address range: 0x5662f - 0x56630
int64_t function_5662f(void) {
    // 0x5662f
    int64_t result; // 0x5662f
    return result;
}

// Address range: 0x566bf - 0x566c0
int64_t function_566bf(void) {
    // 0x566bf
    int64_t result; // 0x566bf
    return result;
}

// Address range: 0x5674f - 0x56750
int64_t function_5674f(void) {
    // 0x5674f
    int64_t result; // 0x5674f
    return result;
}

// Address range: 0x56787 - 0x56788
int64_t function_56787(void) {
    // 0x56787
    int64_t result; // 0x56787
    return result;
}

// Address range: 0x568c3 - 0x568c4
int64_t function_568c3(void) {
    // 0x568c3
    int64_t result; // 0x568c3
    return result;
}

// Address range: 0x56df7 - 0x56df8
int64_t function_56df7(void) {
    // 0x56df7
    int64_t result; // 0x56df7
    return result;
}

// Address range: 0x56ee3 - 0x56ee4
int64_t function_56ee3(void) {
    // 0x56ee3
    int64_t result; // 0x56ee3
    return result;
}

// Address range: 0x56f15 - 0x56f16
int64_t function_56f15(void) {
    // 0x56f15
    int64_t result; // 0x56f15
    return result;
}

// Address range: 0x5715f - 0x57160
int64_t function_5715f(void) {
    // 0x5715f
    int64_t result; // 0x5715f
    return result;
}

// Address range: 0x573fd - 0x573fe
int64_t function_573fd(void) {
    // 0x573fd
    int64_t result; // 0x573fd
    return result;
}

// Address range: 0x5764f - 0x57650
int64_t function_5764f(void) {
    // 0x5764f
    int64_t result; // 0x5764f
    return result;
}

// Address range: 0x57777 - 0x57778
int64_t function_57777(void) {
    // 0x57777
    int64_t result; // 0x57777
    return result;
}

// Address range: 0x593cd - 0x593ce
int64_t function_593cd(void) {
    // 0x593cd
    int64_t result; // 0x593cd
    return result;
}

// Address range: 0x59c57 - 0x59c58
int64_t function_59c57(void) {
    // 0x59c57
    int64_t result; // 0x59c57
    return result;
}

// Address range: 0x59cd1 - 0x59cd2
int64_t function_59cd1(void) {
    // 0x59cd1
    int64_t result; // 0x59cd1
    return result;
}

// Address range: 0x59e45 - 0x59e46
int64_t function_59e45(void) {
    // 0x59e45
    int64_t result; // 0x59e45
    return result;
}

// Address range: 0x59e47 - 0x59e48
int64_t function_59e47(void) {
    // 0x59e47
    int64_t result; // 0x59e47
    return result;
}

// Address range: 0x59e5b - 0x59e5c
int64_t function_59e5b(void) {
    // 0x59e5b
    int64_t result; // 0x59e5b
    return result;
}

// Address range: 0x5a25d - 0x5a25e
int64_t function_5a25d(void) {
    // 0x5a25d
    int64_t result; // 0x5a25d
    return result;
}

// Address range: 0x5a46f - 0x5a470
int64_t function_5a46f(void) {
    // 0x5a46f
    int64_t result; // 0x5a46f
    return result;
}

// Address range: 0x5a55f - 0x5a560
int64_t function_5a55f(void) {
    // 0x5a55f
    int64_t result; // 0x5a55f
    return result;
}

// Address range: 0x5bfb1 - 0x5bfb2
int64_t function_5bfb1(void) {
    // 0x5bfb1
    int64_t result; // 0x5bfb1
    return result;
}

// Address range: 0x5c045 - 0x5c046
int64_t function_5c045(void) {
    // 0x5c045
    int64_t result; // 0x5c045
    return result;
}

// Address range: 0x5c2b5 - 0x5c2b6
int64_t function_5c2b5(void) {
    // 0x5c2b5
    int64_t result; // 0x5c2b5
    return result;
}

// Address range: 0x5c5e1 - 0x5c5e2
int64_t function_5c5e1(void) {
    // 0x5c5e1
    int64_t result; // 0x5c5e1
    return result;
}

// Address range: 0x5c799 - 0x5c79a
int64_t function_5c799(void) {
    // 0x5c799
    int64_t result; // 0x5c799
    return result;
}

// Address range: 0x5cab3 - 0x5cab4
int64_t function_5cab3(void) {
    // 0x5cab3
    int64_t result; // 0x5cab3
    return result;
}

// Address range: 0x5dc67 - 0x5dc68
int64_t function_5dc67(void) {
    // 0x5dc67
    int64_t result; // 0x5dc67
    return result;
}

// Address range: 0x5dd29 - 0x5dd2a
int64_t function_5dd29(void) {
    // 0x5dd29
    int64_t result; // 0x5dd29
    return result;
}

// Address range: 0x5f4cf - 0x5f4d0
int64_t function_5f4cf(void) {
    // 0x5f4cf
    int64_t result; // 0x5f4cf
    return result;
}

// Address range: 0x60809 - 0x6080a
int64_t function_60809(void) {
    // 0x60809
    int64_t result; // 0x60809
    return result;
}

// Address range: 0x61221 - 0x61222
int64_t function_61221(void) {
    // 0x61221
    int64_t result; // 0x61221
    return result;
}

// Address range: 0x612e9 - 0x612ea
int64_t function_612e9(void) {
    // 0x612e9
    int64_t result; // 0x612e9
    return result;
}

// Address range: 0x61c45 - 0x61c46
int64_t function_61c45(void) {
    // 0x61c45
    int64_t result; // 0x61c45
    return result;
}
