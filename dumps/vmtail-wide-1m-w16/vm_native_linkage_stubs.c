/*
 * Mechanical C evidence for ELF linkage stubs.
 * These functions model linker/loader veneers, not program-owned logic.
 */
#include <stdint.h>

typedef struct EACLinkageStub {
    const char *section;
    const char *symbol;
    uint64_t start;
    uint64_t stop;
    uint64_t size;
} EACLinkageStub;

// Address range: 0x583650 - 0x583659
void eac_linkage_fini_583650_fini(void) {
    /* .fini _fini@@Base */
    /* 48 83 ec 08          	sub    $0x8,%rsp */
    /* 48 83 c4 08          	add    $0x8,%rsp */
    /* c3                   	ret */
}

// Address range: 0x1fbd0 - 0x1fbe7
void eac_linkage_init_1fbd0_init(void) {
    /* .init _init@@Base */
    /* 48 83 ec 08          	sub    $0x8,%rsp */
    /* 48 8b 05 8d 8d 82 00 	mov    0x828d8d(%rip),%rax        # 848968 <__gmon_start__> */
    /* 48 85 c0             	test   %rax,%rax */
    /* 74 02                	je     1fbe2 <_init@@Base+0x12> */
    /* ff d0                	call   *%rax */
    /* 48 83 c4 08          	add    $0x8,%rsp */
    /* c3                   	ret */
}

// Address range: 0x1fbf0 - 0x1fc00
void eac_linkage_plt_1fbf0_ITM_addUserCommitAction_plt_0x10(void) {
    /* .plt _ITM_addUserCommitAction@plt-0x10 */
    /* ff 35 12 94 82 00    	push   0x829412(%rip)        # 849008 <ISTR_DEFINITIONS_LEGACY@@Base+0x2649c8> */
    /* ff 25 14 94 82 00    	jmp    *0x829414(%rip)        # 849010 <ISTR_DEFINITIONS_LEGACY@@Base+0x2649d0> */
    /* 0f 1f 40 00          	nopl   0x0(%rax) */
}

