/*
 * Native return-patch target pseudocode.
 *
 * This file models the native .text offsets installed by VM return-patch
 * handlers. The VM bytecode program calls vm_native_ret_patch_tail(...);
 * this artifact makes those native targets inspectable as C-shaped helper
 * functions and a dispatcher. It is an analysis artifact, not ABI-complete
 * native decompilation.
 */
#include <stdint.h>

typedef struct VMState {
    uint8_t *ip;
    uint32_t state;
    uint32_t flags;
    uint8_t byte;
} VMState;

typedef struct VMNativeRetPatchEvent {
    uint64_t vm_ip;
    uint32_t ret0;
    uint32_t ret1;
    uint16_t stack_off;
    uint32_t flags;
} VMNativeRetPatchEvent;

static void vm_note_native_ret_patch_target(VMState *vm, const VMNativeRetPatchEvent *event, uint32_t target, const char *shape) {
    (void)vm;
    (void)event;
    (void)target;
    (void)shape;
}

static void vm_note_unknown_native_ret_patch_target(VMState *vm, const VMNativeRetPatchEvent *event, uint32_t target, uint32_t ret_slot) {
    (void)vm;
    (void)event;
    (void)target;
    (void)ret_slot;
}

static void native_retpatch_entry_175_d1445_ret1_217cb(VMState *vm, const VMNativeRetPatchEvent *event) {
    /* source=entry_175; vm_ip=0xd1445; slot=ret1; target=0x217cb */
    /* evidence: rows=2; kind=single_stack_return; seeds=frame_only_snapshot:1,full_gpr_snapshot:1; relation=native_ret_patch_text_offset_not_vm_ip:2 */
    /* coarse native shape: bounded_epilogue_ret; first_ret=0x2180c; cookie_check=yes; padding=yes; retval=return_eax_from_stack_(%rsp) */
    /* terminal direct jump: at=0x0; target=0x0 */
    /* stack loads: eax<-(%rsp), rax<-0x108(%rsp); stack zeroes: (%rsp) */
    /* native window:
     *   0x217cb: mov %dl,%dl
     *   0x217cd: mov %cl,%cl
     *   0x217cf: mov %bl,%bl
     *   0x217d1: mov %al,%al
     *   0x217d3: mov %al,%al
     *   0x217d5: mov %bl,%bl
     *   0x217d7: mov %al,%al
     *   0x217d9: mov %bl,%bl
     *   0x217db: mov %bl,%bl
     *   0x217dd: mov (%rsp),%eax
     *   0x217e0: movl $0x0,(%rsp)
     *   0x217e7: mov 0x108(%rsp),%rax
     *   0x217ef: xor %fs:0x28,%rax
     *   0x217f8: je 217ff <dlopen@plt+0xc27>
     *   0x217fa: call 206c0 <__stack_chk_fail@plt>
     *   0x217ff: add $0x118,%rsp
     *   0x21806: pop %rbx
     *   0x21807: pop %rbp
     *   0x21808: pop %r12
     *   0x2180a: pop %r13
     *   0x2180c: ret
     *   0x2180d: nop
     *   0x2180e: push %rbp
     *   0x2180f: push %rbx
     */
    vm_note_native_ret_patch_target(vm, event, 0x217cbu, "bounded_epilogue_ret");
}

static void native_retpatch_entry_175_17a420_ret1_31703(VMState *vm, const VMNativeRetPatchEvent *event) {
    /* source=entry_175; vm_ip=0x17a420; slot=ret1; target=0x31703 */
    /* evidence: rows=2; kind=single_stack_return; seeds=full_gpr_snapshot:2; relation=native_ret_patch_text_offset_not_vm_ip:2 */
    /* coarse native shape: bounded_epilogue_ret; first_ret=0x3174a; cookie_check=yes; padding=yes; retval=return_eax_from_stack_0x1c(%rsp) */
    /* terminal direct jump: at=0x0; target=0x0 */
    /* stack loads: eax<-0x1c(%rsp), rax<-0x238(%rsp); stack zeroes: 0x1c(%rsp) */
    /* native window:
     *   0x31703: mov %dl,%dl
     *   0x31705: mov %cl,%cl
     *   0x31707: mov %bl,%bl
     *   0x31709: mov %dl,%dl
     *   0x3170b: mov %dl,%dl
     *   0x3170d: mov %dl,%dl
     *   0x3170f: mov %al,%al
     *   0x31711: mov %bl,%bl
     *   0x31713: mov %al,%al
     *   0x31715: mov 0x1c(%rsp),%eax
     *   0x31719: movl $0x0,0x1c(%rsp)
     *   0x31721: mov 0x238(%rsp),%rax
     *   0x31729: xor %fs:0x28,%rax
     *   0x31732: je 31739 <dlopen@plt+0x10b61>
     *   0x31734: call 206c0 <__stack_chk_fail@plt>
     *   0x31739: add $0x248,%rsp
     *   0x31740: pop %rbx
     *   0x31741: pop %rbp
     *   0x31742: pop %r12
     *   0x31744: pop %r13
     *   0x31746: pop %r14
     *   0x31748: pop %r15
     *   0x3174a: ret
     *   0x3174b: nop
     */
    vm_note_native_ret_patch_target(vm, event, 0x31703u, "bounded_epilogue_ret");
}

