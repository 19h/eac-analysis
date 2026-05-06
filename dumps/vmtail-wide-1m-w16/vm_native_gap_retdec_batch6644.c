/*
 * Targeted RetDec C for native executable gap queue batch 6644.
 *
 * This batch is fixed from the ranked native gap queue so it can feed the
 * executable coverage audit without creating a Make dependency cycle:
 * coverage -> queue -> RetDec batch -> coverage.
 *
 * Ranges:
 *   0x215a6-0x215b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52057-0x52060 rank=- name=- kind=- bytes=- uncovered=-
 *   0x68f97-0x68fa0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x68fa7-0x68fb0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x72931-0x7293a rank=- name=- kind=- bytes=- uncovered=-
 *   0x48db26-0x48db2f rank=- name=- kind=- bytes=- uncovered=-
 *   0x496be6-0x496bf0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x497647-0x497650 rank=- name=- kind=- bytes=- uncovered=-
 *   0x497666-0x497670 rank=- name=- kind=- bytes=- uncovered=-
 *   0x49f067-0x49f070 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b02d6-0x4b02e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b0d77-0x4b0d80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b0fb6-0x4b0fc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b2720-0x4b272a rank=- name=- kind=- bytes=- uncovered=-
 *   0x4b6557-0x4b6560 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ba837-0x4ba840 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4c1e67-0x4c1e70 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ce437-0x4ce440 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d2687-0x4d2690 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d7ea7-0x4d7eb0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4d8f57-0x4d8f60 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4efbb7-0x4efbc0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4efbd7-0x4efbe0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4efd97-0x4efda0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4efdd7-0x4efde0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fd387-0x4fd390 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4fd3e7-0x4fd3f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ff457-0x4ff460 rank=- name=- kind=- bytes=- uncovered=-
 *   0x4ff5a7-0x4ff5b0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x501417-0x501420 rank=- name=- kind=- bytes=- uncovered=-
 *   0x507b97-0x507ba0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x52e107-0x52e110 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53f797-0x53f7a0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53f7d7-0x53f7e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53f887-0x53f890 rank=- name=- kind=- bytes=- uncovered=-
 *   0x53f8c7-0x53f8d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x54cf07-0x54cf10 rank=- name=- kind=- bytes=- uncovered=-
 *   0x552318-0x552320 rank=- name=- kind=- bytes=- uncovered=-
 *   0x552438-0x552440 rank=- name=- kind=- bytes=- uncovered=-
 *   0x552758-0x552760 rank=- name=- kind=- bytes=- uncovered=-
 *   0x563238-0x563240 rank=- name=- kind=- bytes=- uncovered=-
 *   0x563288-0x563290 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5637e8-0x5637f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x563848-0x563850 rank=- name=- kind=- bytes=- uncovered=-
 *   0x564087-0x564090 rank=- name=- kind=- bytes=- uncovered=-
 *   0x564d17-0x564d20 rank=- name=- kind=- bytes=- uncovered=-
 *   0x564e97-0x564ea0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x564ea8-0x564eb0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x564ee7-0x564ef0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x564fe7-0x564ff0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x565237-0x565240 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5652b7-0x5652c0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5658d8-0x5658e0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x565917-0x565920 rank=- name=- kind=- bytes=- uncovered=-
 *   0x565928-0x565930 rank=- name=- kind=- bytes=- uncovered=-
 *   0x565f88-0x565f90 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5663c8-0x5663d0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x5678e8-0x5678f0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x568978-0x568980 rank=- name=- kind=- bytes=- uncovered=-
 *   0x56fd78-0x56fd80 rank=- name=- kind=- bytes=- uncovered=-
 *   0x570308-0x570310 rank=- name=- kind=- bytes=- uncovered=-
 *   0x572c48-0x572c50 rank=- name=- kind=- bytes=- uncovered=-
 *   0x572ec8-0x572ed0 rank=- name=- kind=- bytes=- uncovered=-
 *   0x583637-0x583640 rank=- name=- kind=- bytes=- uncovered=-
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

int64_t function_215a6(void);
int64_t function_48daa2();
int64_t function_48db26(int64_t a1, int64_t a2, int64_t a3);
int64_t function_496be6(void);
int64_t function_497647(void);
int64_t function_497666(void);
int64_t function_49f067(void);
int64_t function_4b02a0();
int64_t function_4b02d6(void);
int64_t function_4b0cc0();
int64_t function_4b0d77(void);
int64_t function_4b0fb6(void);
int64_t function_4b2720(int64_t a1);
int64_t function_4b6557(void);
int64_t function_4ba837(void);
int64_t function_4c1e67(void);
int64_t function_4ce437(void);
int64_t function_4d2687(void);
int64_t function_4d7ea7(void);
int64_t function_4d8f57(void);
int64_t function_4efbb7(void);
int64_t function_4efbd7(void);
int64_t function_4efd97(void);
int64_t function_4efdd7(void);
int64_t function_4fd387(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4fd3e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5);
int64_t function_4ff457(void);
int64_t function_4ff458(void);
int64_t function_4ff5a7(void);
int64_t function_501417(void);
int64_t function_507b97(int64_t a1, int64_t a2, int64_t a3);
int64_t function_51d34();
int64_t function_52057(int64_t a1, int64_t a2, int64_t a3, int64_t a4);
int64_t function_52e107(int64_t a1, int64_t a2, int64_t a3);
int64_t function_53f797(void);
int64_t function_53f7d7(void);
int64_t function_53f887(void);
int64_t function_53f8c7(void);
int64_t function_54cf07(int64_t a1);
int64_t function_552318(void);
int64_t function_552438(void);
int64_t function_552758(int64_t a1, int64_t a2);
int64_t function_563238(void);
int64_t function_563288(void);
int64_t function_5637e8(void);
int64_t function_563848(void);
int64_t function_564087(void);
int64_t function_564d17(void);
int64_t function_564e97(int64_t a1);
int64_t function_564ea8(void);
int64_t function_564ee7(void);
int64_t function_564fe7(void);
int64_t function_565237(void);
int64_t function_5652b7(void);
int64_t function_5658d8(void);
int64_t function_565917(void);
int64_t function_565928(void);
int64_t function_565f88(void);
int64_t function_5663c8(int64_t a1, int64_t a2, int64_t a3);
int64_t function_5678e8(void);
int64_t function_5678ec(int64_t a1);
int64_t function_56895c();
int64_t function_568978(void);
int64_t function_56fd78(int64_t a1, int64_t a2);
int64_t function_570308(void);
int64_t function_572c18();
int64_t function_572c48(void);
int64_t function_572e98();
int64_t function_572ec8(void);
int64_t function_583637(int64_t a1, int64_t a2, uint64_t a3, int64_t a4);
int64_t function_68f97(int64_t a1, int64_t a2);
int64_t function_68fa7(int64_t a1, int64_t a2);
int64_t function_72832();
int64_t function_72931(int64_t a1, int64_t a2);

// Address range: 0x215a6 - 0x215b0
int64_t function_215a6(void) {
    // 0x215a6
    int64_t result; // 0x215a6
    return result;
}

// Address range: 0x52057 - 0x5205f
int64_t function_52057(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x52057
    return function_51d34();
}

// Address range: 0x68f97 - 0x68f9f
int64_t function_68f97(int64_t a1, int64_t a2) {
    // 0x68f97
    *(int32_t *)(a1 + 172) = (int32_t)a2;
    int64_t result; // 0x68f97
    return result;
}

// Address range: 0x68fa7 - 0x68faf
int64_t function_68fa7(int64_t a1, int64_t a2) {
    // 0x68fa7
    *(int32_t *)(a1 + 180) = (int32_t)a2;
    int64_t result; // 0x68fa7
    return result;
}

// Address range: 0x72931 - 0x72939
int64_t function_72931(int64_t a1, int64_t a2) {
    // 0x72931
    return function_72832();
}

// Address range: 0x48db26 - 0x48db2f
int64_t function_48db26(int64_t a1, int64_t a2, int64_t a3) {
    // 0x48db26
    return function_48daa2();
}

// Address range: 0x496be6 - 0x496bf0
int64_t function_496be6(void) {
    // 0x496be6
    int64_t result; // 0x496be6
    return result;
}

// Address range: 0x497647 - 0x497650
int64_t function_497647(void) {
    // 0x497647
    int64_t result; // 0x497647
    return result;
}

// Address range: 0x497666 - 0x49766b
int64_t function_497666(void) {
    // 0x497666
    int64_t v1; // 0x497666
    int64_t v2 = v1;
    *(char *)v2 = 2 * (char)v2;
    return 0;
}

// Address range: 0x49f067 - 0x49f06d
int64_t function_49f067(void) {
    // 0x49f067
    int64_t v1; // 0x49f067
    return v1 + 0x3ae354 & 0xffffffff;
}

// Address range: 0x4b02d6 - 0x4b02dd
int64_t function_4b02d6(void) {
    // 0x4b02d6
    return function_4b02a0();
}

// Address range: 0x4b0d77 - 0x4b0d7c
int64_t function_4b0d77(void) {
    // 0x4b0d77
    return function_4b0cc0();
}

// Address range: 0x4b0fb6 - 0x4b0fc0
int64_t function_4b0fb6(void) {
    // 0x4b0fb6
    int64_t result; // 0x4b0fb6
    return result;
}

// Address range: 0x4b2720 - 0x4b2723
int64_t function_4b2720(int64_t a1) {
    // 0x4b2720
    int64_t result; // 0x4b2720
    return result;
}

// Address range: 0x4b6557 - 0x4b6560
int64_t function_4b6557(void) {
    // 0x4b6557
    int64_t result; // 0x4b6557
    return result;
}

// Address range: 0x4ba837 - 0x4ba840
int64_t function_4ba837(void) {
    // 0x4ba837
    int64_t result; // 0x4ba837
    return result;
}

// Address range: 0x4c1e67 - 0x4c1e70
int64_t function_4c1e67(void) {
    // 0x4c1e67
    int64_t result; // 0x4c1e67
    return result;
}

// Address range: 0x4ce437 - 0x4ce440
int64_t function_4ce437(void) {
    // 0x4ce437
    int64_t result; // 0x4ce437
    return result;
}

// Address range: 0x4d2687 - 0x4d2688
int64_t function_4d2687(void) {
    // 0x4d2687
    int64_t result; // 0x4d2687
    return result;
}

// Address range: 0x4d7ea7 - 0x4d7eb0
int64_t function_4d7ea7(void) {
    // 0x4d7ea7
    int64_t result; // 0x4d7ea7
    return result;
}

// Address range: 0x4d8f57 - 0x4d8f60
int64_t function_4d8f57(void) {
    // 0x4d8f57
    int64_t result; // 0x4d8f57
    return result;
}

// Address range: 0x4efbb7 - 0x4efbc0
int64_t function_4efbb7(void) {
    // 0x4efbb7
    int64_t result; // 0x4efbb7
    return result;
}

// Address range: 0x4efbd7 - 0x4efbe0
int64_t function_4efbd7(void) {
    // 0x4efbd7
    int64_t result; // 0x4efbd7
    return result;
}

// Address range: 0x4efd97 - 0x4efd98
int64_t function_4efd97(void) {
    // 0x4efd97
    int64_t result; // 0x4efd97
    return result;
}

// Address range: 0x4efdd7 - 0x4efde0
int64_t function_4efdd7(void) {
    // 0x4efdd7
    int64_t result; // 0x4efdd7
    return result;
}

// Address range: 0x4fd387 - 0x4fd390
int64_t function_4fd387(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4fd387
    int64_t result; // 0x4fd387
    char * v1 = (char *)(result - 119); // 0x4fd387
    *v1 = *v1 + (char)a4;
    return result;
}

// Address range: 0x4fd3e7 - 0x4fd3f0
int64_t function_4fd3e7(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    // 0x4fd3e7
    int64_t result; // 0x4fd3e7
    char * v1 = (char *)(result - 119); // 0x4fd3e7
    *v1 = *v1 + (char)a4;
    return result;
}

// Address range: 0x4ff457 - 0x4ff458
int64_t function_4ff457(void) {
    // 0x4ff457
    int64_t result; // 0x4ff457
    return result;
}

// Address range: 0x4ff458 - 0x4ff45c
int64_t function_4ff458(void) {
    // 0x4ff458
    int64_t result; // 0x4ff458
    char * v1 = (char *)(result + 93); // 0x4ff458
    *v1 = *v1 | (char)result;
    return result;
}

// Address range: 0x4ff5a7 - 0x4ff5b0
int64_t function_4ff5a7(void) {
    // 0x4ff5a7
    int64_t result; // 0x4ff5a7
    return result;
}

// Address range: 0x501417 - 0x501420
int64_t function_501417(void) {
    // 0x501417
    int64_t result; // 0x501417
    return result;
}

// Address range: 0x507b97 - 0x507b9a
int64_t function_507b97(int64_t a1, int64_t a2, int64_t a3) {
    // 0x507b97
    int64_t result; // 0x507b97
    return result;
}

// Address range: 0x52e107 - 0x52e10a
int64_t function_52e107(int64_t a1, int64_t a2, int64_t a3) {
    // 0x52e107
    int64_t result; // 0x52e107
    return result;
}

// Address range: 0x53f797 - 0x53f7a0
int64_t function_53f797(void) {
    // 0x53f797
    int64_t result; // 0x53f797
    return result;
}

// Address range: 0x53f7d7 - 0x53f7e0
int64_t function_53f7d7(void) {
    // 0x53f7d7
    int64_t result; // 0x53f7d7
    return result;
}

// Address range: 0x53f887 - 0x53f890
int64_t function_53f887(void) {
    // 0x53f887
    int64_t result; // 0x53f887
    return result;
}

// Address range: 0x53f8c7 - 0x53f8d0
int64_t function_53f8c7(void) {
    // 0x53f8c7
    int64_t result; // 0x53f8c7
    return result;
}

// Address range: 0x54cf07 - 0x54cf0e
int64_t function_54cf07(int64_t a1) {
    // 0x54cf07
    int64_t v1; // 0x54cf07
    int64_t result = v1;
    *(char *)result = 2 * (char)result;
    char * v2 = (char *)(v1 + 65); // 0x54cf09
    *v2 = *v2 + (char)v1;
    return result;
}

// Address range: 0x552318 - 0x552320
int64_t function_552318(void) {
    // 0x552318
    int64_t result; // 0x552318
    return result;
}

// Address range: 0x552438 - 0x552440
int64_t function_552438(void) {
    // 0x552438
    int64_t result; // 0x552438
    return result;
}

// Address range: 0x552758 - 0x55275f
int64_t function_552758(int64_t a1, int64_t a2) {
    // 0x552758
    int64_t result; // 0x552758
    return result;
}

// Address range: 0x563238 - 0x563240
int64_t function_563238(void) {
    // 0x563238
    int64_t result; // 0x563238
    return result;
}

// Address range: 0x563288 - 0x563290
int64_t function_563288(void) {
    // 0x563288
    int64_t result; // 0x563288
    return result;
}

// Address range: 0x5637e8 - 0x5637f0
int64_t function_5637e8(void) {
    // 0x5637e8
    int64_t result; // 0x5637e8
    return result;
}

// Address range: 0x563848 - 0x563850
int64_t function_563848(void) {
    // 0x563848
    int64_t result; // 0x563848
    return result;
}

// Address range: 0x564087 - 0x564090
int64_t function_564087(void) {
    // 0x564087
    int64_t result; // 0x564087
    return result;
}

// Address range: 0x564d17 - 0x564d20
int64_t function_564d17(void) {
    // 0x564d17
    int64_t result; // 0x564d17
    return result;
}

// Address range: 0x564e97 - 0x564e9b
int64_t function_564e97(int64_t a1) {
    // 0x564e97
    int64_t result; // 0x564e97
    return result;
}

// Address range: 0x564ea8 - 0x564eb0
int64_t function_564ea8(void) {
    // 0x564ea8
    int64_t result; // 0x564ea8
    return result;
}

// Address range: 0x564ee7 - 0x564ef0
int64_t function_564ee7(void) {
    // 0x564ee7
    int64_t result; // 0x564ee7
    return result;
}

// Address range: 0x564fe7 - 0x564ff0
int64_t function_564fe7(void) {
    // 0x564fe7
    int64_t result; // 0x564fe7
    return result;
}

// Address range: 0x565237 - 0x565240
int64_t function_565237(void) {
    // 0x565237
    int64_t result; // 0x565237
    return result;
}

// Address range: 0x5652b7 - 0x5652c0
int64_t function_5652b7(void) {
    // 0x5652b7
    int64_t result; // 0x5652b7
    return result;
}

// Address range: 0x5658d8 - 0x5658e0
int64_t function_5658d8(void) {
    // 0x5658d8
    int64_t result; // 0x5658d8
    return result;
}

// Address range: 0x565917 - 0x565920
int64_t function_565917(void) {
    // 0x565917
    int64_t result; // 0x565917
    return result;
}

// Address range: 0x565928 - 0x565930
int64_t function_565928(void) {
    // 0x565928
    int64_t result; // 0x565928
    return result;
}

// Address range: 0x565f88 - 0x565f90
int64_t function_565f88(void) {
    // 0x565f88
    int64_t result; // 0x565f88
    return result;
}

// Address range: 0x5663c8 - 0x5663d0
int64_t function_5663c8(int64_t a1, int64_t a2, int64_t a3) {
    // 0x5663c8
    int64_t v1; // 0x5663c8
    return v1 & -256 | (int64_t)__asm_in((int16_t)a3);
}

// Address range: 0x5678e8 - 0x5678e9
int64_t function_5678e8(void) {
    // 0x5678e8
    int64_t result; // 0x5678e8
    return result;
}

// Address range: 0x5678ec - 0x5678f0
int64_t function_5678ec(int64_t a1) {
    // 0x5678ec
    int64_t result; // 0x5678ec
    *(int32_t *)a1 = (int32_t)result;
    return result;
}

// Address range: 0x568978 - 0x56897b
int64_t function_568978(void) {
    // 0x568978
    return function_56895c();
}

// Address range: 0x56fd78 - 0x56fd80
int64_t function_56fd78(int64_t a1, int64_t a2) {
    // 0x56fd78
    int64_t result; // 0x56fd78
    char * v1 = (char *)(result + 93); // 0x56fd78
    *v1 = *v1 + (char)result;
    return result;
}

// Address range: 0x570308 - 0x570310
int64_t function_570308(void) {
    // 0x570308
    int64_t result; // 0x570308
    return result;
}

// Address range: 0x572c48 - 0x572c4a
int64_t function_572c48(void) {
    // 0x572c48
    return function_572c18();
}

// Address range: 0x572ec8 - 0x572eca
int64_t function_572ec8(void) {
    // 0x572ec8
    return function_572e98();
}

// Address range: 0x583637 - 0x583640
int64_t function_583637(int64_t a1, int64_t a2, uint64_t a3, int64_t a4) {
    // 0x583637
    int64_t result; // 0x583637
    *(char *)a4 = (char)result + (char)(a3 / 256);
    return result;
}