// Address range: 0x1fc00 - 0x1fc10
void eac_linkage_plt_1fc00_ITM_addUserCommitAction_plt(void) {
    /* .plt _ITM_addUserCommitAction@plt */
    /* ff 25 12 94 82 00    	jmp    *0x829412(%rip)        # 849018 <_ITM_addUserCommitAction> */
    /* 68 00 00 00 00       	push   $0x0 */
    /* e9 e0 ff ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fc10 - 0x1fc20
void eac_linkage_plt_1fc10_strtof_l_plt(void) {
    /* .plt __strtof_l@plt */
    /* ff 25 0a 94 82 00    	jmp    *0x82940a(%rip)        # 849020 <__strtof_l@GLIBC_2.2.5> */
    /* 68 01 00 00 00       	push   $0x1 */
    /* e9 d0 ff ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fc20 - 0x1fc30
void eac_linkage_plt_1fc20_ITM_memcpyRtWn_plt(void) {
    /* .plt _ITM_memcpyRtWn@plt */
    /* ff 25 02 94 82 00    	jmp    *0x829402(%rip)        # 849028 <_ITM_memcpyRtWn> */
    /* 68 02 00 00 00       	push   $0x2 */
    /* e9 c0 ff ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fc30 - 0x1fc40
void eac_linkage_plt_1fc30_mprotect_plt(void) {
    /* .plt mprotect@plt */
    /* ff 25 fa 93 82 00    	jmp    *0x8293fa(%rip)        # 849030 <mprotect@GLIBC_2.2.5> */
    /* 68 03 00 00 00       	push   $0x3 */
    /* e9 b0 ff ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fc40 - 0x1fc50
void eac_linkage_plt_1fc40_sem_wait_plt(void) {
    /* .plt sem_wait@plt */
    /* ff 25 f2 93 82 00    	jmp    *0x8293f2(%rip)        # 849038 <sem_wait@GLIBC_2.2.5> */
    /* 68 04 00 00 00       	push   $0x4 */
    /* e9 a0 ff ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fc50 - 0x1fc60
void eac_linkage_plt_1fc50_fileno_plt(void) {
    /* .plt fileno@plt */
    /* ff 25 ea 93 82 00    	jmp    *0x8293ea(%rip)        # 849040 <fileno@GLIBC_2.2.5> */
    /* 68 05 00 00 00       	push   $0x5 */
    /* e9 90 ff ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fc60 - 0x1fc70
void eac_linkage_plt_1fc60_pthread_cond_destroy_plt(void) {
    /* .plt pthread_cond_destroy@plt */
    /* ff 25 e2 93 82 00    	jmp    *0x8293e2(%rip)        # 849048 <pthread_cond_destroy@GLIBC_2.3.2> */
    /* 68 06 00 00 00       	push   $0x6 */
    /* e9 80 ff ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fc70 - 0x1fc80
void eac_linkage_plt_1fc70_printf_plt(void) {
    /* .plt printf@plt */
    /* ff 25 da 93 82 00    	jmp    *0x8293da(%rip)        # 849050 <printf@GLIBC_2.2.5> */
    /* 68 07 00 00 00       	push   $0x7 */
    /* e9 70 ff ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fc80 - 0x1fc90
void eac_linkage_plt_1fc80_strcoll_l_plt(void) {
    /* .plt __strcoll_l@plt */
    /* ff 25 d2 93 82 00    	jmp    *0x8293d2(%rip)        # 849058 <__strcoll_l@GLIBC_2.2.5> */
    /* 68 08 00 00 00       	push   $0x8 */
    /* e9 60 ff ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fc90 - 0x1fca0
void eac_linkage_plt_1fc90_nl_langinfo_l_plt(void) {
    /* .plt __nl_langinfo_l@plt */
    /* ff 25 ca 93 82 00    	jmp    *0x8293ca(%rip)        # 849060 <__nl_langinfo_l@GLIBC_2.2.5> */
    /* 68 09 00 00 00       	push   $0x9 */
    /* e9 50 ff ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fca0 - 0x1fcb0
void eac_linkage_plt_1fca0_dgettext_plt(void) {
    /* .plt dgettext@plt */
    /* ff 25 c2 93 82 00    	jmp    *0x8293c2(%rip)        # 849068 <dgettext@GLIBC_2.2.5> */
    /* 68 0a 00 00 00       	push   $0xa */
    /* e9 40 ff ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fcb0 - 0x1fcc0
void eac_linkage_plt_1fcb0_wcsftime_plt(void) {
    /* .plt wcsftime@plt */
    /* ff 25 ba 93 82 00    	jmp    *0x8293ba(%rip)        # 849070 <wcsftime@GLIBC_2.2.5> */
    /* 68 0b 00 00 00       	push   $0xb */
    /* e9 30 ff ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fcc0 - 0x1fcd0
void eac_linkage_plt_1fcc0_cxa_free_exception_plt(void) {
    /* .plt __cxa_free_exception@plt */
    /* ff 25 b2 93 82 00    	jmp    *0x8293b2(%rip)        # 849078 <__cxa_free_exception@@Base+0x2e39f8> */
    /* 68 0c 00 00 00       	push   $0xc */
    /* e9 20 ff ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fcd0 - 0x1fce0
void eac_linkage_plt_1fcd0_Unwind_GetRegionStart_plt(void) {
    /* .plt _Unwind_GetRegionStart@plt */
    /* ff 25 aa 93 82 00    	jmp    *0x8293aa(%rip)        # 849080 <_Unwind_GetRegionStart@GCC_3.0> */
    /* 68 0d 00 00 00       	push   $0xd */
    /* e9 10 ff ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fce0 - 0x1fcf0
void eac_linkage_plt_1fce0_fseeko64_plt(void) {
    /* .plt fseeko64@plt */
    /* ff 25 a2 93 82 00    	jmp    *0x8293a2(%rip)        # 849088 <fseeko64@GLIBC_2.2.5> */
    /* 68 0e 00 00 00       	push   $0xe */
    /* e9 00 ff ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fcf0 - 0x1fd00
void eac_linkage_plt_1fcf0_wmemcpy_plt(void) {
    /* .plt wmemcpy@plt */
    /* ff 25 9a 93 82 00    	jmp    *0x82939a(%rip)        # 849090 <wmemcpy@GLIBC_2.2.5> */
    /* 68 0f 00 00 00       	push   $0xf */
    /* e9 f0 fe ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fd00 - 0x1fd10
void eac_linkage_plt_1fd00_memset_plt(void) {
    /* .plt memset@plt */
    /* ff 25 92 93 82 00    	jmp    *0x829392(%rip)        # 849098 <memset@GLIBC_2.2.5> */
    /* 68 10 00 00 00       	push   $0x10 */
    /* e9 e0 fe ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fd10 - 0x1fd20
void eac_linkage_plt_1fd10_ftell_plt(void) {
    /* .plt ftell@plt */
    /* ff 25 8a 93 82 00    	jmp    *0x82938a(%rip)        # 8490a0 <ftell@GLIBC_2.2.5> */
    /* 68 11 00 00 00       	push   $0x11 */
    /* e9 d0 fe ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fd20 - 0x1fd30
void eac_linkage_plt_1fd20_mbrtowc_plt(void) {
    /* .plt mbrtowc@plt */
    /* ff 25 82 93 82 00    	jmp    *0x829382(%rip)        # 8490a8 <mbrtowc@GLIBC_2.2.5> */
    /* 68 12 00 00 00       	push   $0x12 */
    /* e9 c0 fe ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fd30 - 0x1fd40
void eac_linkage_plt_1fd30_snprintf_plt(void) {
    /* .plt snprintf@plt */
    /* ff 25 7a 93 82 00    	jmp    *0x82937a(%rip)        # 8490b0 <snprintf@GLIBC_2.2.5> */
    /* 68 13 00 00 00       	push   $0x13 */
    /* e9 b0 fe ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fd40 - 0x1fd50
void eac_linkage_plt_1fd40_cxa_begin_catch_plt(void) {
    /* .plt __cxa_begin_catch@plt */
    /* ff 25 72 93 82 00    	jmp    *0x829372(%rip)        # 8490b8 <__cxa_begin_catch@@Base+0x35a278> */
    /* 68 14 00 00 00       	push   $0x14 */
    /* e9 a0 fe ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fd50 - 0x1fd60
void eac_linkage_plt_1fd50_Unwind_SetGR_plt(void) {
    /* .plt _Unwind_SetGR@plt */
    /* ff 25 6a 93 82 00    	jmp    *0x82936a(%rip)        # 8490c0 <_Unwind_SetGR@GCC_3.0> */
    /* 68 15 00 00 00       	push   $0x15 */
    /* e9 90 fe ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fd60 - 0x1fd70
void eac_linkage_plt_1fd60_wcslen_plt(void) {
    /* .plt wcslen@plt */
    /* ff 25 62 93 82 00    	jmp    *0x829362(%rip)        # 8490c8 <wcslen@GLIBC_2.2.5> */
    /* 68 16 00 00 00       	push   $0x16 */
    /* e9 80 fe ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fd70 - 0x1fd80
void eac_linkage_plt_1fd70_blake3_compress_xof_sse41_plt(void) {
    /* .plt blake3_compress_xof_sse41@plt */
    /* ff 25 5a 93 82 00    	jmp    *0x82935a(%rip)        # 8490d0 <blake3_compress_xof_sse41@@Base+0x35f7d0> */
    /* 68 17 00 00 00       	push   $0x17 */
    /* e9 70 fe ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fd80 - 0x1fd90
void eac_linkage_plt_1fd80_close_plt(void) {
    /* .plt close@plt */
    /* ff 25 52 93 82 00    	jmp    *0x829352(%rip)        # 8490d8 <close@GLIBC_2.2.5> */
    /* 68 18 00 00 00       	push   $0x18 */
    /* e9 60 fe ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fd90 - 0x1fda0
void eac_linkage_plt_1fd90_duplocale_plt(void) {
    /* .plt __duplocale@plt */
    /* ff 25 4a 93 82 00    	jmp    *0x82934a(%rip)        # 8490e0 <__duplocale@GLIBC_2.2.5> */
    /* 68 19 00 00 00       	push   $0x19 */
    /* e9 50 fe ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fda0 - 0x1fdb0
void eac_linkage_plt_1fda0_Unwind_GetDataRelBase_plt(void) {
    /* .plt _Unwind_GetDataRelBase@plt */
    /* ff 25 42 93 82 00    	jmp    *0x829342(%rip)        # 8490e8 <_Unwind_GetDataRelBase@GCC_3.0> */
    /* 68 1a 00 00 00       	push   $0x1a */
    /* e9 40 fe ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fdb0 - 0x1fdc0
void eac_linkage_plt_1fdb0_blake3_hasher_update_plt(void) {
    /* .plt blake3_hasher_update@plt */
    /* ff 25 3a 93 82 00    	jmp    *0x82933a(%rip)        # 8490f0 <blake3_hasher_update@@Base+0x3711b0> */
    /* 68 1b 00 00 00       	push   $0x1b */
    /* e9 30 fe ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fdc0 - 0x1fdd0
void eac_linkage_plt_1fdc0_ioctl_plt(void) {
    /* .plt ioctl@plt */
    /* ff 25 32 93 82 00    	jmp    *0x829332(%rip)        # 8490f8 <ioctl@GLIBC_2.2.5> */
    /* 68 1c 00 00 00       	push   $0x1c */
    /* e9 20 fe ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fdd0 - 0x1fde0
void eac_linkage_plt_1fdd0_abort_plt(void) {
    /* .plt abort@plt */
    /* ff 25 2a 93 82 00    	jmp    *0x82932a(%rip)        # 849100 <abort@GLIBC_2.2.5> */
    /* 68 1d 00 00 00       	push   $0x1d */
    /* e9 10 fe ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fde0 - 0x1fdf0
void eac_linkage_plt_1fde0_memchr_plt(void) {
    /* .plt memchr@plt */
    /* ff 25 22 93 82 00    	jmp    *0x829322(%rip)        # 849108 <memchr@GLIBC_2.2.5> */
    /* 68 1e 00 00 00       	push   $0x1e */
    /* e9 00 fe ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fdf0 - 0x1fe00
void eac_linkage_plt_1fdf0_ZydisGetInstructionEncodingInfo_plt(void) {
    /* .plt ZydisGetInstructionEncodingInfo@plt */
    /* ff 25 1a 93 82 00    	jmp    *0x82931a(%rip)        # 849110 <ZydisGetInstructionEncodingInfo@@Base+0x35ab00> */
    /* 68 1f 00 00 00       	push   $0x1f */
    /* e9 f0 fd ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fe00 - 0x1fe10
void eac_linkage_plt_1fe00_epoll_create_plt(void) {
    /* .plt epoll_create@plt */
    /* ff 25 12 93 82 00    	jmp    *0x829312(%rip)        # 849118 <epoll_create@GLIBC_2.3.2> */
    /* 68 20 00 00 00       	push   $0x20 */
    /* e9 e0 fd ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fe10 - 0x1fe20
void eac_linkage_plt_1fe10_sem_destroy_plt(void) {
    /* .plt sem_destroy@plt */
    /* ff 25 0a 93 82 00    	jmp    *0x82930a(%rip)        # 849120 <sem_destroy@GLIBC_2.2.5> */
    /* 68 21 00 00 00       	push   $0x21 */
    /* e9 d0 fd ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fe20 - 0x1fe30
void eac_linkage_plt_1fe20_puts_plt(void) {
    /* .plt puts@plt */
    /* ff 25 02 93 82 00    	jmp    *0x829302(%rip)        # 849128 <puts@GLIBC_2.2.5> */
    /* 68 22 00 00 00       	push   $0x22 */
    /* e9 c0 fd ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fe30 - 0x1fe40
void eac_linkage_plt_1fe30_uname_plt(void) {
    /* .plt uname@plt */
    /* ff 25 fa 92 82 00    	jmp    *0x8292fa(%rip)        # 849130 <uname@GLIBC_2.2.5> */
    /* 68 23 00 00 00       	push   $0x23 */
    /* e9 b0 fd ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fe40 - 0x1fe50
void eac_linkage_plt_1fe40_fseek_plt(void) {
    /* .plt fseek@plt */
    /* ff 25 f2 92 82 00    	jmp    *0x8292f2(%rip)        # 849138 <fseek@GLIBC_2.2.5> */
    /* 68 24 00 00 00       	push   $0x24 */
    /* e9 a0 fd ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fe50 - 0x1fe60
void eac_linkage_plt_1fe50_getaddrinfo_plt(void) {
    /* .plt getaddrinfo@plt */
    /* ff 25 ea 92 82 00    	jmp    *0x8292ea(%rip)        # 849140 <getaddrinfo@GLIBC_2.2.5> */
    /* 68 25 00 00 00       	push   $0x25 */
    /* e9 90 fd ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fe60 - 0x1fe70
void eac_linkage_plt_1fe60_bindtextdomain_plt(void) {
    /* .plt bindtextdomain@plt */
    /* ff 25 e2 92 82 00    	jmp    *0x8292e2(%rip)        # 849148 <bindtextdomain@GLIBC_2.2.5> */
    /* 68 26 00 00 00       	push   $0x26 */
    /* e9 80 fd ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fe70 - 0x1fe80
void eac_linkage_plt_1fe70_wmemcmp_plt(void) {
    /* .plt wmemcmp@plt */
    /* ff 25 da 92 82 00    	jmp    *0x8292da(%rip)        # 849150 <wmemcmp@GLIBC_2.2.5> */
    /* 68 27 00 00 00       	push   $0x27 */
    /* e9 70 fd ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fe80 - 0x1fe90
void eac_linkage_plt_1fe80_strftime_l_plt(void) {
    /* .plt __strftime_l@plt */
    /* ff 25 d2 92 82 00    	jmp    *0x8292d2(%rip)        # 849158 <__strftime_l@GLIBC_2.3> */
    /* 68 28 00 00 00       	push   $0x28 */
    /* e9 60 fd ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fe90 - 0x1fea0
void eac_linkage_plt_1fe90_gettimeofday_plt(void) {
    /* .plt gettimeofday@plt */
    /* ff 25 ca 92 82 00    	jmp    *0x8292ca(%rip)        # 849160 <gettimeofday@GLIBC_2.2.5> */
    /* 68 29 00 00 00       	push   $0x29 */
    /* e9 50 fd ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fea0 - 0x1feb0
void eac_linkage_plt_1fea0_cxa_call_terminate_plt(void) {
    /* .plt __cxa_call_terminate@plt */
    /* ff 25 c2 92 82 00    	jmp    *0x8292c2(%rip)        # 849168 <__cxa_call_terminate@@Base+0x359388> */
    /* 68 2a 00 00 00       	push   $0x2a */
    /* e9 40 fd ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1feb0 - 0x1fec0
void eac_linkage_plt_1feb0_setvbuf_plt(void) {
    /* .plt setvbuf@plt */
    /* ff 25 ba 92 82 00    	jmp    *0x8292ba(%rip)        # 849170 <setvbuf@GLIBC_2.2.5> */
    /* 68 2b 00 00 00       	push   $0x2b */
    /* e9 30 fd ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fec0 - 0x1fed0
void eac_linkage_plt_1fec0_strxfrm_l_plt(void) {
    /* .plt __strxfrm_l@plt */
    /* ff 25 b2 92 82 00    	jmp    *0x8292b2(%rip)        # 849178 <__strxfrm_l@GLIBC_2.2.5> */
    /* 68 2c 00 00 00       	push   $0x2c */
    /* e9 20 fd ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fed0 - 0x1fee0
void eac_linkage_plt_1fed0_putchar_plt(void) {
    /* .plt putchar@plt */
    /* ff 25 aa 92 82 00    	jmp    *0x8292aa(%rip)        # 849180 <putchar@GLIBC_2.2.5> */
    /* 68 2d 00 00 00       	push   $0x2d */
    /* e9 10 fd ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fee0 - 0x1fef0
void eac_linkage_plt_1fee0_ITM_RU1_plt(void) {
    /* .plt _ITM_RU1@plt */
    /* ff 25 a2 92 82 00    	jmp    *0x8292a2(%rip)        # 849188 <_ITM_RU1> */
    /* 68 2e 00 00 00       	push   $0x2e */
    /* e9 00 fd ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fef0 - 0x1ff00
void eac_linkage_plt_1fef0_mbsnrtowcs_plt(void) {
    /* .plt mbsnrtowcs@plt */
    /* ff 25 9a 92 82 00    	jmp    *0x82929a(%rip)        # 849190 <mbsnrtowcs@GLIBC_2.2.5> */
    /* 68 2f 00 00 00       	push   $0x2f */
    /* e9 f0 fc ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1ff00 - 0x1ff10
void eac_linkage_plt_1ff00_read_plt(void) {
    /* .plt read@plt */
    /* ff 25 92 92 82 00    	jmp    *0x829292(%rip)        # 849198 <read@GLIBC_2.2.5> */
    /* 68 30 00 00 00       	push   $0x30 */
    /* e9 e0 fc ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1ff10 - 0x1ff20
void eac_linkage_plt_1ff10_strncmp_plt(void) {
    /* .plt strncmp@plt */
    /* ff 25 8a 92 82 00    	jmp    *0x82928a(%rip)        # 8491a0 <strncmp@GLIBC_2.2.5> */
    /* 68 31 00 00 00       	push   $0x31 */
    /* e9 d0 fc ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1ff20 - 0x1ff30
void eac_linkage_plt_1ff20_malloc_plt(void) {
    /* .plt malloc@plt */
    /* ff 25 82 92 82 00    	jmp    *0x829282(%rip)        # 8491a8 <malloc@GLIBC_2.2.5> */
    /* 68 32 00 00 00       	push   $0x32 */
    /* e9 c0 fc ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1ff30 - 0x1ff40
void eac_linkage_plt_1ff30_fopen_plt(void) {
    /* .plt fopen@plt */
    /* ff 25 7a 92 82 00    	jmp    *0x82927a(%rip)        # 8491b0 <fopen@GLIBC_2.2.5> */
    /* 68 33 00 00 00       	push   $0x33 */
    /* e9 b0 fc ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1ff40 - 0x1ff50
void eac_linkage_plt_1ff40_recv_plt(void) {
    /* .plt recv@plt */
    /* ff 25 72 92 82 00    	jmp    *0x829272(%rip)        # 8491b8 <recv@GLIBC_2.2.5> */
    /* 68 34 00 00 00       	push   $0x34 */
    /* e9 a0 fc ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1ff50 - 0x1ff60
void eac_linkage_plt_1ff50_cxa_guard_release_plt(void) {
    /* .plt __cxa_guard_release@plt */
    /* ff 25 6a 92 82 00    	jmp    *0x82926a(%rip)        # 8491c0 <__cxa_guard_release@@Base+0x35a420> */
    /* 68 35 00 00 00       	push   $0x35 */
    /* e9 90 fc ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1ff60 - 0x1ff70
void eac_linkage_plt_1ff60_gettext_plt(void) {
    /* .plt gettext@plt */
    /* ff 25 62 92 82 00    	jmp    *0x829262(%rip)        # 8491c8 <gettext@GLIBC_2.2.5> */
    /* 68 36 00 00 00       	push   $0x36 */
    /* e9 80 fc ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1ff70 - 0x1ff80
void eac_linkage_plt_1ff70_blake3_xof_many_avx512_plt(void) {
    /* .plt blake3_xof_many_avx512@plt */
    /* ff 25 5a 92 82 00    	jmp    *0x82925a(%rip)        # 8491d0 <blake3_xof_many_avx512@@Base+0x368350> */
    /* 68 37 00 00 00       	push   $0x37 */
    /* e9 70 fc ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1ff80 - 0x1ff90
void eac_linkage_plt_1ff80_ZydisDecoderDecodeInstruction_plt(void) {
    /* .plt ZydisDecoderDecodeInstruction@plt */
    /* ff 25 52 92 82 00    	jmp    *0x829252(%rip)        # 8491d8 <ZydisDecoderDecodeInstruction@@Base+0x35ee48> */
    /* 68 38 00 00 00       	push   $0x38 */
    /* e9 60 fc ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1ff90 - 0x1ffa0
void eac_linkage_plt_1ff90_blake3_hasher_finalize_seek_plt(void) {
    /* .plt blake3_hasher_finalize_seek@plt */
    /* ff 25 4a 92 82 00    	jmp    *0x82924a(%rip)        # 8491e0 <blake3_hasher_finalize_seek@@Base+0x371290> */
    /* 68 39 00 00 00       	push   $0x39 */
    /* e9 50 fc ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1ffa0 - 0x1ffb0
void eac_linkage_plt_1ffa0_strtold_l_plt(void) {
    /* .plt strtold_l@plt */
    /* ff 25 42 92 82 00    	jmp    *0x829242(%rip)        # 8491e8 <strtold_l@GLIBC_2.3> */
    /* 68 3a 00 00 00       	push   $0x3a */
    /* e9 40 fc ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1ffb0 - 0x1ffc0
void eac_linkage_plt_1ffb0_sched_yield_plt(void) {
    /* .plt sched_yield@plt */
    /* ff 25 3a 92 82 00    	jmp    *0x82923a(%rip)        # 8491f0 <sched_yield@GLIBC_2.2.5> */
    /* 68 3b 00 00 00       	push   $0x3b */
    /* e9 30 fc ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1ffc0 - 0x1ffd0
void eac_linkage_plt_1ffc0_ungetwc_plt(void) {
    /* .plt ungetwc@plt */
    /* ff 25 32 92 82 00    	jmp    *0x829232(%rip)        # 8491f8 <ungetwc@GLIBC_2.2.5> */
    /* 68 3c 00 00 00       	push   $0x3c */
    /* e9 20 fc ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1ffd0 - 0x1ffe0
void eac_linkage_plt_1ffd0_Unwind_DeleteException_plt(void) {
    /* .plt _Unwind_DeleteException@plt */
    /* ff 25 2a 92 82 00    	jmp    *0x82922a(%rip)        # 849200 <_Unwind_DeleteException@GCC_3.0> */
    /* 68 3d 00 00 00       	push   $0x3d */
    /* e9 10 fc ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1ffe0 - 0x1fff0
void eac_linkage_plt_1ffe0_pthread_cond_timedwait_plt(void) {
    /* .plt pthread_cond_timedwait@plt */
    /* ff 25 22 92 82 00    	jmp    *0x829222(%rip)        # 849208 <pthread_cond_timedwait@GLIBC_2.3.2> */
    /* 68 3e 00 00 00       	push   $0x3e */
    /* e9 00 fc ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x1fff0 - 0x20000
void eac_linkage_plt_1fff0_wctype_l_plt(void) {
    /* .plt __wctype_l@plt */
    /* ff 25 1a 92 82 00    	jmp    *0x82921a(%rip)        # 849210 <__wctype_l@GLIBC_2.2.5> */
    /* 68 3f 00 00 00       	push   $0x3f */
    /* e9 f0 fb ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20000 - 0x20010
void eac_linkage_plt_20000_memcpy_chk_plt(void) {
    /* .plt __memcpy_chk@plt */
    /* ff 25 12 92 82 00    	jmp    *0x829212(%rip)        # 849218 <__memcpy_chk@GLIBC_2.3.4> */
    /* 68 40 00 00 00       	push   $0x40 */
    /* e9 e0 fb ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20010 - 0x20020
void eac_linkage_plt_20010_gmtime_plt(void) {
    /* .plt gmtime@plt */
    /* ff 25 0a 92 82 00    	jmp    *0x82920a(%rip)        # 849220 <gmtime@GLIBC_2.2.5> */
    /* 68 41 00 00 00       	push   $0x41 */
    /* e9 d0 fb ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20020 - 0x20030
void eac_linkage_plt_20020_cxa_atexit_plt(void) {
    /* .plt __cxa_atexit@plt */
    /* ff 25 02 92 82 00    	jmp    *0x829202(%rip)        # 849228 <__cxa_atexit@GLIBC_2.2.5> */
    /* 68 42 00 00 00       	push   $0x42 */
    /* e9 c0 fb ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20030 - 0x20040
void eac_linkage_plt_20030_ZydisCalcAbsoluteAddress_plt(void) {
    /* .plt ZydisCalcAbsoluteAddress@plt */
    /* ff 25 fa 91 82 00    	jmp    *0x8291fa(%rip)        # 849230 <ZydisCalcAbsoluteAddress@@Base+0x35f750> */
    /* 68 43 00 00 00       	push   $0x43 */
    /* e9 b0 fb ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20040 - 0x20050
void eac_linkage_plt_20040_cxa_current_exception_type_plt(void) {
    /* .plt __cxa_current_exception_type@plt */
    /* ff 25 f2 91 82 00    	jmp    *0x8291f2(%rip)        # 849238 <__cxa_current_exception_type@@Base+0x2c5c28> */
    /* 68 44 00 00 00       	push   $0x44 */
    /* e9 a0 fb ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20050 - 0x20060
void eac_linkage_plt_20050_blake3_compress_xof_avx512_plt(void) {
    /* .plt blake3_compress_xof_avx512@plt */
    /* ff 25 ea 91 82 00    	jmp    *0x8291ea(%rip)        # 849240 <blake3_compress_xof_avx512@@Base+0x368580> */
    /* 68 45 00 00 00       	push   $0x45 */
    /* e9 90 fb ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20060 - 0x20070
void eac_linkage_plt_20060_setsockopt_plt(void) {
    /* .plt setsockopt@plt */
    /* ff 25 e2 91 82 00    	jmp    *0x8291e2(%rip)        # 849248 <setsockopt@GLIBC_2.2.5> */
    /* 68 46 00 00 00       	push   $0x46 */
    /* e9 80 fb ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20070 - 0x20080
void eac_linkage_plt_20070_sysconf_plt(void) {
    /* .plt sysconf@plt */
    /* ff 25 da 91 82 00    	jmp    *0x8291da(%rip)        # 849250 <sysconf@GLIBC_2.2.5> */
    /* 68 47 00 00 00       	push   $0x47 */
    /* e9 70 fb ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20080 - 0x20090
void eac_linkage_plt_20080_getpid_plt(void) {
    /* .plt getpid@plt */
    /* ff 25 d2 91 82 00    	jmp    *0x8291d2(%rip)        # 849258 <getpid@GLIBC_2.2.5> */
    /* 68 48 00 00 00       	push   $0x48 */
    /* e9 60 fb ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20090 - 0x200a0
void eac_linkage_plt_20090_pthread_mutex_init_plt(void) {
    /* .plt pthread_mutex_init@plt */
    /* ff 25 ca 91 82 00    	jmp    *0x8291ca(%rip)        # 849260 <pthread_mutex_init@GLIBC_2.2.5> */
    /* 68 49 00 00 00       	push   $0x49 */
    /* e9 50 fb ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x200a0 - 0x200b0
void eac_linkage_plt_200a0_fgets_plt(void) {
    /* .plt fgets@plt */
    /* ff 25 c2 91 82 00    	jmp    *0x8291c2(%rip)        # 849268 <fgets@GLIBC_2.2.5> */
    /* 68 4a 00 00 00       	push   $0x4a */
    /* e9 40 fb ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x200b0 - 0x200c0
void eac_linkage_plt_200b0_towupper_l_plt(void) {
    /* .plt __towupper_l@plt */
    /* ff 25 ba 91 82 00    	jmp    *0x8291ba(%rip)        # 849270 <__towupper_l@GLIBC_2.2.5> */
    /* 68 4b 00 00 00       	push   $0x4b */
    /* e9 30 fb ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x200c0 - 0x200d0
void eac_linkage_plt_200c0_cxa_call_unexpected_plt(void) {
    /* .plt __cxa_call_unexpected@plt */
    /* ff 25 b2 91 82 00    	jmp    *0x8291b2(%rip)        # 849278 <__cxa_call_unexpected@@Base+0x359818> */
    /* 68 4c 00 00 00       	push   $0x4c */
    /* e9 20 fb ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x200d0 - 0x200e0
void eac_linkage_plt_200d0_wcsxfrm_l_plt(void) {
    /* .plt __wcsxfrm_l@plt */
    /* ff 25 aa 91 82 00    	jmp    *0x8291aa(%rip)        # 849280 <__wcsxfrm_l@GLIBC_2.2.5> */
    /* 68 4d 00 00 00       	push   $0x4d */
    /* e9 10 fb ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x200e0 - 0x200f0
void eac_linkage_plt_200e0_fxstat64_plt(void) {
    /* .plt __fxstat64@plt */
    /* ff 25 a2 91 82 00    	jmp    *0x8291a2(%rip)        # 849288 <__fxstat64@GLIBC_2.2.5> */
    /* 68 4e 00 00 00       	push   $0x4e */
    /* e9 00 fb ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x200f0 - 0x20100
void eac_linkage_plt_200f0_iconv_open_plt(void) {
    /* .plt iconv_open@plt */
    /* ff 25 9a 91 82 00    	jmp    *0x82919a(%rip)        # 849290 <iconv_open@GLIBC_2.2.5> */
    /* 68 4f 00 00 00       	push   $0x4f */
    /* e9 f0 fa ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20100 - 0x20110
void eac_linkage_plt_20100_getpwuid_plt(void) {
    /* .plt getpwuid@plt */
    /* ff 25 92 91 82 00    	jmp    *0x829192(%rip)        # 849298 <getpwuid@GLIBC_2.2.5> */
    /* 68 50 00 00 00       	push   $0x50 */
    /* e9 e0 fa ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20110 - 0x20120
void eac_linkage_plt_20110_cxa_bad_cast_plt(void) {
    /* .plt __cxa_bad_cast@plt */
    /* ff 25 8a 91 82 00    	jmp    *0x82918a(%rip)        # 8492a0 <__cxa_bad_cast@@Base+0x2e43b0> */
    /* 68 51 00 00 00       	push   $0x51 */
    /* e9 d0 fa ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20120 - 0x20130
void eac_linkage_plt_20120_ZGTtdlPv_plt(void) {
    /* .plt _ZGTtdlPv@plt */
    /* ff 25 82 91 82 00    	jmp    *0x829182(%rip)        # 8492a8 <_ZGTtdlPv> */
    /* 68 52 00 00 00       	push   $0x52 */
    /* e9 c0 fa ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20130 - 0x20140
void eac_linkage_plt_20130_cxa_get_globals_fast_plt(void) {
    /* .plt __cxa_get_globals_fast@plt */
    /* ff 25 7a 91 82 00    	jmp    *0x82917a(%rip)        # 8492b0 <__cxa_get_globals_fast@@Base+0x2e3a30> */
    /* 68 53 00 00 00       	push   $0x53 */
    /* e9 b0 fa ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20140 - 0x20150
void eac_linkage_plt_20140_Unwind_GetLanguageSpecificData_plt(void) {
    /* .plt _Unwind_GetLanguageSpecificData@plt */
    /* ff 25 72 91 82 00    	jmp    *0x829172(%rip)        # 8492b8 <_Unwind_GetLanguageSpecificData@GCC_3.0> */
    /* 68 54 00 00 00       	push   $0x54 */
    /* e9 a0 fa ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20150 - 0x20160
void eac_linkage_plt_20150_vswprintf_plt(void) {
    /* .plt vswprintf@plt */
    /* ff 25 6a 91 82 00    	jmp    *0x82916a(%rip)        # 8492c0 <vswprintf@GLIBC_2.2.5> */
    /* 68 55 00 00 00       	push   $0x55 */
    /* e9 90 fa ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20160 - 0x20170
void eac_linkage_plt_20160_ZydisRegisterEncode_plt(void) {
    /* .plt ZydisRegisterEncode@plt */
    /* ff 25 62 91 82 00    	jmp    *0x829162(%rip)        # 8492c8 <ZydisRegisterEncode@@Base+0x35ac88> */
    /* 68 56 00 00 00       	push   $0x56 */
    /* e9 80 fa ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20170 - 0x20180
void eac_linkage_plt_20170_udivti3_plt(void) {
    /* .plt __udivti3@plt */
    /* ff 25 5a 91 82 00    	jmp    *0x82915a(%rip)        # 8492d0 <__udivti3@GCC_3.0> */
    /* 68 57 00 00 00       	push   $0x57 */
    /* e9 70 fa ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20180 - 0x20190
void eac_linkage_plt_20180_Unwind_Resume_or_Rethrow_plt(void) {
    /* .plt _Unwind_Resume_or_Rethrow@plt */
    /* ff 25 52 91 82 00    	jmp    *0x829152(%rip)        # 8492d8 <_Unwind_Resume_or_Rethrow@GCC_3.3> */
    /* 68 58 00 00 00       	push   $0x58 */
    /* e9 60 fa ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20190 - 0x201a0
void eac_linkage_plt_20190_ungetc_plt(void) {
    /* .plt ungetc@plt */
    /* ff 25 4a 91 82 00    	jmp    *0x82914a(%rip)        # 8492e0 <ungetc@GLIBC_2.2.5> */
    /* 68 59 00 00 00       	push   $0x59 */
    /* e9 50 fa ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x201a0 - 0x201b0
void eac_linkage_plt_201a0_wcscoll_l_plt(void) {
    /* .plt __wcscoll_l@plt */
    /* ff 25 42 91 82 00    	jmp    *0x829142(%rip)        # 8492e8 <__wcscoll_l@GLIBC_2.2.5> */
    /* 68 5a 00 00 00       	push   $0x5a */
    /* e9 40 fa ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x201b0 - 0x201c0
void eac_linkage_plt_201b0_popcountdi2_plt(void) {
    /* .plt __popcountdi2@plt */
    /* ff 25 3a 91 82 00    	jmp    *0x82913a(%rip)        # 8492f0 <__popcountdi2@GCC_3.4> */
    /* 68 5b 00 00 00       	push   $0x5b */
    /* e9 30 fa ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x201c0 - 0x201d0
void eac_linkage_plt_201c0_fputc_plt(void) {
    /* .plt fputc@plt */
    /* ff 25 32 91 82 00    	jmp    *0x829132(%rip)        # 8492f8 <fputc@GLIBC_2.2.5> */
    /* 68 5c 00 00 00       	push   $0x5c */
    /* e9 20 fa ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x201d0 - 0x201e0
void eac_linkage_plt_201d0_freeaddrinfo_plt(void) {
    /* .plt freeaddrinfo@plt */
    /* ff 25 2a 91 82 00    	jmp    *0x82912a(%rip)        # 849300 <freeaddrinfo@GLIBC_2.2.5> */
    /* 68 5d 00 00 00       	push   $0x5d */
    /* e9 10 fa ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x201e0 - 0x201f0
void eac_linkage_plt_201e0_free_plt(void) {
    /* .plt free@plt */
    /* ff 25 22 91 82 00    	jmp    *0x829122(%rip)        # 849308 <free@GLIBC_2.2.5> */
    /* 68 5e 00 00 00       	push   $0x5e */
    /* e9 00 fa ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x201f0 - 0x20200
void eac_linkage_plt_201f0_secure_getenv_plt(void) {
    /* .plt secure_getenv@plt */
    /* ff 25 1a 91 82 00    	jmp    *0x82911a(%rip)        # 849310 <secure_getenv@GLIBC_2.17> */
    /* 68 5f 00 00 00       	push   $0x5f */
    /* e9 f0 f9 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20200 - 0x20210
void eac_linkage_plt_20200_strlen_plt(void) {
    /* .plt strlen@plt */
    /* ff 25 12 91 82 00    	jmp    *0x829112(%rip)        # 849318 <strlen@GLIBC_2.2.5> */
    /* 68 60 00 00 00       	push   $0x60 */
    /* e9 e0 f9 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20210 - 0x20220
void eac_linkage_plt_20210_cxa_allocate_exception_plt(void) {
    /* .plt __cxa_allocate_exception@plt */
    /* ff 25 0a 91 82 00    	jmp    *0x82910a(%rip)        # 849320 <__cxa_allocate_exception@@Base+0x2e3d10> */
    /* 68 61 00 00 00       	push   $0x61 */
    /* e9 d0 f9 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20220 - 0x20230
void eac_linkage_plt_20220_ferror_plt(void) {
    /* .plt ferror@plt */
    /* ff 25 02 91 82 00    	jmp    *0x829102(%rip)        # 849328 <ferror@GLIBC_2.2.5> */
    /* 68 62 00 00 00       	push   $0x62 */
    /* e9 c0 f9 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20230 - 0x20240
void eac_linkage_plt_20230_pthread_create_plt(void) {
    /* .plt pthread_create@plt */
    /* ff 25 fa 90 82 00    	jmp    *0x8290fa(%rip)        # 849330 <pthread_create@GLIBC_2.2.5> */
    /* 68 63 00 00 00       	push   $0x63 */
    /* e9 b0 f9 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20240 - 0x20250
void eac_linkage_plt_20240_wmemchr_plt(void) {
    /* .plt wmemchr@plt */
    /* ff 25 f2 90 82 00    	jmp    *0x8290f2(%rip)        # 849338 <wmemchr@GLIBC_2.2.5> */
    /* 68 64 00 00 00       	push   $0x64 */
    /* e9 a0 f9 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20250 - 0x20260
void eac_linkage_plt_20250_opendir_plt(void) {
    /* .plt opendir@plt */
    /* ff 25 ea 90 82 00    	jmp    *0x8290ea(%rip)        # 849340 <opendir@GLIBC_2.2.5> */
    /* 68 65 00 00 00       	push   $0x65 */
    /* e9 90 f9 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20260 - 0x20270
void eac_linkage_plt_20260_xstat_plt(void) {
    /* .plt __xstat@plt */
    /* ff 25 e2 90 82 00    	jmp    *0x8290e2(%rip)        # 849348 <__xstat@GLIBC_2.2.5> */
    /* 68 66 00 00 00       	push   $0x66 */
    /* e9 80 f9 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20270 - 0x20280
void eac_linkage_plt_20270_pclose_plt(void) {
    /* .plt pclose@plt */
    /* ff 25 da 90 82 00    	jmp    *0x8290da(%rip)        # 849350 <pclose@GLIBC_2.2.5> */
    /* 68 67 00 00 00       	push   $0x67 */
    /* e9 70 f9 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20280 - 0x20290
void eac_linkage_plt_20280_pthread_cond_init_plt(void) {
    /* .plt pthread_cond_init@plt */
    /* ff 25 d2 90 82 00    	jmp    *0x8290d2(%rip)        # 849358 <pthread_cond_init@GLIBC_2.3.2> */
    /* 68 68 00 00 00       	push   $0x68 */
    /* e9 60 f9 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20290 - 0x202a0
void eac_linkage_plt_20290_xpg_basename_plt(void) {
    /* .plt __xpg_basename@plt */
    /* ff 25 ca 90 82 00    	jmp    *0x8290ca(%rip)        # 849360 <__xpg_basename@GLIBC_2.2.5> */
    /* 68 69 00 00 00       	push   $0x69 */
    /* e9 50 f9 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x202a0 - 0x202b0
void eac_linkage_plt_202a0_Unwind_RaiseException_plt(void) {
    /* .plt _Unwind_RaiseException@plt */
    /* ff 25 c2 90 82 00    	jmp    *0x8290c2(%rip)        # 849368 <_Unwind_RaiseException@GCC_3.0> */
    /* 68 6a 00 00 00       	push   $0x6a */
    /* e9 40 f9 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x202b0 - 0x202c0
void eac_linkage_plt_202b0_ctype_get_mb_cur_max_plt(void) {
    /* .plt __ctype_get_mb_cur_max@plt */
    /* ff 25 ba 90 82 00    	jmp    *0x8290ba(%rip)        # 849370 <__ctype_get_mb_cur_max@GLIBC_2.2.5> */
    /* 68 6b 00 00 00       	push   $0x6b */
    /* e9 30 f9 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x202c0 - 0x202d0
void eac_linkage_plt_202c0_realpath_plt(void) {
    /* .plt realpath@plt */
    /* ff 25 b2 90 82 00    	jmp    *0x8290b2(%rip)        # 849378 <realpath@GLIBC_2.3> */
    /* 68 6c 00 00 00       	push   $0x6c */
    /* e9 20 f9 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x202d0 - 0x202e0
void eac_linkage_plt_202d0_wctob_plt(void) {
    /* .plt wctob@plt */
    /* ff 25 aa 90 82 00    	jmp    *0x8290aa(%rip)        # 849380 <wctob@GLIBC_2.2.5> */
    /* 68 6d 00 00 00       	push   $0x6d */
    /* e9 10 f9 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x202e0 - 0x202f0
void eac_linkage_plt_202e0_wcsftime_l_plt(void) {
    /* .plt __wcsftime_l@plt */
    /* ff 25 a2 90 82 00    	jmp    *0x8290a2(%rip)        # 849388 <__wcsftime_l@GLIBC_2.3> */
    /* 68 6e 00 00 00       	push   $0x6e */
    /* e9 00 f9 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x202f0 - 0x20300
void eac_linkage_plt_202f0_iswctype_l_plt(void) {
    /* .plt __iswctype_l@plt */
    /* ff 25 9a 90 82 00    	jmp    *0x82909a(%rip)        # 849390 <__iswctype_l@GLIBC_2.2.5> */
    /* 68 6f 00 00 00       	push   $0x6f */
    /* e9 f0 f8 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20300 - 0x20310
void eac_linkage_plt_20300_readdir_plt(void) {
    /* .plt readdir@plt */
    /* ff 25 92 90 82 00    	jmp    *0x829092(%rip)        # 849398 <readdir@GLIBC_2.2.5> */
    /* 68 70 00 00 00       	push   $0x70 */
    /* e9 e0 f8 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20310 - 0x20320
void eac_linkage_plt_20310_tls_get_addr_plt(void) {
    /* .plt __tls_get_addr@plt */
    /* ff 25 8a 90 82 00    	jmp    *0x82908a(%rip)        # 8493a0 <__tls_get_addr@GLIBC_2.3> */
    /* 68 71 00 00 00       	push   $0x71 */
    /* e9 d0 f8 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20320 - 0x20330
void eac_linkage_plt_20320_mbstowcs_plt(void) {
    /* .plt mbstowcs@plt */
    /* ff 25 82 90 82 00    	jmp    *0x829082(%rip)        # 8493a8 <mbstowcs@GLIBC_2.2.5> */
    /* 68 72 00 00 00       	push   $0x72 */
    /* e9 c0 f8 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20330 - 0x20340
void eac_linkage_plt_20330_fdopen_plt(void) {
    /* .plt fdopen@plt */
    /* ff 25 7a 90 82 00    	jmp    *0x82907a(%rip)        # 8493b0 <fdopen@GLIBC_2.2.5> */
    /* 68 73 00 00 00       	push   $0x73 */
    /* e9 b0 f8 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20340 - 0x20350
void eac_linkage_plt_20340_syscall_plt(void) {
    /* .plt syscall@plt */
    /* ff 25 72 90 82 00    	jmp    *0x829072(%rip)        # 8493b8 <syscall@GLIBC_2.2.5> */
    /* 68 74 00 00 00       	push   $0x74 */
    /* e9 a0 f8 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20350 - 0x20360
void eac_linkage_plt_20350_memfd_create_plt(void) {
    /* .plt memfd_create@plt */
    /* ff 25 6a 90 82 00    	jmp    *0x82906a(%rip)        # 8493c0 <memfd_create@GLIBC_2.27> */
    /* 68 75 00 00 00       	push   $0x75 */
    /* e9 90 f8 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20360 - 0x20370
void eac_linkage_plt_20360_iconv_plt(void) {
    /* .plt iconv@plt */
    /* ff 25 62 90 82 00    	jmp    *0x829062(%rip)        # 8493c8 <iconv@GLIBC_2.2.5> */
    /* 68 76 00 00 00       	push   $0x76 */
    /* e9 80 f8 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20370 - 0x20380
void eac_linkage_plt_20370_dlclose_plt(void) {
    /* .plt dlclose@plt */
    /* ff 25 5a 90 82 00    	jmp    *0x82905a(%rip)        # 8493d0 <dlclose@GLIBC_2.2.5> */
    /* 68 77 00 00 00       	push   $0x77 */
    /* e9 70 f8 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20380 - 0x20390
void eac_linkage_plt_20380_ZydisDecoderTreeGetChildNode_plt(void) {
    /* .plt ZydisDecoderTreeGetChildNode@plt */
    /* ff 25 52 90 82 00    	jmp    *0x829052(%rip)        # 8493d8 <ZydisDecoderTreeGetChildNode@@Base+0x35b1a8> */
    /* 68 78 00 00 00       	push   $0x78 */
    /* e9 60 f8 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20390 - 0x203a0
void eac_linkage_plt_20390_pthread_self_plt(void) {
    /* .plt pthread_self@plt */
    /* ff 25 4a 90 82 00    	jmp    *0x82904a(%rip)        # 8493e0 <pthread_self@GLIBC_2.2.5> */
    /* 68 79 00 00 00       	push   $0x79 */
    /* e9 50 f8 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x203a0 - 0x203b0
void eac_linkage_plt_203a0_ITM_RU8_plt(void) {
    /* .plt _ITM_RU8@plt */
    /* ff 25 42 90 82 00    	jmp    *0x829042(%rip)        # 8493e8 <_ITM_RU8> */
    /* 68 7a 00 00 00       	push   $0x7a */
    /* e9 40 f8 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x203b0 - 0x203c0
void eac_linkage_plt_203b0_cxa_throw_plt(void) {
    /* .plt __cxa_throw@plt */
    /* ff 25 3a 90 82 00    	jmp    *0x82903a(%rip)        # 8493f0 <__cxa_throw@@Base+0x2e4860> */
    /* 68 7b 00 00 00       	push   $0x7b */
    /* e9 30 f8 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x203c0 - 0x203d0
void eac_linkage_plt_203c0_blake3_hash_many_sse2_plt(void) {
    /* .plt blake3_hash_many_sse2@plt */
    /* ff 25 32 90 82 00    	jmp    *0x829032(%rip)        # 8493f8 <blake3_hash_many_sse2@@Base+0x3650f8> */
    /* 68 7c 00 00 00       	push   $0x7c */
    /* e9 20 f8 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x203d0 - 0x203e0
void eac_linkage_plt_203d0_pthread_join_plt(void) {
    /* .plt pthread_join@plt */
    /* ff 25 2a 90 82 00    	jmp    *0x82902a(%rip)        # 849400 <pthread_join@GLIBC_2.2.5> */
    /* 68 7d 00 00 00       	push   $0x7d */
    /* e9 10 f8 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x203e0 - 0x203f0
void eac_linkage_plt_203e0_newlocale_plt(void) {
    /* .plt __newlocale@plt */
    /* ff 25 22 90 82 00    	jmp    *0x829022(%rip)        # 849408 <__newlocale@GLIBC_2.2.5> */
    /* 68 7e 00 00 00       	push   $0x7e */
    /* e9 00 f8 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x203f0 - 0x20400
void eac_linkage_plt_203f0_poll_plt(void) {
    /* .plt poll@plt */
    /* ff 25 1a 90 82 00    	jmp    *0x82901a(%rip)        # 849410 <poll@GLIBC_2.2.5> */
    /* 68 7f 00 00 00       	push   $0x7f */
    /* e9 f0 f7 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20400 - 0x20410
void eac_linkage_plt_20400_pthread_mutex_trylock_plt(void) {
    /* .plt pthread_mutex_trylock@plt */
    /* ff 25 12 90 82 00    	jmp    *0x829012(%rip)        # 849418 <pthread_mutex_trylock@GLIBC_2.2.5> */
    /* 68 80 00 00 00       	push   $0x80 */
    /* e9 e0 f7 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20410 - 0x20420
void eac_linkage_plt_20410_gmtime_r_plt(void) {
    /* .plt gmtime_r@plt */
    /* ff 25 0a 90 82 00    	jmp    *0x82900a(%rip)        # 849420 <gmtime_r@GLIBC_2.2.5> */
    /* 68 81 00 00 00       	push   $0x81 */
    /* e9 d0 f7 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20420 - 0x20430
void eac_linkage_plt_20420_strerror_plt(void) {
    /* .plt strerror@plt */
    /* ff 25 02 90 82 00    	jmp    *0x829002(%rip)        # 849428 <strerror@GLIBC_2.2.5> */
    /* 68 82 00 00 00       	push   $0x82 */
    /* e9 c0 f7 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20430 - 0x20440
void eac_linkage_plt_20430_epoll_ctl_plt(void) {
    /* .plt epoll_ctl@plt */
    /* ff 25 fa 8f 82 00    	jmp    *0x828ffa(%rip)        # 849430 <epoll_ctl@GLIBC_2.3.2> */
    /* 68 83 00 00 00       	push   $0x83 */
    /* e9 b0 f7 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20440 - 0x20450
void eac_linkage_plt_20440_strstr_plt(void) {
    /* .plt strstr@plt */
    /* ff 25 f2 8f 82 00    	jmp    *0x828ff2(%rip)        # 849438 <strstr@GLIBC_2.2.5> */
    /* 68 84 00 00 00       	push   $0x84 */
    /* e9 a0 f7 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20450 - 0x20460
void eac_linkage_plt_20450_rewind_plt(void) {
    /* .plt rewind@plt */
    /* ff 25 ea 8f 82 00    	jmp    *0x828fea(%rip)        # 849440 <rewind@GLIBC_2.2.5> */
    /* 68 85 00 00 00       	push   $0x85 */
    /* e9 90 f7 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20460 - 0x20470
void eac_linkage_plt_20460_getsockopt_plt(void) {
    /* .plt getsockopt@plt */
    /* ff 25 e2 8f 82 00    	jmp    *0x828fe2(%rip)        # 849448 <getsockopt@GLIBC_2.2.5> */
    /* 68 86 00 00 00       	push   $0x86 */
    /* e9 80 f7 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20470 - 0x20480
void eac_linkage_plt_20470_cxa_demangle_plt(void) {
    /* .plt __cxa_demangle@plt */
    /* ff 25 da 8f 82 00    	jmp    *0x828fda(%rip)        # 849450 <__cxa_demangle@@Base+0x2c6000> */
    /* 68 87 00 00 00       	push   $0x87 */
    /* e9 70 f7 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20480 - 0x20490
void eac_linkage_plt_20480_blake3_hasher_init_plt(void) {
    /* .plt blake3_hasher_init@plt */
    /* ff 25 d2 8f 82 00    	jmp    *0x828fd2(%rip)        # 849458 <blake3_hasher_init@@Base+0x371608> */
    /* 68 88 00 00 00       	push   $0x88 */
    /* e9 60 f7 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20490 - 0x204a0
void eac_linkage_plt_20490_fputs_plt(void) {
    /* .plt fputs@plt */
    /* ff 25 ca 8f 82 00    	jmp    *0x828fca(%rip)        # 849460 <fputs@GLIBC_2.2.5> */
    /* 68 89 00 00 00       	push   $0x89 */
    /* e9 50 f7 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x204a0 - 0x204b0
void eac_linkage_plt_204a0_lseek_plt(void) {
    /* .plt lseek@plt */
    /* ff 25 c2 8f 82 00    	jmp    *0x828fc2(%rip)        # 849468 <lseek@GLIBC_2.2.5> */
    /* 68 8a 00 00 00       	push   $0x8a */
    /* e9 40 f7 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x204b0 - 0x204c0
void eac_linkage_plt_204b0_readlink_plt(void) {
    /* .plt readlink@plt */
    /* ff 25 ba 8f 82 00    	jmp    *0x828fba(%rip)        # 849470 <readlink@GLIBC_2.2.5> */
    /* 68 8b 00 00 00       	push   $0x8b */
    /* e9 30 f7 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x204c0 - 0x204d0
void eac_linkage_plt_204c0_atoi_plt(void) {
    /* .plt atoi@plt */
    /* ff 25 b2 8f 82 00    	jmp    *0x828fb2(%rip)        # 849478 <atoi@GLIBC_2.2.5> */
    /* 68 8c 00 00 00       	push   $0x8c */
    /* e9 20 f7 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x204d0 - 0x204e0
void eac_linkage_plt_204d0_connect_plt(void) {
    /* .plt connect@plt */
    /* ff 25 aa 8f 82 00    	jmp    *0x828faa(%rip)        # 849480 <connect@GLIBC_2.2.5> */
    /* 68 8d 00 00 00       	push   $0x8d */
    /* e9 10 f7 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x204e0 - 0x204f0
void eac_linkage_plt_204e0_mbsrtowcs_plt(void) {
    /* .plt mbsrtowcs@plt */
    /* ff 25 a2 8f 82 00    	jmp    *0x828fa2(%rip)        # 849488 <mbsrtowcs@GLIBC_2.2.5> */
    /* 68 8e 00 00 00       	push   $0x8e */
    /* e9 00 f7 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x204f0 - 0x20500
void eac_linkage_plt_204f0_towlower_plt(void) {
    /* .plt towlower@plt */
    /* ff 25 9a 8f 82 00    	jmp    *0x828f9a(%rip)        # 849490 <towlower@GLIBC_2.2.5> */
    /* 68 8f 00 00 00       	push   $0x8f */
    /* e9 f0 f6 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20500 - 0x20510
void eac_linkage_plt_20500_wcrtomb_plt(void) {
    /* .plt wcrtomb@plt */
    /* ff 25 92 8f 82 00    	jmp    *0x828f92(%rip)        # 849498 <wcrtomb@GLIBC_2.2.5> */
    /* 68 90 00 00 00       	push   $0x90 */
    /* e9 e0 f6 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20510 - 0x20520
void eac_linkage_plt_20510_putwc_plt(void) {
    /* .plt putwc@plt */
    /* ff 25 8a 8f 82 00    	jmp    *0x828f8a(%rip)        # 8494a0 <putwc@GLIBC_2.2.5> */
    /* 68 91 00 00 00       	push   $0x91 */
    /* e9 d0 f6 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20520 - 0x20530
void eac_linkage_plt_20520_blake3_hash_many_avx512_plt(void) {
    /* .plt blake3_hash_many_avx512@plt */
    /* ff 25 82 8f 82 00    	jmp    *0x828f82(%rip)        # 8494a8 <blake3_hash_many_avx512@@Base+0x36c0e8> */
    /* 68 92 00 00 00       	push   $0x92 */
    /* e9 c0 f6 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20530 - 0x20540
void eac_linkage_plt_20530_putc_plt(void) {
    /* .plt putc@plt */
    /* ff 25 7a 8f 82 00    	jmp    *0x828f7a(%rip)        # 8494b0 <putc@GLIBC_2.2.5> */
    /* 68 93 00 00 00       	push   $0x93 */
    /* e9 b0 f6 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20540 - 0x20550
void eac_linkage_plt_20540_cxa_end_catch_plt(void) {
    /* .plt __cxa_end_catch@plt */
    /* ff 25 72 8f 82 00    	jmp    *0x828f72(%rip)        # 8494b8 <__cxa_end_catch@@Base+0x35a608> */
    /* 68 94 00 00 00       	push   $0x94 */
    /* e9 a0 f6 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20550 - 0x20560
void eac_linkage_plt_20550_cxa_guard_acquire_plt(void) {
    /* .plt __cxa_guard_acquire@plt */
    /* ff 25 6a 8f 82 00    	jmp    *0x828f6a(%rip)        # 8494c0 <__cxa_guard_acquire@@Base+0x35a8b0> */
    /* 68 95 00 00 00       	push   $0x95 */
    /* e9 90 f6 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20560 - 0x20570
void eac_linkage_plt_20560_signal_plt(void) {
    /* .plt signal@plt */
    /* ff 25 62 8f 82 00    	jmp    *0x828f62(%rip)        # 8494c8 <signal@GLIBC_2.2.5> */
    /* 68 96 00 00 00       	push   $0x96 */
    /* e9 80 f6 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20570 - 0x20580
void eac_linkage_plt_20570_memmove_plt(void) {
    /* .plt memmove@plt */
    /* ff 25 5a 8f 82 00    	jmp    *0x828f5a(%rip)        # 8494d0 <memmove@GLIBC_2.2.5> */
    /* 68 97 00 00 00       	push   $0x97 */
    /* e9 70 f6 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20580 - 0x20590
void eac_linkage_plt_20580_strchr_plt(void) {
    /* .plt strchr@plt */
    /* ff 25 52 8f 82 00    	jmp    *0x828f52(%rip)        # 8494d8 <strchr@GLIBC_2.2.5> */
    /* 68 98 00 00 00       	push   $0x98 */
    /* e9 60 f6 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20590 - 0x205a0
void eac_linkage_plt_20590_ZydisGetElementInfo_plt(void) {
    /* .plt ZydisGetElementInfo@plt */
    /* ff 25 4a 8f 82 00    	jmp    *0x828f4a(%rip)        # 8494e0 <ZydisGetElementInfo@@Base+0x35ab20> */
    /* 68 99 00 00 00       	push   $0x99 */
    /* e9 50 f6 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x205a0 - 0x205b0
void eac_linkage_plt_205a0_socket_plt(void) {
    /* .plt socket@plt */
    /* ff 25 42 8f 82 00    	jmp    *0x828f42(%rip)        # 8494e8 <socket@GLIBC_2.2.5> */
    /* 68 9a 00 00 00       	push   $0x9a */
    /* e9 40 f6 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x205b0 - 0x205c0
void eac_linkage_plt_205b0_vsnprintf_plt(void) {
    /* .plt vsnprintf@plt */
    /* ff 25 3a 8f 82 00    	jmp    *0x828f3a(%rip)        # 8494f0 <vsnprintf@GLIBC_2.2.5> */
    /* 68 9b 00 00 00       	push   $0x9b */
    /* e9 30 f6 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x205c0 - 0x205d0
void eac_linkage_plt_205c0_fread_plt(void) {
    /* .plt fread@plt */
    /* ff 25 32 8f 82 00    	jmp    *0x828f32(%rip)        # 8494f8 <fread@GLIBC_2.2.5> */
    /* 68 9c 00 00 00       	push   $0x9c */
    /* e9 20 f6 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x205d0 - 0x205e0
void eac_linkage_plt_205d0_wmemmove_plt(void) {
    /* .plt wmemmove@plt */
    /* ff 25 2a 8f 82 00    	jmp    *0x828f2a(%rip)        # 849500 <wmemmove@GLIBC_2.2.5> */
    /* 68 9d 00 00 00       	push   $0x9d */
    /* e9 10 f6 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x205e0 - 0x205f0
void eac_linkage_plt_205e0_ZydisGetOperandDefinitions_plt(void) {
    /* .plt ZydisGetOperandDefinitions@plt */
    /* ff 25 22 8f 82 00    	jmp    *0x828f22(%rip)        # 849508 <ZydisGetOperandDefinitions@@Base+0x35ab98> */
    /* 68 9e 00 00 00       	push   $0x9e */
    /* e9 00 f6 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x205f0 - 0x20600
void eac_linkage_plt_205f0_getenv_plt(void) {
    /* .plt getenv@plt */
    /* ff 25 1a 8f 82 00    	jmp    *0x828f1a(%rip)        # 849510 <getenv@GLIBC_2.2.5> */
    /* 68 9f 00 00 00       	push   $0x9f */
    /* e9 f0 f5 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20600 - 0x20610
void eac_linkage_plt_20600_alarm_plt(void) {
    /* .plt alarm@plt */
    /* ff 25 12 8f 82 00    	jmp    *0x828f12(%rip)        # 849518 <alarm@GLIBC_2.2.5> */
    /* 68 a0 00 00 00       	push   $0xa0 */
    /* e9 e0 f5 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20610 - 0x20620
void eac_linkage_plt_20610_ITM_memcpyRnWt_plt(void) {
    /* .plt _ITM_memcpyRnWt@plt */
    /* ff 25 0a 8f 82 00    	jmp    *0x828f0a(%rip)        # 849520 <_ITM_memcpyRnWt> */
    /* 68 a1 00 00 00       	push   $0xa1 */
    /* e9 d0 f5 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20620 - 0x20630
void eac_linkage_plt_20620_Unwind_GetIPInfo_plt(void) {
    /* .plt _Unwind_GetIPInfo@plt */
    /* ff 25 02 8f 82 00    	jmp    *0x828f02(%rip)        # 849528 <_Unwind_GetIPInfo@GCC_4.2.0> */
    /* 68 a2 00 00 00       	push   $0xa2 */
    /* e9 c0 f5 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20630 - 0x20640
void eac_linkage_plt_20630_dl_iterate_phdr_plt(void) {
    /* .plt dl_iterate_phdr@plt */
    /* ff 25 fa 8e 82 00    	jmp    *0x828efa(%rip)        # 849530 <dl_iterate_phdr@GLIBC_2.2.5> */
    /* 68 a3 00 00 00       	push   $0xa3 */
    /* e9 b0 f5 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20640 - 0x20650
void eac_linkage_plt_20640_errno_location_plt(void) {
    /* .plt __errno_location@plt */
    /* ff 25 f2 8e 82 00    	jmp    *0x828ef2(%rip)        # 849538 <__errno_location@GLIBC_2.2.5> */
    /* 68 a4 00 00 00       	push   $0xa4 */
    /* e9 a0 f5 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20650 - 0x20660
void eac_linkage_plt_20650_cxa_get_globals_plt(void) {
    /* .plt __cxa_get_globals@plt */
    /* ff 25 ea 8e 82 00    	jmp    *0x828eea(%rip)        # 849540 <__cxa_get_globals@@Base+0x2e3ca0> */
    /* 68 a5 00 00 00       	push   $0xa5 */
    /* e9 90 f5 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20660 - 0x20670
void eac_linkage_plt_20660_cxa_init_primary_exception_plt(void) {
    /* .plt __cxa_init_primary_exception@plt */
    /* ff 25 e2 8e 82 00    	jmp    *0x828ee2(%rip)        # 849548 <__cxa_init_primary_exception@@Base+0x2e4a08> */
    /* 68 a6 00 00 00       	push   $0xa6 */
    /* e9 80 f5 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20670 - 0x20680
void eac_linkage_plt_20670_strdup_plt(void) {
    /* .plt strdup@plt */
    /* ff 25 da 8e 82 00    	jmp    *0x828eda(%rip)        # 849550 <strdup@GLIBC_2.2.5> */
    /* 68 a7 00 00 00       	push   $0xa7 */
    /* e9 70 f5 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20680 - 0x20690
void eac_linkage_plt_20680_sem_init_plt(void) {
    /* .plt sem_init@plt */
    /* ff 25 d2 8e 82 00    	jmp    *0x828ed2(%rip)        # 849558 <sem_init@GLIBC_2.2.5> */
    /* 68 a8 00 00 00       	push   $0xa8 */
    /* e9 60 f5 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20690 - 0x206a0
void eac_linkage_plt_20690_pthread_mutexattr_settype_plt(void) {
    /* .plt pthread_mutexattr_settype@plt */
    /* ff 25 ca 8e 82 00    	jmp    *0x828eca(%rip)        # 849560 <pthread_mutexattr_settype@GLIBC_2.2.5> */
    /* 68 a9 00 00 00       	push   $0xa9 */
    /* e9 50 f5 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x206a0 - 0x206b0
void eac_linkage_plt_206a0_uselocale_plt(void) {
    /* .plt __uselocale@plt */
    /* ff 25 c2 8e 82 00    	jmp    *0x828ec2(%rip)        # 849568 <__uselocale@GLIBC_2.3> */
    /* 68 aa 00 00 00       	push   $0xaa */
    /* e9 40 f5 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x206b0 - 0x206c0
void eac_linkage_plt_206b0_blake3_compress_xof_sse2_plt(void) {
    /* .plt blake3_compress_xof_sse2@plt */
    /* ff 25 ba 8e 82 00    	jmp    *0x828eba(%rip)        # 849570 <blake3_compress_xof_sse2@@Base+0x362630> */
    /* 68 ab 00 00 00       	push   $0xab */
    /* e9 30 f5 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x206c0 - 0x206d0
void eac_linkage_plt_206c0_stack_chk_fail_plt(void) {
    /* .plt __stack_chk_fail@plt */
    /* ff 25 b2 8e 82 00    	jmp    *0x828eb2(%rip)        # 849578 <__stack_chk_fail@GLIBC_2.4> */
    /* 68 ac 00 00 00       	push   $0xac */
    /* e9 20 f5 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x206d0 - 0x206e0
void eac_linkage_plt_206d0_blake3_compress_in_place_sse2_plt(void) {
    /* .plt blake3_compress_in_place_sse2@plt */
    /* ff 25 aa 8e 82 00    	jmp    *0x828eaa(%rip)        # 849580 <blake3_compress_in_place_sse2@@Base+0x362840> */
    /* 68 ad 00 00 00       	push   $0xad */
    /* e9 10 f5 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x206e0 - 0x206f0
void eac_linkage_plt_206e0_strcmp_plt(void) {
    /* .plt strcmp@plt */
    /* ff 25 a2 8e 82 00    	jmp    *0x828ea2(%rip)        # 849588 <strcmp@GLIBC_2.2.5> */
    /* 68 ae 00 00 00       	push   $0xae */
    /* e9 00 f5 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x206f0 - 0x20700
void eac_linkage_plt_206f0_send_plt(void) {
    /* .plt send@plt */
    /* ff 25 9a 8e 82 00    	jmp    *0x828e9a(%rip)        # 849590 <send@GLIBC_2.2.5> */
    /* 68 af 00 00 00       	push   $0xaf */
    /* e9 f0 f4 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20700 - 0x20710
void eac_linkage_plt_20700_ZydisGetAccessedFlags_plt(void) {
    /* .plt ZydisGetAccessedFlags@plt */
    /* ff 25 92 8e 82 00    	jmp    *0x828e92(%rip)        # 849598 <ZydisGetAccessedFlags@@Base+0x35abb8> */
    /* 68 b0 00 00 00       	push   $0xb0 */
    /* e9 e0 f4 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20710 - 0x20720
void eac_linkage_plt_20710_ZydisRegisterGetWidth_plt(void) {
    /* .plt ZydisRegisterGetWidth@plt */
    /* ff 25 8a 8e 82 00    	jmp    *0x828e8a(%rip)        # 8495a0 <ZydisRegisterGetWidth@@Base+0x35aec0> */
    /* 68 b1 00 00 00       	push   $0xb1 */
    /* e9 d0 f4 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20720 - 0x20730
void eac_linkage_plt_20720_sem_post_plt(void) {
    /* .plt sem_post@plt */
    /* ff 25 82 8e 82 00    	jmp    *0x828e82(%rip)        # 8495a8 <sem_post@GLIBC_2.2.5> */
    /* 68 b2 00 00 00       	push   $0xb2 */
    /* e9 c0 f4 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20730 - 0x20740
void eac_linkage_plt_20730_dynamic_cast_plt(void) {
    /* .plt __dynamic_cast@plt */
    /* ff 25 7a 8e 82 00    	jmp    *0x828e7a(%rip)        # 8495b0 <__dynamic_cast@@Base+0x2e3e60> */
    /* 68 b3 00 00 00       	push   $0xb3 */
    /* e9 b0 f4 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20740 - 0x20750
void eac_linkage_plt_20740_strtod_l_plt(void) {
    /* .plt __strtod_l@plt */
    /* ff 25 72 8e 82 00    	jmp    *0x828e72(%rip)        # 8495b8 <__strtod_l@GLIBC_2.2.5> */
    /* 68 b4 00 00 00       	push   $0xb4 */
    /* e9 a0 f4 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20750 - 0x20760
void eac_linkage_plt_20750_epoll_wait_plt(void) {
    /* .plt epoll_wait@plt */
    /* ff 25 6a 8e 82 00    	jmp    *0x828e6a(%rip)        # 8495c0 <epoll_wait@GLIBC_2.3.2> */
    /* 68 b5 00 00 00       	push   $0xb5 */
    /* e9 90 f4 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20760 - 0x20770
void eac_linkage_plt_20760_getwc_plt(void) {
    /* .plt getwc@plt */
    /* ff 25 62 8e 82 00    	jmp    *0x828e62(%rip)        # 8495c8 <getwc@GLIBC_2.2.5> */
    /* 68 b6 00 00 00       	push   $0xb6 */
    /* e9 80 f4 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20770 - 0x20780
void eac_linkage_plt_20770_nanosleep_plt(void) {
    /* .plt nanosleep@plt */
    /* ff 25 5a 8e 82 00    	jmp    *0x828e5a(%rip)        # 8495d0 <nanosleep@GLIBC_2.2.5> */
    /* 68 b7 00 00 00       	push   $0xb7 */
    /* e9 70 f4 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20780 - 0x20790
void eac_linkage_plt_20780_glob_plt(void) {
    /* .plt glob@plt */
    /* ff 25 52 8e 82 00    	jmp    *0x828e52(%rip)        # 8495d8 <glob@GLIBC_2.27> */
    /* 68 b8 00 00 00       	push   $0xb8 */
    /* e9 60 f4 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20790 - 0x207a0
void eac_linkage_plt_20790_getuid_plt(void) {
    /* .plt getuid@plt */
    /* ff 25 4a 8e 82 00    	jmp    *0x828e4a(%rip)        # 8495e0 <getuid@GLIBC_2.2.5> */
    /* 68 b9 00 00 00       	push   $0xb9 */
    /* e9 50 f4 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x207a0 - 0x207b0
void eac_linkage_plt_207a0_pthread_cond_wait_plt(void) {
    /* .plt pthread_cond_wait@plt */
    /* ff 25 42 8e 82 00    	jmp    *0x828e42(%rip)        # 8495e8 <pthread_cond_wait@GLIBC_2.3.2> */
    /* 68 ba 00 00 00       	push   $0xba */
    /* e9 40 f4 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x207b0 - 0x207c0
void eac_linkage_plt_207b0_ZydisGetInstructionDefinition_plt(void) {
    /* .plt ZydisGetInstructionDefinition@plt */
    /* ff 25 3a 8e 82 00    	jmp    *0x828e3a(%rip)        # 8495f0 <ZydisGetInstructionDefinition@@Base+0x35ad50> */
    /* 68 bb 00 00 00       	push   $0xbb */
    /* e9 30 f4 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x207c0 - 0x207d0
void eac_linkage_plt_207c0_dladdr_plt(void) {
    /* .plt dladdr@plt */
    /* ff 25 32 8e 82 00    	jmp    *0x828e32(%rip)        # 8495f8 <dladdr@GLIBC_2.2.5> */
    /* 68 bc 00 00 00       	push   $0xbc */
    /* e9 20 f4 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x207d0 - 0x207e0
void eac_linkage_plt_207d0_pthread_once_plt(void) {
    /* .plt pthread_once@plt */
    /* ff 25 2a 8e 82 00    	jmp    *0x828e2a(%rip)        # 849600 <pthread_once@GLIBC_2.2.5> */
    /* 68 bd 00 00 00       	push   $0xbd */
    /* e9 10 f4 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x207e0 - 0x207f0
void eac_linkage_plt_207e0_memcmp_plt(void) {
    /* .plt memcmp@plt */
    /* ff 25 22 8e 82 00    	jmp    *0x828e22(%rip)        # 849608 <memcmp@GLIBC_2.2.5> */
    /* 68 be 00 00 00       	push   $0xbe */
    /* e9 00 f4 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x207f0 - 0x20800
void eac_linkage_plt_207f0_blake3_hasher_finalize_plt(void) {
    /* .plt blake3_hasher_finalize@plt */
    /* ff 25 1a 8e 82 00    	jmp    *0x828e1a(%rip)        # 849610 <blake3_hasher_finalize@@Base+0x370970> */
    /* 68 bf 00 00 00       	push   $0xbf */
    /* e9 f0 f3 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20800 - 0x20810
void eac_linkage_plt_20800_calloc_plt(void) {
    /* .plt calloc@plt */
    /* ff 25 12 8e 82 00    	jmp    *0x828e12(%rip)        # 849618 <calloc@GLIBC_2.2.5> */
    /* 68 c0 00 00 00       	push   $0xc0 */
    /* e9 e0 f3 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20810 - 0x20820
void eac_linkage_plt_20810_globfree_plt(void) {
    /* .plt globfree@plt */
    /* ff 25 0a 8e 82 00    	jmp    *0x828e0a(%rip)        # 849620 <globfree@GLIBC_2.2.5> */
    /* 68 c1 00 00 00       	push   $0xc1 */
    /* e9 d0 f3 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20820 - 0x20830
void eac_linkage_plt_20820_munmap_plt(void) {
    /* .plt munmap@plt */
    /* ff 25 02 8e 82 00    	jmp    *0x828e02(%rip)        # 849628 <munmap@GLIBC_2.2.5> */
    /* 68 c2 00 00 00       	push   $0xc2 */
    /* e9 c0 f3 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20830 - 0x20840
void eac_linkage_plt_20830_feof_plt(void) {
    /* .plt feof@plt */
    /* ff 25 fa 8d 82 00    	jmp    *0x828dfa(%rip)        # 849630 <feof@GLIBC_2.2.5> */
    /* 68 c3 00 00 00       	push   $0xc3 */
    /* e9 b0 f3 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20840 - 0x20850
void eac_linkage_plt_20840_blake3_hasher_reset_plt(void) {
    /* .plt blake3_hasher_reset@plt */
    /* ff 25 f2 8d 82 00    	jmp    *0x828df2(%rip)        # 849638 <blake3_hasher_reset@@Base+0x3707f8> */
    /* 68 c4 00 00 00       	push   $0xc4 */
    /* e9 a0 f3 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20850 - 0x20860
void eac_linkage_plt_20850_ZydisDecoderDecodeOperands_plt(void) {
    /* .plt ZydisDecoderDecodeOperands@plt */
    /* ff 25 ea 8d 82 00    	jmp    *0x828dea(%rip)        # 849640 <ZydisDecoderDecodeOperands@@Base+0x35c3f0> */
    /* 68 c5 00 00 00       	push   $0xc5 */
    /* e9 90 f3 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20860 - 0x20870
void eac_linkage_plt_20860_writev_plt(void) {
    /* .plt writev@plt */
    /* ff 25 e2 8d 82 00    	jmp    *0x828de2(%rip)        # 849648 <writev@GLIBC_2.2.5> */
    /* 68 c6 00 00 00       	push   $0xc6 */
    /* e9 80 f3 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20870 - 0x20880
void eac_linkage_plt_20870_fclose_plt(void) {
    /* .plt fclose@plt */
    /* ff 25 da 8d 82 00    	jmp    *0x828dda(%rip)        # 849650 <fclose@GLIBC_2.2.5> */
    /* 68 c7 00 00 00       	push   $0xc7 */
    /* e9 70 f3 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20880 - 0x20890
void eac_linkage_plt_20880_blake3_hash_many_avx2_plt(void) {
    /* .plt blake3_hash_many_avx2@plt */
    /* ff 25 d2 8d 82 00    	jmp    *0x828dd2(%rip)        # 849658 <blake3_hash_many_avx2@@Base+0x36e858> */
    /* 68 c8 00 00 00       	push   $0xc8 */
    /* e9 60 f3 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20890 - 0x208a0
void eac_linkage_plt_20890_isspace_plt(void) {
    /* .plt isspace@plt */
    /* ff 25 ca 8d 82 00    	jmp    *0x828dca(%rip)        # 849660 <isspace@GLIBC_2.2.5> */
    /* 68 c9 00 00 00       	push   $0xc9 */
    /* e9 50 f3 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x208a0 - 0x208b0
void eac_linkage_plt_208a0_cxa_throw_bad_array_new_length_plt(void) {
    /* .plt __cxa_throw_bad_array_new_length@plt */
    /* ff 25 c2 8d 82 00    	jmp    *0x828dc2(%rip)        # 849668 <__cxa_throw_bad_array_new_length@@Base+0x2e46f8> */
    /* 68 ca 00 00 00       	push   $0xca */
    /* e9 40 f3 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x208b0 - 0x208c0
void eac_linkage_plt_208b0_difftime_plt(void) {
    /* .plt difftime@plt */
    /* ff 25 ba 8d 82 00    	jmp    *0x828dba(%rip)        # 849670 <difftime@GLIBC_2.2.5> */
    /* 68 cb 00 00 00       	push   $0xcb */
    /* e9 30 f3 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x208c0 - 0x208d0
void eac_linkage_plt_208c0_lseek64_plt(void) {
    /* .plt lseek64@plt */
    /* ff 25 b2 8d 82 00    	jmp    *0x828db2(%rip)        # 849678 <lseek64@GLIBC_2.2.5> */
    /* 68 cc 00 00 00       	push   $0xcc */
    /* e9 20 f3 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x208d0 - 0x208e0
void eac_linkage_plt_208d0_blake3_compress_in_place_avx512_plt(void) {
    /* .plt blake3_compress_in_place_avx512@plt */
    /* ff 25 aa 8d 82 00    	jmp    *0x828daa(%rip)        # 849680 <blake3_compress_in_place_avx512@@Base+0x368b40> */
    /* 68 cd 00 00 00       	push   $0xcd */
    /* e9 10 f3 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x208e0 - 0x208f0
void eac_linkage_plt_208e0_dlsym_plt(void) {
    /* .plt dlsym@plt */
    /* ff 25 a2 8d 82 00    	jmp    *0x828da2(%rip)        # 849688 <dlsym@GLIBC_2.2.5> */
    /* 68 ce 00 00 00       	push   $0xce */
    /* e9 00 f3 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x208f0 - 0x20900
void eac_linkage_plt_208f0_Unwind_GetTextRelBase_plt(void) {
    /* .plt _Unwind_GetTextRelBase@plt */
    /* ff 25 9a 8d 82 00    	jmp    *0x828d9a(%rip)        # 849690 <_Unwind_GetTextRelBase@GCC_3.0> */
    /* 68 cf 00 00 00       	push   $0xcf */
    /* e9 f0 f2 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20900 - 0x20910
void eac_linkage_plt_20900_freelocale_plt(void) {
    /* .plt __freelocale@plt */
    /* ff 25 92 8d 82 00    	jmp    *0x828d92(%rip)        # 849698 <__freelocale@GLIBC_2.2.5> */
    /* 68 d0 00 00 00       	push   $0xd0 */
    /* e9 e0 f2 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20910 - 0x20920
void eac_linkage_plt_20910_bind_textdomain_codeset_plt(void) {
    /* .plt bind_textdomain_codeset@plt */
    /* ff 25 8a 8d 82 00    	jmp    *0x828d8a(%rip)        # 8496a0 <bind_textdomain_codeset@GLIBC_2.2.5> */
    /* 68 d1 00 00 00       	push   $0xd1 */
    /* e9 d0 f2 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20920 - 0x20930
void eac_linkage_plt_20920_wcsnrtombs_plt(void) {
    /* .plt wcsnrtombs@plt */
    /* ff 25 82 8d 82 00    	jmp    *0x828d82(%rip)        # 8496a8 <wcsnrtombs@GLIBC_2.2.5> */
    /* 68 d2 00 00 00       	push   $0xd2 */
    /* e9 c0 f2 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20930 - 0x20940
void eac_linkage_plt_20930_closedir_plt(void) {
    /* .plt closedir@plt */
    /* ff 25 7a 8d 82 00    	jmp    *0x828d7a(%rip)        # 8496b0 <closedir@GLIBC_2.2.5> */
    /* 68 d3 00 00 00       	push   $0xd3 */
    /* e9 b0 f2 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20940 - 0x20950
void eac_linkage_plt_20940_sprintf_chk_plt(void) {
    /* .plt __sprintf_chk@plt */
    /* ff 25 72 8d 82 00    	jmp    *0x828d72(%rip)        # 8496b8 <__sprintf_chk@GLIBC_2.3.4> */
    /* 68 d4 00 00 00       	push   $0xd4 */
    /* e9 a0 f2 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20950 - 0x20960
void eac_linkage_plt_20950_btowc_plt(void) {
    /* .plt btowc@plt */
    /* ff 25 6a 8d 82 00    	jmp    *0x828d6a(%rip)        # 8496c0 <btowc@GLIBC_2.2.5> */
    /* 68 d5 00 00 00       	push   $0xd5 */
    /* e9 90 f2 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20960 - 0x20970
void eac_linkage_plt_20960_sched_get_priority_max_plt(void) {
    /* .plt sched_get_priority_max@plt */
    /* ff 25 62 8d 82 00    	jmp    *0x828d62(%rip)        # 8496c8 <sched_get_priority_max@GLIBC_2.2.5> */
    /* 68 d6 00 00 00       	push   $0xd6 */
    /* e9 80 f2 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20970 - 0x20980
void eac_linkage_plt_20970_ftruncate_plt(void) {
    /* .plt ftruncate@plt */
    /* ff 25 5a 8d 82 00    	jmp    *0x828d5a(%rip)        # 8496d0 <ftruncate@GLIBC_2.2.5> */
    /* 68 d7 00 00 00       	push   $0xd7 */
    /* e9 70 f2 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20980 - 0x20990
void eac_linkage_plt_20980_getppid_plt(void) {
    /* .plt getppid@plt */
    /* ff 25 52 8d 82 00    	jmp    *0x828d52(%rip)        # 8496d8 <getppid@GLIBC_2.2.5> */
    /* 68 d8 00 00 00       	push   $0xd8 */
    /* e9 60 f2 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20990 - 0x209a0
void eac_linkage_plt_20990_fopen64_plt(void) {
    /* .plt fopen64@plt */
    /* ff 25 4a 8d 82 00    	jmp    *0x828d4a(%rip)        # 8496e0 <fopen64@GLIBC_2.2.5> */
    /* 68 d9 00 00 00       	push   $0xd9 */
    /* e9 50 f2 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x209a0 - 0x209b0
void eac_linkage_plt_209a0_pthread_setschedparam_plt(void) {
    /* .plt pthread_setschedparam@plt */
    /* ff 25 42 8d 82 00    	jmp    *0x828d42(%rip)        # 8496e8 <pthread_setschedparam@GLIBC_2.2.5> */
    /* 68 da 00 00 00       	push   $0xda */
    /* e9 40 f2 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x209b0 - 0x209c0
void eac_linkage_plt_209b0_blake3_compress_in_place_sse41_plt(void) {
    /* .plt blake3_compress_in_place_sse41@plt */
    /* ff 25 3a 8d 82 00    	jmp    *0x828d3a(%rip)        # 8496f0 <blake3_compress_in_place_sse41@@Base+0x35ffb0> */
    /* 68 db 00 00 00       	push   $0xdb */
    /* e9 30 f2 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x209c0 - 0x209d0
void eac_linkage_plt_209c0_wcscmp_plt(void) {
    /* .plt wcscmp@plt */
    /* ff 25 32 8d 82 00    	jmp    *0x828d32(%rip)        # 8496f8 <wcscmp@GLIBC_2.2.5> */
    /* 68 dc 00 00 00       	push   $0xdc */
    /* e9 20 f2 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x209d0 - 0x209e0
void eac_linkage_plt_209d0_fwrite_plt(void) {
    /* .plt fwrite@plt */
    /* ff 25 2a 8d 82 00    	jmp    *0x828d2a(%rip)        # 849700 <fwrite@GLIBC_2.2.5> */
    /* 68 dd 00 00 00       	push   $0xdd */
    /* e9 10 f2 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x209e0 - 0x209f0
void eac_linkage_plt_209e0_pthread_mutex_lock_plt(void) {
    /* .plt pthread_mutex_lock@plt */
    /* ff 25 22 8d 82 00    	jmp    *0x828d22(%rip)        # 849708 <pthread_mutex_lock@GLIBC_2.2.5> */
    /* 68 de 00 00 00       	push   $0xde */
    /* e9 00 f2 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x209f0 - 0x20a00
void eac_linkage_plt_209f0_ZGTtnam_plt(void) {
    /* .plt _ZGTtnam@plt */
    /* ff 25 1a 8d 82 00    	jmp    *0x828d1a(%rip)        # 849710 <_ZGTtnam> */
    /* 68 df 00 00 00       	push   $0xdf */
    /* e9 f0 f1 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20a00 - 0x20a10
void eac_linkage_plt_20a00_realloc_plt(void) {
    /* .plt realloc@plt */
    /* ff 25 12 8d 82 00    	jmp    *0x828d12(%rip)        # 849718 <realloc@GLIBC_2.2.5> */
    /* 68 e0 00 00 00       	push   $0xe0 */
    /* e9 e0 f1 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20a10 - 0x20a20
void eac_linkage_plt_20a10_setlocale_plt(void) {
    /* .plt setlocale@plt */
    /* ff 25 0a 8d 82 00    	jmp    *0x828d0a(%rip)        # 849720 <setlocale@GLIBC_2.2.5> */
    /* 68 e1 00 00 00       	push   $0xe1 */
    /* e9 d0 f1 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20a20 - 0x20a30
void eac_linkage_plt_20a20_rand_plt(void) {
    /* .plt rand@plt */
    /* ff 25 02 8d 82 00    	jmp    *0x828d02(%rip)        # 849728 <rand@GLIBC_2.2.5> */
    /* 68 e2 00 00 00       	push   $0xe2 */
    /* e9 c0 f1 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20a30 - 0x20a40
void eac_linkage_plt_20a30_pthread_mutexattr_init_plt(void) {
    /* .plt pthread_mutexattr_init@plt */
    /* ff 25 fa 8c 82 00    	jmp    *0x828cfa(%rip)        # 849730 <pthread_mutexattr_init@GLIBC_2.2.5> */
    /* 68 e3 00 00 00       	push   $0xe3 */
    /* e9 b0 f1 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20a40 - 0x20a50
void eac_linkage_plt_20a40_pthread_mutex_destroy_plt(void) {
    /* .plt pthread_mutex_destroy@plt */
    /* ff 25 f2 8c 82 00    	jmp    *0x828cf2(%rip)        # 849738 <pthread_mutex_destroy@GLIBC_2.2.5> */
    /* 68 e4 00 00 00       	push   $0xe4 */
    /* e9 a0 f1 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20a50 - 0x20a60
void eac_linkage_plt_20a50_cxa_rethrow_plt(void) {
    /* .plt __cxa_rethrow@plt */
    /* ff 25 ea 8c 82 00    	jmp    *0x828cea(%rip)        # 849740 <__cxa_rethrow@@Base+0x2e4b60> */
    /* 68 e5 00 00 00       	push   $0xe5 */
    /* e9 90 f1 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20a60 - 0x20a70
void eac_linkage_plt_20a60_blake3_hash_many_sse41_plt(void) {
    /* .plt blake3_hash_many_sse41@plt */
    /* ff 25 e2 8c 82 00    	jmp    *0x828ce2(%rip)        # 849748 <blake3_hash_many_sse41@@Base+0x3625c8> */
    /* 68 e6 00 00 00       	push   $0xe6 */
    /* e9 80 f1 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20a70 - 0x20a80
void eac_linkage_plt_20a70_write_plt(void) {
    /* .plt write@plt */
    /* ff 25 da 8c 82 00    	jmp    *0x828cda(%rip)        # 849750 <write@GLIBC_2.2.5> */
    /* 68 e7 00 00 00       	push   $0xe7 */
    /* e9 70 f1 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20a80 - 0x20a90
void eac_linkage_plt_20a80_Unwind_Resume_plt(void) {
    /* .plt _Unwind_Resume@plt */
    /* ff 25 d2 8c 82 00    	jmp    *0x828cd2(%rip)        # 849758 <_Unwind_Resume@GCC_3.0> */
    /* 68 e8 00 00 00       	push   $0xe8 */
    /* e9 60 f1 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20a90 - 0x20aa0
void eac_linkage_plt_20a90_pthread_cond_broadcast_plt(void) {
    /* .plt pthread_cond_broadcast@plt */
    /* ff 25 ca 8c 82 00    	jmp    *0x828cca(%rip)        # 849760 <pthread_cond_broadcast@GLIBC_2.3.2> */
    /* 68 e9 00 00 00       	push   $0xe9 */
    /* e9 50 f1 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20aa0 - 0x20ab0
void eac_linkage_plt_20aa0_ftello64_plt(void) {
    /* .plt ftello64@plt */
    /* ff 25 c2 8c 82 00    	jmp    *0x828cc2(%rip)        # 849768 <ftello64@GLIBC_2.2.5> */
    /* 68 ea 00 00 00       	push   $0xea */
    /* e9 40 f1 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20ab0 - 0x20ac0
void eac_linkage_plt_20ab0_strftime_plt(void) {
    /* .plt strftime@plt */
    /* ff 25 ba 8c 82 00    	jmp    *0x828cba(%rip)        # 849770 <strftime@GLIBC_2.2.5> */
    /* 68 eb 00 00 00       	push   $0xeb */
    /* e9 30 f1 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20ac0 - 0x20ad0
void eac_linkage_plt_20ac0_popen_plt(void) {
    /* .plt popen@plt */
    /* ff 25 b2 8c 82 00    	jmp    *0x828cb2(%rip)        # 849778 <popen@GLIBC_2.2.5> */
    /* 68 ec 00 00 00       	push   $0xec */
    /* e9 20 f1 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20ad0 - 0x20ae0
void eac_linkage_plt_20ad0_clock_gettime_plt(void) {
    /* .plt clock_gettime@plt */
    /* ff 25 aa 8c 82 00    	jmp    *0x828caa(%rip)        # 849780 <clock_gettime@GLIBC_2.2.5> */
    /* 68 ed 00 00 00       	push   $0xed */
    /* e9 10 f1 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20ae0 - 0x20af0
void eac_linkage_plt_20ae0_strtoul_plt(void) {
    /* .plt strtoul@plt */
    /* ff 25 a2 8c 82 00    	jmp    *0x828ca2(%rip)        # 849788 <strtoul@GLIBC_2.2.5> */
    /* 68 ee 00 00 00       	push   $0xee */
    /* e9 00 f1 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20af0 - 0x20b00
void eac_linkage_plt_20af0_pthread_mutex_unlock_plt(void) {
    /* .plt pthread_mutex_unlock@plt */
    /* ff 25 9a 8c 82 00    	jmp    *0x828c9a(%rip)        # 849790 <pthread_mutex_unlock@GLIBC_2.2.5> */
    /* 68 ef 00 00 00       	push   $0xef */
    /* e9 f0 f0 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20b00 - 0x20b10
void eac_linkage_plt_20b00_ZydisDecoderInit_plt(void) {
    /* .plt ZydisDecoderInit@plt */
    /* ff 25 92 8c 82 00    	jmp    *0x828c92(%rip)        # 849798 <ZydisDecoderInit@@Base+0x35f4a8> */
    /* 68 f0 00 00 00       	push   $0xf0 */
    /* e9 e0 f0 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20b10 - 0x20b20
void eac_linkage_plt_20b10_memcpy_plt(void) {
    /* .plt memcpy@plt */
    /* ff 25 8a 8c 82 00    	jmp    *0x828c8a(%rip)        # 8497a0 <memcpy@GLIBC_2.14> */
    /* 68 f1 00 00 00       	push   $0xf1 */
    /* e9 d0 f0 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20b20 - 0x20b30
void eac_linkage_plt_20b20_fcntl_plt(void) {
    /* .plt fcntl@plt */
    /* ff 25 82 8c 82 00    	jmp    *0x828c82(%rip)        # 8497a8 <fcntl@GLIBC_2.2.5> */
    /* 68 f2 00 00 00       	push   $0xf2 */
    /* e9 c0 f0 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20b30 - 0x20b40
void eac_linkage_plt_20b30_open_plt(void) {
    /* .plt open@plt */
    /* ff 25 7a 8c 82 00    	jmp    *0x828c7a(%rip)        # 8497b0 <open@GLIBC_2.2.5> */
    /* 68 f3 00 00 00       	push   $0xf3 */
    /* e9 b0 f0 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20b40 - 0x20b50
void eac_linkage_plt_20b40_mmap_plt(void) {
    /* .plt mmap@plt */
    /* ff 25 72 8c 82 00    	jmp    *0x828c72(%rip)        # 8497b8 <mmap@GLIBC_2.2.5> */
    /* 68 f4 00 00 00       	push   $0xf4 */
    /* e9 a0 f0 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20b50 - 0x20b60
void eac_linkage_plt_20b50_Unwind_SetIP_plt(void) {
    /* .plt _Unwind_SetIP@plt */
    /* ff 25 6a 8c 82 00    	jmp    *0x828c6a(%rip)        # 8497c0 <_Unwind_SetIP@GCC_3.0> */
    /* 68 f5 00 00 00       	push   $0xf5 */
    /* e9 90 f0 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20b60 - 0x20b70
void eac_linkage_plt_20b60_iconv_close_plt(void) {
    /* .plt iconv_close@plt */
    /* ff 25 62 8c 82 00    	jmp    *0x828c62(%rip)        # 8497c8 <iconv_close@GLIBC_2.2.5> */
    /* 68 f6 00 00 00       	push   $0xf6 */
    /* e9 80 f0 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20b70 - 0x20b80
void eac_linkage_plt_20b70_towlower_l_plt(void) {
    /* .plt __towlower_l@plt */
    /* ff 25 5a 8c 82 00    	jmp    *0x828c5a(%rip)        # 8497d0 <__towlower_l@GLIBC_2.2.5> */
    /* 68 f7 00 00 00       	push   $0xf7 */
    /* e9 70 f0 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20b80 - 0x20b90
void eac_linkage_plt_20b80_time_plt(void) {
    /* .plt time@plt */
    /* ff 25 52 8c 82 00    	jmp    *0x828c52(%rip)        # 8497d8 <time@GLIBC_2.2.5> */
    /* 68 f8 00 00 00       	push   $0xf8 */
    /* e9 60 f0 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20b90 - 0x20ba0
void eac_linkage_plt_20b90_wmemset_plt(void) {
    /* .plt wmemset@plt */
    /* ff 25 4a 8c 82 00    	jmp    *0x828c4a(%rip)        # 8497e0 <wmemset@GLIBC_2.2.5> */
    /* 68 f9 00 00 00       	push   $0xf9 */
    /* e9 50 f0 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20ba0 - 0x20bb0
void eac_linkage_plt_20ba0_fflush_plt(void) {
    /* .plt fflush@plt */
    /* ff 25 42 8c 82 00    	jmp    *0x828c42(%rip)        # 8497e8 <fflush@GLIBC_2.2.5> */
    /* 68 fa 00 00 00       	push   $0xfa */
    /* e9 40 f0 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20bb0 - 0x20bc0
void eac_linkage_plt_20bb0_wcstombs_plt(void) {
    /* .plt wcstombs@plt */
    /* ff 25 3a 8c 82 00    	jmp    *0x828c3a(%rip)        # 8497f0 <wcstombs@GLIBC_2.2.5> */
    /* 68 fb 00 00 00       	push   $0xfb */
    /* e9 30 f0 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20bc0 - 0x20bd0
void eac_linkage_plt_20bc0_getc_plt(void) {
    /* .plt getc@plt */
    /* ff 25 32 8c 82 00    	jmp    *0x828c32(%rip)        # 8497f8 <getc@GLIBC_2.2.5> */
    /* 68 fc 00 00 00       	push   $0xfc */
    /* e9 20 f0 ff ff       	jmp    1fbf0 <_init@@Base+0x20> */
}