static void native_retpatch_entry_175_1a6041_ret1_339bd(VMState *vm, const VMNativeRetPatchEvent *event) {
    /* source=entry_175; vm_ip=0x1a6041; slot=ret1; target=0x339bd */
    /* evidence: rows=2; kind=single_stack_return; seeds=full_gpr_snapshot:2; relation=native_ret_patch_text_offset_not_vm_ip:2 */
    /* coarse native shape: bounded_epilogue_ret; first_ret=0x339f4; cookie_check=yes; padding=yes; retval=return_value_unknown_or_preserved */
    /* terminal direct jump: at=0x0; target=0x0 */
    /* stack loads: edx<-0x14(%rsp), rsi<-0x58(%rsp); stack zeroes: 0x14(%rsp) */
    /* native window:
     *   0x339bd: mov %cl,%cl
     *   0x339bf: mov %dl,%dl
     *   0x339c1: mov %dl,%dl
     *   0x339c3: mov %cl,%cl
     *   0x339c5: mov %bl,%bl
     *   0x339c7: mov %dl,%dl
     *   0x339c9: mov %bl,%bl
     *   0x339cb: mov %bl,%bl
     *   0x339cd: mov %al,%al
     *   0x339cf: mov 0x14(%rsp),%edx
     *   0x339d3: movl $0x0,0x14(%rsp)
     *   0x339db: mov 0x58(%rsp),%rsi
     *   0x339e0: xor %fs:0x28,%rsi
     *   0x339e9: je 339f0 <dlopen@plt+0x12e18>
     *   0x339eb: call 206c0 <__stack_chk_fail@plt>
     *   0x339f0: add $0x68,%rsp
     *   0x339f4: ret
     *   0x339f5: nop
     *   0x339f6: cs nopw 0x0(%rax,%rax,1)
     *   0x33a00: push %rbx
     *   0x33a01: sub $0x50,%rsp
     *   0x33a05: mov %rdi,0x28(%rsp)
     *   0x33a0a: mov %rsi,0x20(%rsp)
     *   0x33a0f: mov %rdx,0x18(%rsp)
     */
    vm_note_native_ret_patch_target(vm, event, 0x339bdu, "bounded_epilogue_ret");
}

static void native_retpatch_entry_195_d5ebc_ret1_21e1e(VMState *vm, const VMNativeRetPatchEvent *event) {
    /* source=entry_195; vm_ip=0xd5ebc; slot=ret1; target=0x21e1e */
    /* evidence: rows=2; kind=single_stack_return; seeds=frame_only_snapshot:1,full_gpr_snapshot:1; relation=native_ret_patch_text_offset_not_vm_ip:2 */
    /* coarse native shape: bounded_epilogue_ret; first_ret=0x21e5d; cookie_check=yes; padding=yes; retval=return_al_one */
    /* terminal direct jump: at=0x0; target=0x0 */
    /* stack loads: eax<-0xc(%rsp), rcx<-0x58(%rsp); stack zeroes: 0xc(%rsp) */
    /* native window:
     *   0x21e1e: mov %dl,%dl
     *   0x21e20: mov %dl,%dl
     *   0x21e22: mov %bl,%bl
     *   0x21e24: mov %cl,%cl
     *   0x21e26: mov %bl,%bl
     *   0x21e28: mov %bl,%bl
     *   0x21e2a: mov %cl,%cl
     *   0x21e2c: mov %dl,%dl
     *   0x21e2e: mov %cl,%cl
     *   0x21e30: mov 0xc(%rsp),%eax
     *   0x21e34: movl $0x0,0xc(%rsp)
     *   0x21e3c: mov $0x1,%al
     *   0x21e3e: mov 0x58(%rsp),%rcx
     *   0x21e43: xor %fs:0x28,%rcx
     *   0x21e4c: je 21e53 <dlopen@plt+0x127b>
     *   0x21e4e: call 206c0 <__stack_chk_fail@plt>
     *   0x21e53: add $0x68,%rsp
     *   0x21e57: pop %rbx
     *   0x21e58: pop %rbp
     *   0x21e59: pop %r12
     *   0x21e5b: pop %r13
     *   0x21e5d: ret
     *   0x21e5e: push %r15
     *   0x21e60: push %r14
     */
    vm_note_native_ret_patch_target(vm, event, 0x21e1eu, "bounded_epilogue_ret");
}

static void native_retpatch_entry_195_daf39_ret1_230d4(VMState *vm, const VMNativeRetPatchEvent *event) {
    /* source=entry_195; vm_ip=0xdaf39; slot=ret1; target=0x230d4 */
    /* evidence: rows=2; kind=single_stack_return; seeds=frame_only_snapshot:1,full_gpr_snapshot:1; relation=native_ret_patch_text_offset_not_vm_ip:2 */
    /* coarse native shape: bounded_epilogue_ret; first_ret=0x23112; cookie_check=yes; padding=yes; retval=return_eax_from_stack_0x14(%rsp) */
    /* terminal direct jump: at=0x0; target=0x0 */
    /* stack loads: eax<-0x14(%rsp), rax<-0x58(%rsp); stack zeroes: 0x14(%rsp) */
    /* native window:
     *   0x230d4: mov %cl,%cl
     *   0x230d6: mov %bl,%bl
     *   0x230d8: mov %al,%al
     *   0x230da: mov %bl,%bl
     *   0x230dc: mov %dl,%dl
     *   0x230de: mov %al,%al
     *   0x230e0: mov %cl,%cl
     *   0x230e2: mov %al,%al
     *   0x230e4: mov %cl,%cl
     *   0x230e6: mov 0x14(%rsp),%eax
     *   0x230ea: movl $0x0,0x14(%rsp)
     *   0x230f2: nop
     *   0x230f3: mov 0x58(%rsp),%rax
     *   0x230f8: xor %fs:0x28,%rax
     *   0x23101: je 23108 <dlopen@plt+0x2530>
     *   0x23103: call 206c0 <__stack_chk_fail@plt>
     *   0x23108: add $0x68,%rsp
     *   0x2310c: pop %rbx
     *   0x2310d: pop %rbp
     *   0x2310e: pop %r12
     *   0x23110: pop %r13
     *   0x23112: ret
     *   0x23113: nop
     *   0x23114: sub $0x8,%rsp
     */
    vm_note_native_ret_patch_target(vm, event, 0x230d4u, "bounded_epilogue_ret");
}

static void native_retpatch_entry_195_1ed483_ret1_37af9(VMState *vm, const VMNativeRetPatchEvent *event) {
    /* source=entry_195; vm_ip=0x1ed483; slot=ret1; target=0x37af9 */
    /* evidence: rows=2; kind=single_stack_return; seeds=full_gpr_snapshot:2; relation=native_ret_patch_text_offset_not_vm_ip:2 */
    /* coarse native shape: bounded_epilogue_ret; first_ret=0x37b37; cookie_check=yes; padding=yes; retval=return_value_unknown_or_preserved */
    /* terminal direct jump: at=0x37b3c; target=0x7260a */
    /* stack loads: edx<-0x1c(%rsp), rcx<-0xa8(%rsp); stack zeroes: 0x1c(%rsp) */
    /* native window:
     *   0x37af9: mov %cl,%cl
     *   0x37afb: mov %dl,%dl
     *   0x37afd: mov %bl,%bl
     *   0x37aff: mov %dl,%dl
     *   0x37b01: mov %bl,%bl
     *   0x37b03: mov %cl,%cl
     *   0x37b05: mov %al,%al
     *   0x37b07: mov %al,%al
     *   0x37b09: mov %cl,%cl
     *   0x37b0b: mov 0x1c(%rsp),%edx
     *   0x37b0f: movl $0x0,0x1c(%rsp)
     *   0x37b17: mov 0xa8(%rsp),%rcx
     *   0x37b1f: xor %fs:0x28,%rcx
     *   0x37b28: je 37b2f <dlopen@plt+0x16f57>
     *   0x37b2a: call 206c0 <__stack_chk_fail@plt>
     *   0x37b2f: add $0xb0,%rsp
     *   0x37b36: pop %rbx
     *   0x37b37: ret
     *   0x37b38: add $0x28,%rdi
     *   0x37b3c: jmp 7260a <x@@Base+0x3a52e>
     *   0x37b41: nop
     *   0x37b42: nopl 0x0(%rax)
     *   0x37b46: cs nopw 0x0(%rax,%rax,1)
     *   0x37b50: push %rbx
     */
    vm_note_native_ret_patch_target(vm, event, 0x37af9u, "bounded_epilogue_ret");
}

static void native_retpatch_entry_195_2304b8_ret1_44d7b(VMState *vm, const VMNativeRetPatchEvent *event) {
    /* source=entry_195; vm_ip=0x2304b8; slot=ret1; target=0x44d7b */
    /* evidence: rows=2; kind=single_stack_return; seeds=frame_only_snapshot:1,full_gpr_snapshot:1; relation=native_ret_patch_text_offset_not_vm_ip:2 */
    /* coarse native shape: bounded_ret; first_ret=0x44d99; cookie_check=no; padding=yes; retval=return_eax_from_stack_-0x4(%rsp) */
    /* terminal direct jump: at=0x44da4; target=0x231586 */
    /* stack loads: eax<--0x4(%rsp); stack zeroes: -0x4(%rsp), -0x4(%rsp) */
    /* native window:
     *   0x44d7b: mov %al,%al
     *   0x44d7d: mov %bl,%bl
     *   0x44d7f: mov %al,%al
     *   0x44d81: mov %dl,%dl
     *   0x44d83: mov %dl,%dl
     *   0x44d85: mov %cl,%cl
     *   0x44d87: mov %dl,%dl
     *   0x44d89: mov %bl,%bl
     *   0x44d8b: mov %bl,%bl
     *   0x44d8d: mov -0x4(%rsp),%eax
     *   0x44d91: movl $0x0,-0x4(%rsp)
     *   0x44d99: ret
     *   0x44d9a: push %rbp
     *   0x44d9b: push %rbx
     *   0x44d9c: movl $0x0,-0x4(%rsp)
     *   0x44da4: jmp 231586 <x@@Base+0x1f94aa>
     *   0x44da9: push %rax
     *   0x44daa: xchg %bh,-0x2e55ff00(%rcx)
     *   0x44db0: (bad)
     *   0x44db1: test $0x39bd4682,%eax
     *   0x44db6: xchg %dh,%dl
     *   0x44db8: mov $0x39d386ad,%ebx
     *   0x44dbd: lock (bad)
     *   0x44dbf: udb
     */
    vm_note_native_ret_patch_target(vm, event, 0x44d7bu, "bounded_ret");
}