// Address range: 0x20bd0 - 0x20bd8
void eac_linkage_plt_got_20bd0_cxa_finalize_plt(void) {
    /* .plt.got __cxa_finalize@plt */
    /* ff 25 a2 7f 82 00    	jmp    *0x827fa2(%rip)        # 848b78 <__cxa_finalize@GLIBC_2.2.5> */
    /* 66 90                	xchg   %ax,%ax */
}

// Address range: 0x20bd8 - 0x20be0
void eac_linkage_plt_got_20bd8_dlopen_plt(void) {
    /* .plt.got dlopen@plt */
    /* ff 25 32 82 82 00    	jmp    *0x828232(%rip)        # 848e10 <dlopen@GLIBC_2.2.5> */
    /* 66 90                	xchg   %ax,%ax */
}

static const EACLinkageStub k_eac_linkage_stubs[] = {
    { ".fini", "_fini@@Base", 0x583650ull, 0x583659ull, 9ull },
    { ".init", "_init@@Base", 0x1fbd0ull, 0x1fbe7ull, 23ull },
    { ".plt", "_ITM_addUserCommitAction@plt-0x10", 0x1fbf0ull, 0x1fc00ull, 16ull },
    { ".plt", "_ITM_addUserCommitAction@plt", 0x1fc00ull, 0x1fc10ull, 16ull },
    { ".plt", "__strtof_l@plt", 0x1fc10ull, 0x1fc20ull, 16ull },
    { ".plt", "_ITM_memcpyRtWn@plt", 0x1fc20ull, 0x1fc30ull, 16ull },
    { ".plt", "mprotect@plt", 0x1fc30ull, 0x1fc40ull, 16ull },
    { ".plt", "sem_wait@plt", 0x1fc40ull, 0x1fc50ull, 16ull },
    { ".plt", "fileno@plt", 0x1fc50ull, 0x1fc60ull, 16ull },
    { ".plt", "pthread_cond_destroy@plt", 0x1fc60ull, 0x1fc70ull, 16ull },
    { ".plt", "printf@plt", 0x1fc70ull, 0x1fc80ull, 16ull },
    { ".plt", "__strcoll_l@plt", 0x1fc80ull, 0x1fc90ull, 16ull },
    { ".plt", "__nl_langinfo_l@plt", 0x1fc90ull, 0x1fca0ull, 16ull },
    { ".plt", "dgettext@plt", 0x1fca0ull, 0x1fcb0ull, 16ull },
    { ".plt", "wcsftime@plt", 0x1fcb0ull, 0x1fcc0ull, 16ull },
    { ".plt", "__cxa_free_exception@plt", 0x1fcc0ull, 0x1fcd0ull, 16ull },
    { ".plt", "_Unwind_GetRegionStart@plt", 0x1fcd0ull, 0x1fce0ull, 16ull },
    { ".plt", "fseeko64@plt", 0x1fce0ull, 0x1fcf0ull, 16ull },
    { ".plt", "wmemcpy@plt", 0x1fcf0ull, 0x1fd00ull, 16ull },
    { ".plt", "memset@plt", 0x1fd00ull, 0x1fd10ull, 16ull },
    { ".plt", "ftell@plt", 0x1fd10ull, 0x1fd20ull, 16ull },
    { ".plt", "mbrtowc@plt", 0x1fd20ull, 0x1fd30ull, 16ull },
    { ".plt", "snprintf@plt", 0x1fd30ull, 0x1fd40ull, 16ull },
    { ".plt", "__cxa_begin_catch@plt", 0x1fd40ull, 0x1fd50ull, 16ull },
    { ".plt", "_Unwind_SetGR@plt", 0x1fd50ull, 0x1fd60ull, 16ull },
    { ".plt", "wcslen@plt", 0x1fd60ull, 0x1fd70ull, 16ull },
    { ".plt", "blake3_compress_xof_sse41@plt", 0x1fd70ull, 0x1fd80ull, 16ull },
    { ".plt", "close@plt", 0x1fd80ull, 0x1fd90ull, 16ull },
    { ".plt", "__duplocale@plt", 0x1fd90ull, 0x1fda0ull, 16ull },
    { ".plt", "_Unwind_GetDataRelBase@plt", 0x1fda0ull, 0x1fdb0ull, 16ull },
    { ".plt", "blake3_hasher_update@plt", 0x1fdb0ull, 0x1fdc0ull, 16ull },
    { ".plt", "ioctl@plt", 0x1fdc0ull, 0x1fdd0ull, 16ull },
    { ".plt", "abort@plt", 0x1fdd0ull, 0x1fde0ull, 16ull },
    { ".plt", "memchr@plt", 0x1fde0ull, 0x1fdf0ull, 16ull },
    { ".plt", "ZydisGetInstructionEncodingInfo@plt", 0x1fdf0ull, 0x1fe00ull, 16ull },
    { ".plt", "epoll_create@plt", 0x1fe00ull, 0x1fe10ull, 16ull },
    { ".plt", "sem_destroy@plt", 0x1fe10ull, 0x1fe20ull, 16ull },
    { ".plt", "puts@plt", 0x1fe20ull, 0x1fe30ull, 16ull },
    { ".plt", "uname@plt", 0x1fe30ull, 0x1fe40ull, 16ull },
    { ".plt", "fseek@plt", 0x1fe40ull, 0x1fe50ull, 16ull },
    { ".plt", "getaddrinfo@plt", 0x1fe50ull, 0x1fe60ull, 16ull },
    { ".plt", "bindtextdomain@plt", 0x1fe60ull, 0x1fe70ull, 16ull },
    { ".plt", "wmemcmp@plt", 0x1fe70ull, 0x1fe80ull, 16ull },
    { ".plt", "__strftime_l@plt", 0x1fe80ull, 0x1fe90ull, 16ull },
    { ".plt", "gettimeofday@plt", 0x1fe90ull, 0x1fea0ull, 16ull },
    { ".plt", "__cxa_call_terminate@plt", 0x1fea0ull, 0x1feb0ull, 16ull },
    { ".plt", "setvbuf@plt", 0x1feb0ull, 0x1fec0ull, 16ull },
    { ".plt", "__strxfrm_l@plt", 0x1fec0ull, 0x1fed0ull, 16ull },
    { ".plt", "putchar@plt", 0x1fed0ull, 0x1fee0ull, 16ull },
    { ".plt", "_ITM_RU1@plt", 0x1fee0ull, 0x1fef0ull, 16ull },
    { ".plt", "mbsnrtowcs@plt", 0x1fef0ull, 0x1ff00ull, 16ull },
    { ".plt", "read@plt", 0x1ff00ull, 0x1ff10ull, 16ull },
    { ".plt", "strncmp@plt", 0x1ff10ull, 0x1ff20ull, 16ull },
    { ".plt", "malloc@plt", 0x1ff20ull, 0x1ff30ull, 16ull },
    { ".plt", "fopen@plt", 0x1ff30ull, 0x1ff40ull, 16ull },
    { ".plt", "recv@plt", 0x1ff40ull, 0x1ff50ull, 16ull },
    { ".plt", "__cxa_guard_release@plt", 0x1ff50ull, 0x1ff60ull, 16ull },
    { ".plt", "gettext@plt", 0x1ff60ull, 0x1ff70ull, 16ull },
    { ".plt", "blake3_xof_many_avx512@plt", 0x1ff70ull, 0x1ff80ull, 16ull },
    { ".plt", "ZydisDecoderDecodeInstruction@plt", 0x1ff80ull, 0x1ff90ull, 16ull },
    { ".plt", "blake3_hasher_finalize_seek@plt", 0x1ff90ull, 0x1ffa0ull, 16ull },
    { ".plt", "strtold_l@plt", 0x1ffa0ull, 0x1ffb0ull, 16ull },
    { ".plt", "sched_yield@plt", 0x1ffb0ull, 0x1ffc0ull, 16ull },
    { ".plt", "ungetwc@plt", 0x1ffc0ull, 0x1ffd0ull, 16ull },
    { ".plt", "_Unwind_DeleteException@plt", 0x1ffd0ull, 0x1ffe0ull, 16ull },
    { ".plt", "pthread_cond_timedwait@plt", 0x1ffe0ull, 0x1fff0ull, 16ull },
    { ".plt", "__wctype_l@plt", 0x1fff0ull, 0x20000ull, 16ull },
    { ".plt", "__memcpy_chk@plt", 0x20000ull, 0x20010ull, 16ull },
    { ".plt", "gmtime@plt", 0x20010ull, 0x20020ull, 16ull },
    { ".plt", "__cxa_atexit@plt", 0x20020ull, 0x20030ull, 16ull },
    { ".plt", "ZydisCalcAbsoluteAddress@plt", 0x20030ull, 0x20040ull, 16ull },
    { ".plt", "__cxa_current_exception_type@plt", 0x20040ull, 0x20050ull, 16ull },
    { ".plt", "blake3_compress_xof_avx512@plt", 0x20050ull, 0x20060ull, 16ull },
    { ".plt", "setsockopt@plt", 0x20060ull, 0x20070ull, 16ull },
    { ".plt", "sysconf@plt", 0x20070ull, 0x20080ull, 16ull },
    { ".plt", "getpid@plt", 0x20080ull, 0x20090ull, 16ull },
    { ".plt", "pthread_mutex_init@plt", 0x20090ull, 0x200a0ull, 16ull },
    { ".plt", "fgets@plt", 0x200a0ull, 0x200b0ull, 16ull },
    { ".plt", "__towupper_l@plt", 0x200b0ull, 0x200c0ull, 16ull },
    { ".plt", "__cxa_call_unexpected@plt", 0x200c0ull, 0x200d0ull, 16ull },
    { ".plt", "__wcsxfrm_l@plt", 0x200d0ull, 0x200e0ull, 16ull },
    { ".plt", "__fxstat64@plt", 0x200e0ull, 0x200f0ull, 16ull },
    { ".plt", "iconv_open@plt", 0x200f0ull, 0x20100ull, 16ull },
    { ".plt", "getpwuid@plt", 0x20100ull, 0x20110ull, 16ull },
    { ".plt", "__cxa_bad_cast@plt", 0x20110ull, 0x20120ull, 16ull },
    { ".plt", "_ZGTtdlPv@plt", 0x20120ull, 0x20130ull, 16ull },
    { ".plt", "__cxa_get_globals_fast@plt", 0x20130ull, 0x20140ull, 16ull },
    { ".plt", "_Unwind_GetLanguageSpecificData@plt", 0x20140ull, 0x20150ull, 16ull },
    { ".plt", "vswprintf@plt", 0x20150ull, 0x20160ull, 16ull },
    { ".plt", "ZydisRegisterEncode@plt", 0x20160ull, 0x20170ull, 16ull },
    { ".plt", "__udivti3@plt", 0x20170ull, 0x20180ull, 16ull },
    { ".plt", "_Unwind_Resume_or_Rethrow@plt", 0x20180ull, 0x20190ull, 16ull },
    { ".plt", "ungetc@plt", 0x20190ull, 0x201a0ull, 16ull },
    { ".plt", "__wcscoll_l@plt", 0x201a0ull, 0x201b0ull, 16ull },
    { ".plt", "__popcountdi2@plt", 0x201b0ull, 0x201c0ull, 16ull },
    { ".plt", "fputc@plt", 0x201c0ull, 0x201d0ull, 16ull },
    { ".plt", "freeaddrinfo@plt", 0x201d0ull, 0x201e0ull, 16ull },
    { ".plt", "free@plt", 0x201e0ull, 0x201f0ull, 16ull },
    { ".plt", "secure_getenv@plt", 0x201f0ull, 0x20200ull, 16ull },
    { ".plt", "strlen@plt", 0x20200ull, 0x20210ull, 16ull },
    { ".plt", "__cxa_allocate_exception@plt", 0x20210ull, 0x20220ull, 16ull },
    { ".plt", "ferror@plt", 0x20220ull, 0x20230ull, 16ull },
    { ".plt", "pthread_create@plt", 0x20230ull, 0x20240ull, 16ull },
    { ".plt", "wmemchr@plt", 0x20240ull, 0x20250ull, 16ull },
    { ".plt", "opendir@plt", 0x20250ull, 0x20260ull, 16ull },
    { ".plt", "__xstat@plt", 0x20260ull, 0x20270ull, 16ull },
    { ".plt", "pclose@plt", 0x20270ull, 0x20280ull, 16ull },
    { ".plt", "pthread_cond_init@plt", 0x20280ull, 0x20290ull, 16ull },
    { ".plt", "__xpg_basename@plt", 0x20290ull, 0x202a0ull, 16ull },
    { ".plt", "_Unwind_RaiseException@plt", 0x202a0ull, 0x202b0ull, 16ull },
    { ".plt", "__ctype_get_mb_cur_max@plt", 0x202b0ull, 0x202c0ull, 16ull },
    { ".plt", "realpath@plt", 0x202c0ull, 0x202d0ull, 16ull },
    { ".plt", "wctob@plt", 0x202d0ull, 0x202e0ull, 16ull },
    { ".plt", "__wcsftime_l@plt", 0x202e0ull, 0x202f0ull, 16ull },
    { ".plt", "__iswctype_l@plt", 0x202f0ull, 0x20300ull, 16ull },
    { ".plt", "readdir@plt", 0x20300ull, 0x20310ull, 16ull },
    { ".plt", "__tls_get_addr@plt", 0x20310ull, 0x20320ull, 16ull },
    { ".plt", "mbstowcs@plt", 0x20320ull, 0x20330ull, 16ull },
    { ".plt", "fdopen@plt", 0x20330ull, 0x20340ull, 16ull },
    { ".plt", "syscall@plt", 0x20340ull, 0x20350ull, 16ull },
    { ".plt", "memfd_create@plt", 0x20350ull, 0x20360ull, 16ull },
    { ".plt", "iconv@plt", 0x20360ull, 0x20370ull, 16ull },
    { ".plt", "dlclose@plt", 0x20370ull, 0x20380ull, 16ull },
    { ".plt", "ZydisDecoderTreeGetChildNode@plt", 0x20380ull, 0x20390ull, 16ull },
    { ".plt", "pthread_self@plt", 0x20390ull, 0x203a0ull, 16ull },
    { ".plt", "_ITM_RU8@plt", 0x203a0ull, 0x203b0ull, 16ull },
    { ".plt", "__cxa_throw@plt", 0x203b0ull, 0x203c0ull, 16ull },
    { ".plt", "blake3_hash_many_sse2@plt", 0x203c0ull, 0x203d0ull, 16ull },
    { ".plt", "pthread_join@plt", 0x203d0ull, 0x203e0ull, 16ull },
    { ".plt", "__newlocale@plt", 0x203e0ull, 0x203f0ull, 16ull },
    { ".plt", "poll@plt", 0x203f0ull, 0x20400ull, 16ull },
    { ".plt", "pthread_mutex_trylock@plt", 0x20400ull, 0x20410ull, 16ull },
    { ".plt", "gmtime_r@plt", 0x20410ull, 0x20420ull, 16ull },
    { ".plt", "strerror@plt", 0x20420ull, 0x20430ull, 16ull },
    { ".plt", "epoll_ctl@plt", 0x20430ull, 0x20440ull, 16ull },
    { ".plt", "strstr@plt", 0x20440ull, 0x20450ull, 16ull },
    { ".plt", "rewind@plt", 0x20450ull, 0x20460ull, 16ull },
    { ".plt", "getsockopt@plt", 0x20460ull, 0x20470ull, 16ull },
    { ".plt", "__cxa_demangle@plt", 0x20470ull, 0x20480ull, 16ull },
    { ".plt", "blake3_hasher_init@plt", 0x20480ull, 0x20490ull, 16ull },
    { ".plt", "fputs@plt", 0x20490ull, 0x204a0ull, 16ull },
    { ".plt", "lseek@plt", 0x204a0ull, 0x204b0ull, 16ull },
    { ".plt", "readlink@plt", 0x204b0ull, 0x204c0ull, 16ull },
    { ".plt", "atoi@plt", 0x204c0ull, 0x204d0ull, 16ull },
    { ".plt", "connect@plt", 0x204d0ull, 0x204e0ull, 16ull },
    { ".plt", "mbsrtowcs@plt", 0x204e0ull, 0x204f0ull, 16ull },
    { ".plt", "towlower@plt", 0x204f0ull, 0x20500ull, 16ull },
    { ".plt", "wcrtomb@plt", 0x20500ull, 0x20510ull, 16ull },
    { ".plt", "putwc@plt", 0x20510ull, 0x20520ull, 16ull },
    { ".plt", "blake3_hash_many_avx512@plt", 0x20520ull, 0x20530ull, 16ull },
    { ".plt", "putc@plt", 0x20530ull, 0x20540ull, 16ull },
    { ".plt", "__cxa_end_catch@plt", 0x20540ull, 0x20550ull, 16ull },
    { ".plt", "__cxa_guard_acquire@plt", 0x20550ull, 0x20560ull, 16ull },
    { ".plt", "signal@plt", 0x20560ull, 0x20570ull, 16ull },
    { ".plt", "memmove@plt", 0x20570ull, 0x20580ull, 16ull },
    { ".plt", "strchr@plt", 0x20580ull, 0x20590ull, 16ull },
    { ".plt", "ZydisGetElementInfo@plt", 0x20590ull, 0x205a0ull, 16ull },
    { ".plt", "socket@plt", 0x205a0ull, 0x205b0ull, 16ull },
    { ".plt", "vsnprintf@plt", 0x205b0ull, 0x205c0ull, 16ull },
    { ".plt", "fread@plt", 0x205c0ull, 0x205d0ull, 16ull },
    { ".plt", "wmemmove@plt", 0x205d0ull, 0x205e0ull, 16ull },
    { ".plt", "ZydisGetOperandDefinitions@plt", 0x205e0ull, 0x205f0ull, 16ull },
    { ".plt", "getenv@plt", 0x205f0ull, 0x20600ull, 16ull },
    { ".plt", "alarm@plt", 0x20600ull, 0x20610ull, 16ull },
    { ".plt", "_ITM_memcpyRnWt@plt", 0x20610ull, 0x20620ull, 16ull },
    { ".plt", "_Unwind_GetIPInfo@plt", 0x20620ull, 0x20630ull, 16ull },
    { ".plt", "dl_iterate_phdr@plt", 0x20630ull, 0x20640ull, 16ull },
    { ".plt", "__errno_location@plt", 0x20640ull, 0x20650ull, 16ull },
    { ".plt", "__cxa_get_globals@plt", 0x20650ull, 0x20660ull, 16ull },
    { ".plt", "__cxa_init_primary_exception@plt", 0x20660ull, 0x20670ull, 16ull },
    { ".plt", "strdup@plt", 0x20670ull, 0x20680ull, 16ull },
    { ".plt", "sem_init@plt", 0x20680ull, 0x20690ull, 16ull },
    { ".plt", "pthread_mutexattr_settype@plt", 0x20690ull, 0x206a0ull, 16ull },
    { ".plt", "__uselocale@plt", 0x206a0ull, 0x206b0ull, 16ull },
    { ".plt", "blake3_compress_xof_sse2@plt", 0x206b0ull, 0x206c0ull, 16ull },
    { ".plt", "__stack_chk_fail@plt", 0x206c0ull, 0x206d0ull, 16ull },
    { ".plt", "blake3_compress_in_place_sse2@plt", 0x206d0ull, 0x206e0ull, 16ull },
    { ".plt", "strcmp@plt", 0x206e0ull, 0x206f0ull, 16ull },
    { ".plt", "send@plt", 0x206f0ull, 0x20700ull, 16ull },
    { ".plt", "ZydisGetAccessedFlags@plt", 0x20700ull, 0x20710ull, 16ull },
    { ".plt", "ZydisRegisterGetWidth@plt", 0x20710ull, 0x20720ull, 16ull },
    { ".plt", "sem_post@plt", 0x20720ull, 0x20730ull, 16ull },
    { ".plt", "__dynamic_cast@plt", 0x20730ull, 0x20740ull, 16ull },
    { ".plt", "__strtod_l@plt", 0x20740ull, 0x20750ull, 16ull },
    { ".plt", "epoll_wait@plt", 0x20750ull, 0x20760ull, 16ull },
    { ".plt", "getwc@plt", 0x20760ull, 0x20770ull, 16ull },
    { ".plt", "nanosleep@plt", 0x20770ull, 0x20780ull, 16ull },
    { ".plt", "glob@plt", 0x20780ull, 0x20790ull, 16ull },
    { ".plt", "getuid@plt", 0x20790ull, 0x207a0ull, 16ull },
    { ".plt", "pthread_cond_wait@plt", 0x207a0ull, 0x207b0ull, 16ull },
    { ".plt", "ZydisGetInstructionDefinition@plt", 0x207b0ull, 0x207c0ull, 16ull },
    { ".plt", "dladdr@plt", 0x207c0ull, 0x207d0ull, 16ull },
    { ".plt", "pthread_once@plt", 0x207d0ull, 0x207e0ull, 16ull },
    { ".plt", "memcmp@plt", 0x207e0ull, 0x207f0ull, 16ull },
    { ".plt", "blake3_hasher_finalize@plt", 0x207f0ull, 0x20800ull, 16ull },
    { ".plt", "calloc@plt", 0x20800ull, 0x20810ull, 16ull },
    { ".plt", "globfree@plt", 0x20810ull, 0x20820ull, 16ull },
    { ".plt", "munmap@plt", 0x20820ull, 0x20830ull, 16ull },
    { ".plt", "feof@plt", 0x20830ull, 0x20840ull, 16ull },
    { ".plt", "blake3_hasher_reset@plt", 0x20840ull, 0x20850ull, 16ull },
    { ".plt", "ZydisDecoderDecodeOperands@plt", 0x20850ull, 0x20860ull, 16ull },
    { ".plt", "writev@plt", 0x20860ull, 0x20870ull, 16ull },
    { ".plt", "fclose@plt", 0x20870ull, 0x20880ull, 16ull },
    { ".plt", "blake3_hash_many_avx2@plt", 0x20880ull, 0x20890ull, 16ull },
    { ".plt", "isspace@plt", 0x20890ull, 0x208a0ull, 16ull },
    { ".plt", "__cxa_throw_bad_array_new_length@plt", 0x208a0ull, 0x208b0ull, 16ull },
    { ".plt", "difftime@plt", 0x208b0ull, 0x208c0ull, 16ull },
    { ".plt", "lseek64@plt", 0x208c0ull, 0x208d0ull, 16ull },
    { ".plt", "blake3_compress_in_place_avx512@plt", 0x208d0ull, 0x208e0ull, 16ull },
    { ".plt", "dlsym@plt", 0x208e0ull, 0x208f0ull, 16ull },
    { ".plt", "_Unwind_GetTextRelBase@plt", 0x208f0ull, 0x20900ull, 16ull },
    { ".plt", "__freelocale@plt", 0x20900ull, 0x20910ull, 16ull },
    { ".plt", "bind_textdomain_codeset@plt", 0x20910ull, 0x20920ull, 16ull },
    { ".plt", "wcsnrtombs@plt", 0x20920ull, 0x20930ull, 16ull },
    { ".plt", "closedir@plt", 0x20930ull, 0x20940ull, 16ull },
    { ".plt", "__sprintf_chk@plt", 0x20940ull, 0x20950ull, 16ull },
    { ".plt", "btowc@plt", 0x20950ull, 0x20960ull, 16ull },
    { ".plt", "sched_get_priority_max@plt", 0x20960ull, 0x20970ull, 16ull },
    { ".plt", "ftruncate@plt", 0x20970ull, 0x20980ull, 16ull },
    { ".plt", "getppid@plt", 0x20980ull, 0x20990ull, 16ull },
    { ".plt", "fopen64@plt", 0x20990ull, 0x209a0ull, 16ull },
    { ".plt", "pthread_setschedparam@plt", 0x209a0ull, 0x209b0ull, 16ull },
    { ".plt", "blake3_compress_in_place_sse41@plt", 0x209b0ull, 0x209c0ull, 16ull },
    { ".plt", "wcscmp@plt", 0x209c0ull, 0x209d0ull, 16ull },
    { ".plt", "fwrite@plt", 0x209d0ull, 0x209e0ull, 16ull },
    { ".plt", "pthread_mutex_lock@plt", 0x209e0ull, 0x209f0ull, 16ull },
    { ".plt", "_ZGTtnam@plt", 0x209f0ull, 0x20a00ull, 16ull },
    { ".plt", "realloc@plt", 0x20a00ull, 0x20a10ull, 16ull },
    { ".plt", "setlocale@plt", 0x20a10ull, 0x20a20ull, 16ull },
    { ".plt", "rand@plt", 0x20a20ull, 0x20a30ull, 16ull },
    { ".plt", "pthread_mutexattr_init@plt", 0x20a30ull, 0x20a40ull, 16ull },
    { ".plt", "pthread_mutex_destroy@plt", 0x20a40ull, 0x20a50ull, 16ull },
    { ".plt", "__cxa_rethrow@plt", 0x20a50ull, 0x20a60ull, 16ull },
    { ".plt", "blake3_hash_many_sse41@plt", 0x20a60ull, 0x20a70ull, 16ull },
    { ".plt", "write@plt", 0x20a70ull, 0x20a80ull, 16ull },
    { ".plt", "_Unwind_Resume@plt", 0x20a80ull, 0x20a90ull, 16ull },
    { ".plt", "pthread_cond_broadcast@plt", 0x20a90ull, 0x20aa0ull, 16ull },
    { ".plt", "ftello64@plt", 0x20aa0ull, 0x20ab0ull, 16ull },
    { ".plt", "strftime@plt", 0x20ab0ull, 0x20ac0ull, 16ull },
    { ".plt", "popen@plt", 0x20ac0ull, 0x20ad0ull, 16ull },
    { ".plt", "clock_gettime@plt", 0x20ad0ull, 0x20ae0ull, 16ull },
    { ".plt", "strtoul@plt", 0x20ae0ull, 0x20af0ull, 16ull },
    { ".plt", "pthread_mutex_unlock@plt", 0x20af0ull, 0x20b00ull, 16ull },
    { ".plt", "ZydisDecoderInit@plt", 0x20b00ull, 0x20b10ull, 16ull },
    { ".plt", "memcpy@plt", 0x20b10ull, 0x20b20ull, 16ull },
    { ".plt", "fcntl@plt", 0x20b20ull, 0x20b30ull, 16ull },
    { ".plt", "open@plt", 0x20b30ull, 0x20b40ull, 16ull },
    { ".plt", "mmap@plt", 0x20b40ull, 0x20b50ull, 16ull },
    { ".plt", "_Unwind_SetIP@plt", 0x20b50ull, 0x20b60ull, 16ull },
    { ".plt", "iconv_close@plt", 0x20b60ull, 0x20b70ull, 16ull },
    { ".plt", "__towlower_l@plt", 0x20b70ull, 0x20b80ull, 16ull },
    { ".plt", "time@plt", 0x20b80ull, 0x20b90ull, 16ull },
    { ".plt", "wmemset@plt", 0x20b90ull, 0x20ba0ull, 16ull },
    { ".plt", "fflush@plt", 0x20ba0ull, 0x20bb0ull, 16ull },
    { ".plt", "wcstombs@plt", 0x20bb0ull, 0x20bc0ull, 16ull },
    { ".plt", "getc@plt", 0x20bc0ull, 0x20bd0ull, 16ull },
    { ".plt.got", "__cxa_finalize@plt", 0x20bd0ull, 0x20bd8ull, 8ull },
    { ".plt.got", "dlopen@plt", 0x20bd8ull, 0x20be0ull, 8ull },
};
enum { EAC_LINKAGE_STUB_COUNT = 258 };
_Static_assert(sizeof(k_eac_linkage_stubs) / sizeof(k_eac_linkage_stubs[0]) == EAC_LINKAGE_STUB_COUNT, "linkage stub count mismatch");