static void native_retpatch_entry_195_231b74_ret1_5f1c6(VMState *vm, const VMNativeRetPatchEvent *event) {
    /* source=entry_195; vm_ip=0x231b74; slot=ret1; target=0x5f1c6 */
    /* evidence: rows=2; kind=single_stack_return; seeds=full_gpr_snapshot:2; relation=native_ret_patch_text_offset_not_vm_ip:2 */
    /* coarse native shape: bounded_epilogue_ret; first_ret=0x5f1ea; cookie_check=no; padding=yes; retval=return_eax_zero */
    /* terminal direct jump: at=0x5f1f2; target=0x4eeb50 */
    /* stack loads: eax<-0xc(%rsp); stack zeroes: 0xc(%rsp) */
    /* native window:
     *   0x5f1c6: mov %dl,%dl
     *   0x5f1c8: mov %dl,%dl
     *   0x5f1ca: mov %cl,%cl
     *   0x5f1cc: mov %cl,%cl
     *   0x5f1ce: mov %cl,%cl
     *   0x5f1d0: mov %bl,%bl
     *   0x5f1d2: mov %bl,%bl
     *   0x5f1d4: mov %al,%al
     *   0x5f1d6: mov %al,%al
     *   0x5f1d8: mov 0xc(%rsp),%eax
     *   0x5f1dc: movl $0x0,0xc(%rsp)
     *   0x5f1e4: xor %eax,%eax
     *   0x5f1e6: add $0x18,%rsp
     *   0x5f1ea: ret
     *   0x5f1eb: nop
     *   0x5f1ec: ret
     *   0x5f1ed: nop
     *   0x5f1ee: xor %eax,%eax
     *   0x5f1f0: ret
     *   0x5f1f1: nop
     *   0x5f1f2: jmp 4eeb50 <ZydisGetAccessedFlags@@Base+0x170>
     *   0x5f1f7: nop
     *   0x5f1f8: mov $0x20,%esi
     *   0x5f1fd: jmp 4eeb30 <ZydisGetAccessedFlags@@Base+0x150>
     */
    vm_note_native_ret_patch_target(vm, event, 0x5f1c6u, "bounded_epilogue_ret");
}

static void native_retpatch_entry_195_333bc9_ret1_748d8(VMState *vm, const VMNativeRetPatchEvent *event) {
    /* source=entry_195; vm_ip=0x333bc9; slot=ret1; target=0x748d8 */
    /* evidence: rows=2; kind=single_stack_return; seeds=frame_only_snapshot:1,full_gpr_snapshot:1; relation=native_ret_patch_text_offset_not_vm_ip:2 */
    /* coarse native shape: bounded_epilogue_ret; first_ret=0x74918; cookie_check=yes; padding=yes; retval=return_eax_from_ebx */
    /* terminal direct jump: at=0x0; target=0x0 */
    /* stack loads: eax<-0x4(%rsp), rbx<-0xb8(%rsp); stack zeroes: 0x4(%rsp) */
    /* native window:
     *   0x748d8: mov %bl,%bl
     *   0x748da: mov %bl,%bl
     *   0x748dc: mov %bl,%bl
     *   0x748de: mov %bl,%bl
     *   0x748e0: mov %al,%al
     *   0x748e2: mov %dl,%dl
     *   0x748e4: mov %bl,%bl
     *   0x748e6: mov %al,%al
     *   0x748e8: mov %al,%al
     *   0x748ea: mov 0x4(%rsp),%eax
     *   0x748ee: movl $0x0,0x4(%rsp)
     *   0x748f6: mov %ebx,%eax
     *   0x748f8: mov 0xb8(%rsp),%rbx
     *   0x74900: xor %fs:0x28,%rbx
     *   0x74909: je 74910 <x@@Base+0x3c834>
     *   0x7490b: call 206c0 <__stack_chk_fail@plt>
     *   0x74910: add $0xc0,%rsp
     *   0x74917: pop %rbx
     *   0x74918: ret
     *   0x74919: nopl 0x0(%rax)
     *   0x74920: push %rbx
     *   0x74921: sub $0xc0,%rsp
     *   0x74928: mov %fs:0x28,%rax
     *   0x74931: mov %rax,0xb8(%rsp)
     */
    vm_note_native_ret_patch_target(vm, event, 0x748d8u, "bounded_epilogue_ret");
}

static void native_retpatch_entry_195_33d2d9_ret1_74f88(VMState *vm, const VMNativeRetPatchEvent *event) {
    /* source=entry_195; vm_ip=0x33d2d9; slot=ret1; target=0x74f88 */
    /* evidence: rows=2; kind=single_stack_return; seeds=frame_only_snapshot:1,full_gpr_snapshot:1; relation=native_ret_patch_text_offset_not_vm_ip:2 */
    /* coarse native shape: bounded_epilogue_ret; first_ret=0x74fc2; cookie_check=yes; padding=yes; retval=return_eax_from_ebx */
    /* terminal direct jump: at=0x0; target=0x0 */
    /* stack loads: eax<-0x8(%rsp), rcx<-0x58(%rsp); stack zeroes: 0x8(%rsp) */
    /* native window:
     *   0x74f88: mov %cl,%cl
     *   0x74f8a: mov %al,%al
     *   0x74f8c: mov %cl,%cl
     *   0x74f8e: mov %bl,%bl
     *   0x74f90: mov %cl,%cl
     *   0x74f92: mov %dl,%dl
     *   0x74f94: mov %al,%al
     *   0x74f96: mov %cl,%cl
     *   0x74f98: mov %al,%al
     *   0x74f9a: mov 0x8(%rsp),%eax
     *   0x74f9e: movl $0x0,0x8(%rsp)
     *   0x74fa6: mov %ebx,%eax
     *   0x74fa8: mov 0x58(%rsp),%rcx
     *   0x74fad: xor %fs:0x28,%rcx
     *   0x74fb6: je 74fbd <x@@Base+0x3cee1>
     *   0x74fb8: call 206c0 <__stack_chk_fail@plt>
     *   0x74fbd: add $0x60,%rsp
     *   0x74fc1: pop %rbx
     *   0x74fc2: ret
     *   0x74fc3: nopl (%rax)
     *   0x74fc6: cs nopw 0x0(%rax,%rax,1)
     *   0x74fd0: sub $0x38,%rsp
     *   0x74fd4: mov %rdi,0x8(%rsp)
     *   0x74fd9: mov %fs:0x28,%rax
     */
    vm_note_native_ret_patch_target(vm, event, 0x74f88u, "bounded_epilogue_ret");
}

static void native_retpatch_entry_195_3655e4_ret1_779bd(VMState *vm, const VMNativeRetPatchEvent *event) {
    /* source=entry_195; vm_ip=0x3655e4; slot=ret1; target=0x779bd */
    /* evidence: rows=2; kind=single_stack_return; seeds=full_gpr_snapshot:2; relation=native_ret_patch_text_offset_not_vm_ip:2 */
    /* coarse native shape: bounded_epilogue_ret; first_ret=0x779fa; cookie_check=yes; padding=yes; retval=return_eax_zero */
    /* terminal direct jump: at=0x0; target=0x0 */
    /* stack loads: edx<-0x8(%rsp), rsi<-0xe8(%rsp); stack zeroes: 0x8(%rsp), 0x4(%rsp) */
    /* native window:
     *   0x779bd: mov %bl,%bl
     *   0x779bf: mov %al,%al
     *   0x779c1: mov %cl,%cl
     *   0x779c3: mov %al,%al
     *   0x779c5: mov %cl,%cl
     *   0x779c7: mov %cl,%cl
     *   0x779c9: mov %cl,%cl
     *   0x779cb: mov %bl,%bl
     *   0x779cd: mov %al,%al
     *   0x779cf: mov 0x8(%rsp),%edx
     *   0x779d3: movl $0x0,0x8(%rsp)
     *   0x779db: mov 0xe8(%rsp),%rsi
     *   0x779e3: xor %fs:0x28,%rsi
     *   0x779ec: je 779f3 <x@@Base+0x3f917>
     *   0x779ee: call 206c0 <__stack_chk_fail@plt>
     *   0x779f3: add $0xf8,%rsp
     *   0x779fa: ret
     *   0x779fb: nopl 0x0(%rax,%rax,1)
     *   0x77a00: push %rbx
     *   0x77a01: sub $0x120,%rsp
     *   0x77a08: mov %fs:0x28,%rax
     *   0x77a11: mov %rax,0x118(%rsp)
     *   0x77a19: xor %eax,%eax
     *   0x77a1b: movl $0x0,0x4(%rsp)
     */
    vm_note_native_ret_patch_target(vm, event, 0x779bdu, "bounded_epilogue_ret");
}

static void native_retpatch_entry_278_12906f_ret1_6c010(VMState *vm, const VMNativeRetPatchEvent *event) {
    /* source=entry_278; vm_ip=0x12906f; slot=ret1; target=0x6c010 */
    /* evidence: rows=2; kind=double_stack_return; seeds=full_gpr_snapshot:2; relation=native_ret_patch_text_offset_not_vm_ip:2 */
    /* coarse native shape: native_trampoline_to_0x2d2cf4; first_ret=0x0; cookie_check=yes; padding=no; retval=return_eax_zero */
    /* terminal direct jump: at=0x6c03f; target=0x2d2cf4 */
    /* stack loads: -; stack zeroes: 0x1c(%rsp) */
    /* native window:
     *   0x6c010: push %r12
     *   0x6c012: push %rbp
     *   0x6c013: push %rbx
     *   0x6c014: sub $0x6a0,%rsp
     *   0x6c01b: mov %rdi,0x8(%rsp)
     *   0x6c020: mov %rsi,(%rsp)
     *   0x6c024: mov %fs:0x28,%rax
     *   0x6c02d: mov %rax,0x698(%rsp)
     *   0x6c035: xor %eax,%eax
     *   0x6c037: movl $0x0,0x1c(%rsp)
     *   0x6c03f: jmp 2d2cf4 <x@@Base+0x29ac18>
     */
    vm_note_native_ret_patch_target(vm, event, 0x6c010u, "native_trampoline_to_0x2d2cf4");
}

static void native_retpatch_entry_278_12906f_ret2_15b5b2(VMState *vm, const VMNativeRetPatchEvent *event) {
    /* source=entry_278; vm_ip=0x12906f; slot=ret2; target=0x15b5b2 */
    /* evidence: rows=2; kind=double_stack_return; seeds=full_gpr_snapshot:2; relation=native_ret_patch_text_offset_not_vm_ip:2 */
    /* coarse native shape: native_trampoline_to_0xcdc60; first_ret=0x0; cookie_check=no; padding=no; retval=return_value_unknown_or_preserved */
    /* terminal direct jump: at=0x15b6ed; target=0xcdc60 */
    /* stack loads: rbx<-(%rsp), rax<-(%rsp); stack zeroes: - */
    /* native window:
     *   0x15b5b2: pushf
     *   0x15b5b3: sub $0x8,%rsp
     *   0x15b5b7: push %rbp
     *   0x15b5b8: pop (%rsp)
     *   0x15b5bb: push %rbp
     *   0x15b5bc: pop %rbp
     *   0x15b5bd: push %rsi
     *   0x15b5be: movabs $0xa9,%rsi
     *   0x15b5c8: mov %rsi,0x8(%rsp)
     *   0x15b5cd: pop %rsi
     *   0x15b5ce: push %r11
     *   0x15b5d0: mov %r11,%r11
     *   0x15b5d3: push %r12
     *   0x15b5d5: push %rbp
     *   0x15b5d6: push %r10
     *   0x15b5d8: push %rbx
     *   0x15b5d9: movabs $0x7ef6eed0,%rbx
     *   0x15b5e3: mov %rbx,%r10
     *   0x15b5e6: pop %rbx
     *   0x15b5e7: mov %r10,%rbp
     *   0x15b5ea: pop %r10
     *   0x15b5ec: movabs $0x7f097f49,%r12
     *   0x15b5f6: sub %rbp,%r12
     *   0x15b5f9: pop %rbp
     *   0x15b5fa: mov %r12,0x8(%rsp)
     *   0x15b5ff: pop %r12
     *   0x15b601: push %rax
     *   0x15b602: mov %rsp,%rax
     *   0x15b605: add $0x8,%rax
     *   0x15b609: push %r10
     *   0x15b60b: movabs $0x8,%r10
     *   0x15b615: sub %r10,%rax
     *   0x15b618: pop %r10
     *   0x15b61a: xchg %rax,(%rsp)
     *   0x15b61e: pop %rsp
     *   0x15b61f: push $0x4a5345a3
     *   0x15b624: mov %rax,(%rsp)
     *   0x15b628: pop (%rsp)
     *   0x15b62b: sub $0x8,%rsp
     *   0x15b62f: push %rdx
     *   0x15b630: mov %rsp,%rdx
     *   0x15b633: add $0x8,%rdx
     *   0x15b637: sub $0x8,%rdx
     *   0x15b63e: xchg %rdx,(%rsp)
     *   0x15b642: pop %rsp
     *   0x15b643: push %rbx
     *   0x15b644: pop (%rsp)
     *   0x15b647: pop (%rsp)
     *   0x15b64a: push 0x20(%rsp)
     *   0x15b64e: push (%rsp)
     *   0x15b651: push (%rsp)
     *   0x15b654: pop %rax
     *   0x15b655: add $0x8,%rsp
     *   0x15b659: add $0x8,%rsp
     *   0x15b65d: push 0x10(%rsp)
     *   0x15b661: push (%rsp)
     *   0x15b664: push (%rsp)
     *   0x15b667: pop %rbx
     *   0x15b668: add $0x8,%rsp
     *   0x15b66f: add $0x8,%rsp
     *   0x15b673: sub $0x8,%rsp
     *   0x15b67a: push $0x4188edeb
     *   0x15b67f: push %rax
     *   0x15b680: pop (%rsp)
     *   0x15b683: pop (%rsp)
     *   0x15b686: pop 0x10(%rsp)
     *   0x15b68a: push $0x60379c86
     *   0x15b68f: mov %r10,(%rsp)
     *   0x15b693: mov %rbx,%r10
     *   0x15b696: push $0x209da15f
     *   0x15b69b: push %r10
     *   0x15b69d: pop (%rsp)
     *   0x15b6a0: pop 0x28(%rsp)
     *   0x15b6a4: pop %r10
     *   0x15b6a6: mov (%rsp),%rbx
     *   0x15b6aa: push %r10
     *   0x15b6ac: mov %rsp,%r10
     *   0x15b6af: add $0x8,%r10
     *   0x15b6b3: push %r8
     *   0x15b6b5: movabs $0x8,%r8
     *   0x15b6bf: add %r8,%r10
     *   0x15b6c2: pop %r8
     *   0x15b6c4: xor (%rsp),%r10
     *   0x15b6c8: xor %r10,(%rsp)
     *   0x15b6cc: xor (%rsp),%r10
     *   0x15b6d0: mov (%rsp),%rsp
     *   0x15b6d4: push (%rsp)
     *   0x15b6d7: push (%rsp)
     *   0x15b6da: mov (%rsp),%rax
     *   0x15b6de: add $0x8,%rsp
     *   0x15b6e5: add $0x8,%rsp
     *   0x15b6e9: add $0x8,%rsp
     *   0x15b6ed: jmp cdc60 <x@@Base+0x95b84>
     */
    vm_note_native_ret_patch_target(vm, event, 0x15b5b2u, "native_trampoline_to_0xcdc60");
}

static void native_retpatch_entry_299_122e3c_ret1_2d409(VMState *vm, const VMNativeRetPatchEvent *event) {
    /* source=entry_299; vm_ip=0x122e3c; slot=ret1; target=0x2d409 */
    /* evidence: rows=3; kind=single_stack_return; seeds=full_gpr_snapshot:3; relation=native_ret_patch_text_offset_not_vm_ip:3 */
    /* coarse native shape: bounded_epilogue_ret; first_ret=0x2d449; cookie_check=yes; padding=yes; retval=return_eax_from_stack_0x5c(%rsp) */
    /* terminal direct jump: at=0x0; target=0x0 */
    /* stack loads: eax<-0x5c(%rsp), rax<-0xa8(%rsp); stack zeroes: 0x5c(%rsp) */
    /* native window:
     *   0x2d409: mov %cl,%cl
     *   0x2d40b: mov %dl,%dl
     *   0x2d40d: mov %cl,%cl
     *   0x2d40f: mov %bl,%bl
     *   0x2d411: mov %cl,%cl
     *   0x2d413: mov %al,%al
     *   0x2d415: mov %bl,%bl
     *   0x2d417: mov %dl,%dl
     *   0x2d419: mov %al,%al
     *   0x2d41b: mov 0x5c(%rsp),%eax
     *   0x2d41f: movl $0x0,0x5c(%rsp)
     *   0x2d427: nop
     *   0x2d428: mov 0xa8(%rsp),%rax
     *   0x2d430: xor %fs:0x28,%rax
     *   0x2d439: je 2d440 <dlopen@plt+0xc868>
     *   0x2d43b: call 206c0 <__stack_chk_fail@plt>
     *   0x2d440: add $0xb8,%rsp
     *   0x2d447: pop %rbx
     *   0x2d448: pop %rbp
     *   0x2d449: ret
     *   0x2d44a: push %rbp
     *   0x2d44b: push %rbx
     *   0x2d44c: lea 0x22a8(%rdi),%rsi
     *   0x2d453: mov %rdi,%rbx
     */
    vm_note_native_ret_patch_target(vm, event, 0x2d409u, "bounded_epilogue_ret");
}

static void native_retpatch_entry_299_17452e_ret1_313eb(VMState *vm, const VMNativeRetPatchEvent *event) {
    /* source=entry_299; vm_ip=0x17452e; slot=ret1; target=0x313eb */
    /* evidence: rows=2; kind=single_stack_return; seeds=full_gpr_snapshot:2; relation=native_ret_patch_text_offset_not_vm_ip:2 */
    /* coarse native shape: bounded_epilogue_ret; first_ret=0x3142a; cookie_check=yes; padding=yes; retval=return_eax_from_stack_0x1c(%rsp) */
    /* terminal direct jump: at=0x0; target=0x0 */
    /* stack loads: eax<-0x1c(%rsp), rax<-0xa8(%rsp); stack zeroes: 0x1c(%rsp) */
    /* native window:
     *   0x313eb: mov %cl,%cl
     *   0x313ed: mov %bl,%bl
     *   0x313ef: mov %al,%al
     *   0x313f1: mov %dl,%dl
     *   0x313f3: mov %dl,%dl
     *   0x313f5: mov %dl,%dl
     *   0x313f7: mov %bl,%bl
     *   0x313f9: mov %dl,%dl
     *   0x313fb: mov %cl,%cl
     *   0x313fd: mov 0x1c(%rsp),%eax
     *   0x31401: movl $0x0,0x1c(%rsp)
     *   0x31409: nop
     *   0x3140a: mov 0xa8(%rsp),%rax
     *   0x31412: xor %fs:0x28,%rax
     *   0x3141b: je 31422 <dlopen@plt+0x1084a>
     *   0x3141d: call 206c0 <__stack_chk_fail@plt>
     *   0x31422: add $0xb0,%rsp
     *   0x31429: pop %rbx
     *   0x3142a: ret
     *   0x3142b: nop
     *   0x3142c: push %r15
     *   0x3142e: push %r14
     *   0x31430: push %r13
     *   0x31432: push %r12
     */
    vm_note_native_ret_patch_target(vm, event, 0x313ebu, "bounded_epilogue_ret");
}

static void native_retpatch_entry_299_33710f_ret1_74b3d(VMState *vm, const VMNativeRetPatchEvent *event) {
    /* source=entry_299; vm_ip=0x33710f; slot=ret1; target=0x74b3d */
    /* evidence: rows=2; kind=single_stack_return; seeds=frame_only_snapshot:1,full_gpr_snapshot:1; relation=native_ret_patch_text_offset_not_vm_ip:2 */
    /* coarse native shape: bounded_epilogue_ret; first_ret=0x74b7d; cookie_check=yes; padding=yes; retval=return_eax_from_ebx */
    /* terminal direct jump: at=0x0; target=0x0 */
    /* stack loads: eax<-0xc(%rsp), rcx<-0xb8(%rsp); stack zeroes: 0xc(%rsp) */
    /* native window:
     *   0x74b3d: mov %al,%al
     *   0x74b3f: mov %dl,%dl
     *   0x74b41: mov %al,%al
     *   0x74b43: mov %cl,%cl
     *   0x74b45: mov %dl,%dl
     *   0x74b47: mov %cl,%cl
     *   0x74b49: mov %bl,%bl
     *   0x74b4b: mov %cl,%cl
     *   0x74b4d: mov %al,%al
     *   0x74b4f: mov 0xc(%rsp),%eax
     *   0x74b53: movl $0x0,0xc(%rsp)
     *   0x74b5b: mov %ebx,%eax
     *   0x74b5d: mov 0xb8(%rsp),%rcx
     *   0x74b65: xor %fs:0x28,%rcx
     *   0x74b6e: je 74b75 <x@@Base+0x3ca99>
     *   0x74b70: call 206c0 <__stack_chk_fail@plt>
     *   0x74b75: add $0xc0,%rsp
     *   0x74b7c: pop %rbx
     *   0x74b7d: ret
     *   0x74b7e: xchg %ax,%ax
     *   0x74b80: push %rbx
     *   0x74b81: sub $0xa0,%rsp
     *   0x74b88: mov %fs:0x28,%rax
     *   0x74b91: mov %rax,0x98(%rsp)
     */
    vm_note_native_ret_patch_target(vm, event, 0x74b3du, "bounded_epilogue_ret");
}

static int vm_dispatch_one_native_ret_patch_target(VMState *vm, const VMNativeRetPatchEvent *event, uint32_t target, uint32_t ret_slot) {
    switch (target) {
    case 0x217cbu:
        if (event->vm_ip == 0xd1445ull && ret_slot == 1u) {
            native_retpatch_entry_175_d1445_ret1_217cb(vm, event);
            return 1;
        }
        break;
    case 0x21e1eu:
        if (event->vm_ip == 0xd5ebcull && ret_slot == 1u) {
            native_retpatch_entry_195_d5ebc_ret1_21e1e(vm, event);
            return 1;
        }
        break;
    case 0x230d4u:
        if (event->vm_ip == 0xdaf39ull && ret_slot == 1u) {
            native_retpatch_entry_195_daf39_ret1_230d4(vm, event);
            return 1;
        }
        break;
    case 0x2d409u:
        if (event->vm_ip == 0x122e3cull && ret_slot == 1u) {
            native_retpatch_entry_299_122e3c_ret1_2d409(vm, event);
            return 1;
        }
        break;
    case 0x313ebu:
        if (event->vm_ip == 0x17452eull && ret_slot == 1u) {
            native_retpatch_entry_299_17452e_ret1_313eb(vm, event);
            return 1;
        }
        break;
    case 0x31703u:
        if (event->vm_ip == 0x17a420ull && ret_slot == 1u) {
            native_retpatch_entry_175_17a420_ret1_31703(vm, event);
            return 1;
        }
        break;
    case 0x339bdu:
        if (event->vm_ip == 0x1a6041ull && ret_slot == 1u) {
            native_retpatch_entry_175_1a6041_ret1_339bd(vm, event);
            return 1;
        }
        break;
    case 0x37af9u:
        if (event->vm_ip == 0x1ed483ull && ret_slot == 1u) {
            native_retpatch_entry_195_1ed483_ret1_37af9(vm, event);
            return 1;
        }
        break;
    case 0x44d7bu:
        if (event->vm_ip == 0x2304b8ull && ret_slot == 1u) {
            native_retpatch_entry_195_2304b8_ret1_44d7b(vm, event);
            return 1;
        }
        break;
    case 0x5f1c6u:
        if (event->vm_ip == 0x231b74ull && ret_slot == 1u) {
            native_retpatch_entry_195_231b74_ret1_5f1c6(vm, event);
            return 1;
        }
        break;
    case 0x6c010u:
        if (event->vm_ip == 0x12906full && ret_slot == 1u) {
            native_retpatch_entry_278_12906f_ret1_6c010(vm, event);
            return 1;
        }
        break;
    case 0x748d8u:
        if (event->vm_ip == 0x333bc9ull && ret_slot == 1u) {
            native_retpatch_entry_195_333bc9_ret1_748d8(vm, event);
            return 1;
        }
        break;
    case 0x74b3du:
        if (event->vm_ip == 0x33710full && ret_slot == 1u) {
            native_retpatch_entry_299_33710f_ret1_74b3d(vm, event);
            return 1;
        }
        break;
    case 0x74f88u:
        if (event->vm_ip == 0x33d2d9ull && ret_slot == 1u) {
            native_retpatch_entry_195_33d2d9_ret1_74f88(vm, event);
            return 1;
        }
        break;
    case 0x779bdu:
        if (event->vm_ip == 0x3655e4ull && ret_slot == 1u) {
            native_retpatch_entry_195_3655e4_ret1_779bd(vm, event);
            return 1;
        }
        break;
    case 0x15b5b2u:
        if (event->vm_ip == 0x12906full && ret_slot == 2u) {
            native_retpatch_entry_278_12906f_ret2_15b5b2(vm, event);
            return 1;
        }
        break;
    default:
        break;
    }
    vm_note_unknown_native_ret_patch_target(vm, event, target, ret_slot);
    return 0;
}

int vm_native_ret_patch_target_dispatch(VMState *vm, uint64_t vm_ip, uint32_t ret0, uint32_t ret1, uint16_t stack_off, uint32_t flags) {
    VMNativeRetPatchEvent event = { vm_ip, ret0, ret1, stack_off, flags };
    int hits = 0;
    if (ret0 != 0u) {
        hits += vm_dispatch_one_native_ret_patch_target(vm, &event, ret0, 1u);
    }
    if (ret1 != 0u) {
        hits += vm_dispatch_one_native_ret_patch_target(vm, &event, ret1, 2u);
    }
    return hits;
}

#ifndef VM_NATIVE_RET_PATCH_TAIL_DECL_ONLY
void vm_native_ret_patch_tail(VMState *vm, uint64_t vm_ip, uint32_t ret0, uint32_t ret1, uint16_t stack_off, uint32_t flags) {
    (void)vm_native_ret_patch_target_dispatch(vm, vm_ip, ret0, ret1, stack_off, flags);
}
#endif
