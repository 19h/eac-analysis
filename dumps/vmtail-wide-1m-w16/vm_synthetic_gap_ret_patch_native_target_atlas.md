# Ret-Patch Native Target Atlas

Disassembly windows for native `.text` offsets installed by sampled return-patch handlers. These offsets are native reentry targets, not VM bytecode IPs or dispatch-table slots.

Targets: `16`

## Summary

| Source | Start | Slot | Target | Rows | Section | Ret | Calls | Jumps |
| ---: | --- | --- | ---: | ---: | --- | --- | --- | --- |
| `175` | `0xd1445` | `ret1` | `0x217cb` | `2` | `.text` | `yes` | `0x206c0:1,0x21a50:1` | `0x217ff:1,0x21848:1` |
| `175` | `0x17a420` | `ret1` | `0x31703` | `2` | `.text` | `yes` | `0x206c0:1,0x48eb2b:1` | `0x31739:1` |
| `175` | `0x1a6041` | `ret1` | `0x339bd` | `2` | `.text` | `yes` | `0x206c0:1` | `0x339f0:1` |
| `195` | `0xd5ebc` | `ret1` | `0x21e1e` | `2` | `.text` | `yes` | `0x206c0:1` | `0x21e53:1` |
| `195` | `0xdaf39` | `ret1` | `0x230d4` | `2` | `.text` | `yes` | `0x206c0:1,0x23122:1` | `0x23108:1,0xe0017:1` |
| `195` | `0x1ed483` | `ret1` | `0x37af9` | `2` | `.text` | `yes` | `0x206c0:1` | `0x37b2f:1,0x7260a:1` |
| `195` | `0x2304b8` | `ret1` | `0x44d7b` | `2` | `.text` | `yes` | `-` | `0x231586:1` |
| `195` | `0x231b74` | `ret1` | `0x5f1c6` | `2` | `.text` | `yes` | `0x2508e:2` | `0x4eeb50:1,0x4eeb30:1,0x5f259:1,0x5f23d:1,0x5f221:1,0x5f24b:1` |
| `195` | `0x333bc9` | `ret1` | `0x748d8` | `2` | `.text` | `yes` | `0x206c0:1` | `0x74910:1,0x337d35:1` |
| `195` | `0x33d2d9` | `ret1` | `0x74f88` | `2` | `.text` | `yes` | `0x206c0:1` | `0x74fbd:1,0x33f109:1` |
| `195` | `0x3655e4` | `ret1` | `0x779bd` | `2` | `.text` | `yes` | `0x206c0:1` | `0x779f3:1,0x36afd2:1,0x77a5d:1` |
| `278` | `0x12906f` | `ret1` | `0x6c010` | `2` | `.text` | `no` | `-` | `0x2d2cf4:1,0x6c0be:1,0x6c064:1` |
| `278` | `0x12906f` | `ret2` | `0x15b5b2` | `2` | `.text` | `no` | `-` | `-` |
| `299` | `0x122e3c` | `ret1` | `0x2d409` | `3` | `.text` | `yes` | `0x206c0:1,0x729b6:1` | `0x2d440:1,0x2d4c2:1` |
| `299` | `0x17452e` | `ret1` | `0x313eb` | `2` | `.text` | `yes` | `0x206c0:1` | `0x31422:1,0x17bf1f:1` |
| `299` | `0x33710f` | `ret1` | `0x74b3d` | `2` | `.text` | `yes` | `0x206c0:1` | `0x74b75:1,0x33b4b6:1,0x74c0e:1` |

## Windows

### entry_175 0xd1445 ret1 -> 0x217cb

- rows: `2`; seed: `frame_only_snapshot:1,full_gpr_snapshot:1`; runs: `vmtail-fakenet-w16:1,vmtail-live-residual-targets:1`; relation: `native_ret_patch_text_offset_not_vm_ip:2`
- bytes: `88d288c988db88c088c088db88c088db`

```asm
0x217cb:mov %dl,%dl
0x217cd:mov %cl,%cl
0x217cf:mov %bl,%bl
0x217d1:mov %al,%al
0x217d3:mov %al,%al
0x217d5:mov %bl,%bl
0x217d7:mov %al,%al
0x217d9:mov %bl,%bl
0x217db:mov %bl,%bl
0x217dd:mov (%rsp),%eax
0x217e0:movl $0x0,(%rsp)
0x217e7:mov 0x108(%rsp),%rax
0x217ef:xor %fs:0x28,%rax
0x217f8:je 217ff <dlopen@plt+0xc27>
0x217fa:call 206c0 <__stack_chk_fail@plt>
0x217ff:add $0x118,%rsp
0x21806:pop %rbx
0x21807:pop %rbp
0x21808:pop %r12
0x2180a:pop %r13
0x2180c:ret
0x2180d:nop
0x2180e:push %rbp
0x2180f:push %rbx
```

### entry_175 0x17a420 ret1 -> 0x31703

- rows: `2`; seed: `full_gpr_snapshot:2`; runs: `vmtail-live-residual-targets:1,vmtail-state-residual-targets:1`; relation: `native_ret_patch_text_offset_not_vm_ip:2`
- bytes: `88d288c988db88d288d288d288c088db`

```asm
0x31703:mov %dl,%dl
0x31705:mov %cl,%cl
0x31707:mov %bl,%bl
0x31709:mov %dl,%dl
0x3170b:mov %dl,%dl
0x3170d:mov %dl,%dl
0x3170f:mov %al,%al
0x31711:mov %bl,%bl
0x31713:mov %al,%al
0x31715:mov 0x1c(%rsp),%eax
0x31719:movl $0x0,0x1c(%rsp)
0x31721:mov 0x238(%rsp),%rax
0x31729:xor %fs:0x28,%rax
0x31732:je 31739 <dlopen@plt+0x10b61>
0x31734:call 206c0 <__stack_chk_fail@plt>
0x31739:add $0x248,%rsp
0x31740:pop %rbx
0x31741:pop %rbp
0x31742:pop %r12
0x31744:pop %r13
0x31746:pop %r14
0x31748:pop %r15
0x3174a:ret
0x3174b:nop
```

### entry_175 0x1a6041 ret1 -> 0x339bd

- rows: `2`; seed: `full_gpr_snapshot:2`; runs: `vmtail-live-residual-targets:1,vmtail-state-residual-targets:1`; relation: `native_ret_patch_text_offset_not_vm_ip:2`
- bytes: `88c988d288d288c988db88d288db88db`

```asm
0x339bd:mov %cl,%cl
0x339bf:mov %dl,%dl
0x339c1:mov %dl,%dl
0x339c3:mov %cl,%cl
0x339c5:mov %bl,%bl
0x339c7:mov %dl,%dl
0x339c9:mov %bl,%bl
0x339cb:mov %bl,%bl
0x339cd:mov %al,%al
0x339cf:mov 0x14(%rsp),%edx
0x339d3:movl $0x0,0x14(%rsp)
0x339db:mov 0x58(%rsp),%rsi
0x339e0:xor %fs:0x28,%rsi
0x339e9:je 339f0 <dlopen@plt+0x12e18>
0x339eb:call 206c0 <__stack_chk_fail@plt>
0x339f0:add $0x68,%rsp
0x339f4:ret
0x339f5:nop
0x339f6:cs nopw 0x0(%rax,%rax,1)
0x33a00:push %rbx
0x33a01:sub $0x50,%rsp
0x33a05:mov %rdi,0x28(%rsp)
0x33a0a:mov %rsi,0x20(%rsp)
0x33a0f:mov %rdx,0x18(%rsp)
```

### entry_195 0xd5ebc ret1 -> 0x21e1e

- rows: `2`; seed: `frame_only_snapshot:1,full_gpr_snapshot:1`; runs: `vmtail-fakenet-w16:1,vmtail-live-residual-targets:1`; relation: `native_ret_patch_text_offset_not_vm_ip:2`
- bytes: `88d288d288db88c988db88db88c988d2`

```asm
0x21e1e:mov %dl,%dl
0x21e20:mov %dl,%dl
0x21e22:mov %bl,%bl
0x21e24:mov %cl,%cl
0x21e26:mov %bl,%bl
0x21e28:mov %bl,%bl
0x21e2a:mov %cl,%cl
0x21e2c:mov %dl,%dl
0x21e2e:mov %cl,%cl
0x21e30:mov 0xc(%rsp),%eax
0x21e34:movl $0x0,0xc(%rsp)
0x21e3c:mov $0x1,%al
0x21e3e:mov 0x58(%rsp),%rcx
0x21e43:xor %fs:0x28,%rcx
0x21e4c:je 21e53 <dlopen@plt+0x127b>
0x21e4e:call 206c0 <__stack_chk_fail@plt>
0x21e53:add $0x68,%rsp
0x21e57:pop %rbx
0x21e58:pop %rbp
0x21e59:pop %r12
0x21e5b:pop %r13
0x21e5d:ret
0x21e5e:push %r15
0x21e60:push %r14
```

### entry_195 0xdaf39 ret1 -> 0x230d4

- rows: `2`; seed: `frame_only_snapshot:1,full_gpr_snapshot:1`; runs: `vmtail-fakenet-w16:1,vmtail-live-residual-targets:1`; relation: `native_ret_patch_text_offset_not_vm_ip:2`
- bytes: `88c988db88c088db88d288c088c988c0`

```asm
0x230d4:mov %cl,%cl
0x230d6:mov %bl,%bl
0x230d8:mov %al,%al
0x230da:mov %bl,%bl
0x230dc:mov %dl,%dl
0x230de:mov %al,%al
0x230e0:mov %cl,%cl
0x230e2:mov %al,%al
0x230e4:mov %cl,%cl
0x230e6:mov 0x14(%rsp),%eax
0x230ea:movl $0x0,0x14(%rsp)
0x230f2:nop
0x230f3:mov 0x58(%rsp),%rax
0x230f8:xor %fs:0x28,%rax
0x23101:je 23108 <dlopen@plt+0x2530>
0x23103:call 206c0 <__stack_chk_fail@plt>
0x23108:add $0x68,%rsp
0x2310c:pop %rbx
0x2310d:pop %rbp
0x2310e:pop %r12
0x23110:pop %r13
0x23112:ret
0x23113:nop
0x23114:sub $0x8,%rsp
```

### entry_195 0x1ed483 ret1 -> 0x37af9

- rows: `2`; seed: `full_gpr_snapshot:2`; runs: `vmtail-live-residual-targets:1,vmtail-state-residual-targets:1`; relation: `native_ret_patch_text_offset_not_vm_ip:2`
- bytes: `88c988d288db88d288db88c988c088c0`

```asm
0x37af9:mov %cl,%cl
0x37afb:mov %dl,%dl
0x37afd:mov %bl,%bl
0x37aff:mov %dl,%dl
0x37b01:mov %bl,%bl
0x37b03:mov %cl,%cl
0x37b05:mov %al,%al
0x37b07:mov %al,%al
0x37b09:mov %cl,%cl
0x37b0b:mov 0x1c(%rsp),%edx
0x37b0f:movl $0x0,0x1c(%rsp)
0x37b17:mov 0xa8(%rsp),%rcx
0x37b1f:xor %fs:0x28,%rcx
0x37b28:je 37b2f <dlopen@plt+0x16f57>
0x37b2a:call 206c0 <__stack_chk_fail@plt>
0x37b2f:add $0xb0,%rsp
0x37b36:pop %rbx
0x37b37:ret
0x37b38:add $0x28,%rdi
0x37b3c:jmp 7260a <x@@Base+0x3a52e>
0x37b41:nop
0x37b42:nopl 0x0(%rax)
0x37b46:cs nopw 0x0(%rax,%rax,1)
0x37b50:push %rbx
```

### entry_195 0x2304b8 ret1 -> 0x44d7b

- rows: `2`; seed: `frame_only_snapshot:1,full_gpr_snapshot:1`; runs: `vmtail-fakenet-w16:1,vmtail-live-residual-targets:1`; relation: `native_ret_patch_text_offset_not_vm_ip:2`
- bytes: `88c088db88c088d288d288c988d288db`

```asm
0x44d7b:mov %al,%al
0x44d7d:mov %bl,%bl
0x44d7f:mov %al,%al
0x44d81:mov %dl,%dl
0x44d83:mov %dl,%dl
0x44d85:mov %cl,%cl
0x44d87:mov %dl,%dl
0x44d89:mov %bl,%bl
0x44d8b:mov %bl,%bl
0x44d8d:mov -0x4(%rsp),%eax
0x44d91:movl $0x0,-0x4(%rsp)
0x44d99:ret
0x44d9a:push %rbp
0x44d9b:push %rbx
0x44d9c:movl $0x0,-0x4(%rsp)
0x44da4:jmp 231586 <x@@Base+0x1f94aa>
0x44da9:push %rax
0x44daa:xchg %bh,-0x2e55ff00(%rcx)
0x44db0:(bad)
0x44db1:test $0x39bd4682,%eax
0x44db6:xchg %dh,%dl
0x44db8:mov $0x39d386ad,%ebx
0x44dbd:lock (bad)
0x44dbf:udb
```

### entry_195 0x231b74 ret1 -> 0x5f1c6

- rows: `2`; seed: `full_gpr_snapshot:2`; runs: `vmtail-live-residual-targets:1,vmtail-state-residual-targets:1`; relation: `native_ret_patch_text_offset_not_vm_ip:2`
- bytes: `88d288d288c988c988c988db88db88c0`

```asm
0x5f1c6:mov %dl,%dl
0x5f1c8:mov %dl,%dl
0x5f1ca:mov %cl,%cl
0x5f1cc:mov %cl,%cl
0x5f1ce:mov %cl,%cl
0x5f1d0:mov %bl,%bl
0x5f1d2:mov %bl,%bl
0x5f1d4:mov %al,%al
0x5f1d6:mov %al,%al
0x5f1d8:mov 0xc(%rsp),%eax
0x5f1dc:movl $0x0,0xc(%rsp)
0x5f1e4:xor %eax,%eax
0x5f1e6:add $0x18,%rsp
0x5f1ea:ret
0x5f1eb:nop
0x5f1ec:ret
0x5f1ed:nop
0x5f1ee:xor %eax,%eax
0x5f1f0:ret
0x5f1f1:nop
0x5f1f2:jmp 4eeb50 <ZydisGetAccessedFlags@@Base+0x170>
0x5f1f7:nop
0x5f1f8:mov $0x20,%esi
0x5f1fd:jmp 4eeb30 <ZydisGetAccessedFlags@@Base+0x150>
```

### entry_195 0x333bc9 ret1 -> 0x748d8

- rows: `2`; seed: `frame_only_snapshot:1,full_gpr_snapshot:1`; runs: `vmtail-fakenet-w16:1,vmtail-live-residual-targets:1`; relation: `native_ret_patch_text_offset_not_vm_ip:2`
- bytes: `88db88db88db88db88c088d288db88c0`

```asm
0x748d8:mov %bl,%bl
0x748da:mov %bl,%bl
0x748dc:mov %bl,%bl
0x748de:mov %bl,%bl
0x748e0:mov %al,%al
0x748e2:mov %dl,%dl
0x748e4:mov %bl,%bl
0x748e6:mov %al,%al
0x748e8:mov %al,%al
0x748ea:mov 0x4(%rsp),%eax
0x748ee:movl $0x0,0x4(%rsp)
0x748f6:mov %ebx,%eax
0x748f8:mov 0xb8(%rsp),%rbx
0x74900:xor %fs:0x28,%rbx
0x74909:je 74910 <x@@Base+0x3c834>
0x7490b:call 206c0 <__stack_chk_fail@plt>
0x74910:add $0xc0,%rsp
0x74917:pop %rbx
0x74918:ret
0x74919:nopl 0x0(%rax)
0x74920:push %rbx
0x74921:sub $0xc0,%rsp
0x74928:mov %fs:0x28,%rax
0x74931:mov %rax,0xb8(%rsp)
```

### entry_195 0x33d2d9 ret1 -> 0x74f88

- rows: `2`; seed: `frame_only_snapshot:1,full_gpr_snapshot:1`; runs: `vmtail-fakenet-w16:1,vmtail-live-residual-targets:1`; relation: `native_ret_patch_text_offset_not_vm_ip:2`
- bytes: `88c988c088c988db88c988d288c088c9`

```asm
0x74f88:mov %cl,%cl
0x74f8a:mov %al,%al
0x74f8c:mov %cl,%cl
0x74f8e:mov %bl,%bl
0x74f90:mov %cl,%cl
0x74f92:mov %dl,%dl
0x74f94:mov %al,%al
0x74f96:mov %cl,%cl
0x74f98:mov %al,%al
0x74f9a:mov 0x8(%rsp),%eax
0x74f9e:movl $0x0,0x8(%rsp)
0x74fa6:mov %ebx,%eax
0x74fa8:mov 0x58(%rsp),%rcx
0x74fad:xor %fs:0x28,%rcx
0x74fb6:je 74fbd <x@@Base+0x3cee1>
0x74fb8:call 206c0 <__stack_chk_fail@plt>
0x74fbd:add $0x60,%rsp
0x74fc1:pop %rbx
0x74fc2:ret
0x74fc3:nopl (%rax)
0x74fc6:cs nopw 0x0(%rax,%rax,1)
0x74fd0:sub $0x38,%rsp
0x74fd4:mov %rdi,0x8(%rsp)
0x74fd9:mov %fs:0x28,%rax
```

### entry_195 0x3655e4 ret1 -> 0x779bd

- rows: `2`; seed: `full_gpr_snapshot:2`; runs: `vmtail-live-residual-targets:1,vmtail-state-residual-targets:1`; relation: `native_ret_patch_text_offset_not_vm_ip:2`
- bytes: `88db88c088c988c088c988c988c988db`

```asm
0x779bd:mov %bl,%bl
0x779bf:mov %al,%al
0x779c1:mov %cl,%cl
0x779c3:mov %al,%al
0x779c5:mov %cl,%cl
0x779c7:mov %cl,%cl
0x779c9:mov %cl,%cl
0x779cb:mov %bl,%bl
0x779cd:mov %al,%al
0x779cf:mov 0x8(%rsp),%edx
0x779d3:movl $0x0,0x8(%rsp)
0x779db:mov 0xe8(%rsp),%rsi
0x779e3:xor %fs:0x28,%rsi
0x779ec:je 779f3 <x@@Base+0x3f917>
0x779ee:call 206c0 <__stack_chk_fail@plt>
0x779f3:add $0xf8,%rsp
0x779fa:ret
0x779fb:nopl 0x0(%rax,%rax,1)
0x77a00:push %rbx
0x77a01:sub $0x120,%rsp
0x77a08:mov %fs:0x28,%rax
0x77a11:mov %rax,0x118(%rsp)
0x77a19:xor %eax,%eax
0x77a1b:movl $0x0,0x4(%rsp)
```

### entry_278 0x12906f ret1 -> 0x6c010

- rows: `2`; seed: `full_gpr_snapshot:2`; runs: `vmtail-live-residual-targets:1,vmtail-state-residual-targets:1`; relation: `native_ret_patch_text_offset_not_vm_ip:2`
- bytes: `415455534881eca006000048897c2408`

```asm
0x6c010:push %r12
0x6c012:push %rbp
0x6c013:push %rbx
0x6c014:sub $0x6a0,%rsp
0x6c01b:mov %rdi,0x8(%rsp)
0x6c020:mov %rsi,(%rsp)
0x6c024:mov %fs:0x28,%rax
0x6c02d:mov %rax,0x698(%rsp)
0x6c035:xor %eax,%eax
0x6c037:movl $0x0,0x1c(%rsp)
0x6c03f:jmp 2d2cf4 <x@@Base+0x29ac18>
0x6c044:push %rax
0x6c045:mov $0xd1,%bl
0x6c047:es add %dh,(%rbx)
0x6c04a:rex.RX testl $0x3f770000,(%rcx)
0x6c051:pop %rbp
0x6c052:fildl (%rax)
0x6c054:cld
0x6c055:movsxd 0x6(%rcx),%esi
0x6c058:repz xlat (%rbx)
0x6c05a:movsl (%rsi),(%rdi)
0x6c05b:fists -0x72(%rsi)
0x6c05e:fst %st(1)
0x6c060:(bad)
```

### entry_278 0x12906f ret2 -> 0x15b5b2

- rows: `2`; seed: `full_gpr_snapshot:2`; runs: `vmtail-live-residual-targets:1,vmtail-state-residual-targets:1`; relation: `native_ret_patch_text_offset_not_vm_ip:2`
- bytes: `9c4883ec08558f0424555d5648bea900`

```asm
0x15b5b2:pushf
0x15b5b3:sub $0x8,%rsp
0x15b5b7:push %rbp
0x15b5b8:pop (%rsp)
0x15b5bb:push %rbp
0x15b5bc:pop %rbp
0x15b5bd:push %rsi
0x15b5be:movabs $0xa9,%rsi
0x15b5c8:mov %rsi,0x8(%rsp)
0x15b5cd:pop %rsi
0x15b5ce:push %r11
0x15b5d0:mov %r11,%r11
0x15b5d3:push %r12
0x15b5d5:push %rbp
0x15b5d6:push %r10
0x15b5d8:push %rbx
0x15b5d9:movabs $0x7ef6eed0,%rbx
0x15b5e3:mov %rbx,%r10
0x15b5e6:pop %rbx
0x15b5e7:mov %r10,%rbp
0x15b5ea:pop %r10
0x15b5ec:movabs $0x7f097f49,%r12
0x15b5f6:sub %rbp,%r12
0x15b5f9:pop %rbp
```

### entry_299 0x122e3c ret1 -> 0x2d409

- rows: `3`; seed: `full_gpr_snapshot:3`; runs: `vmtail-residual-122e3c-context:1,vmtail-residual-122e3c-context-postcall:1,vmtail-state-residual-targets:1`; relation: `native_ret_patch_text_offset_not_vm_ip:3`
- bytes: `88c988d288c988db88c988c088db88d2`

```asm
0x2d409:mov %cl,%cl
0x2d40b:mov %dl,%dl
0x2d40d:mov %cl,%cl
0x2d40f:mov %bl,%bl
0x2d411:mov %cl,%cl
0x2d413:mov %al,%al
0x2d415:mov %bl,%bl
0x2d417:mov %dl,%dl
0x2d419:mov %al,%al
0x2d41b:mov 0x5c(%rsp),%eax
0x2d41f:movl $0x0,0x5c(%rsp)
0x2d427:nop
0x2d428:mov 0xa8(%rsp),%rax
0x2d430:xor %fs:0x28,%rax
0x2d439:je 2d440 <dlopen@plt+0xc868>
0x2d43b:call 206c0 <__stack_chk_fail@plt>
0x2d440:add $0xb8,%rsp
0x2d447:pop %rbx
0x2d448:pop %rbp
0x2d449:ret
0x2d44a:push %rbp
0x2d44b:push %rbx
0x2d44c:lea 0x22a8(%rdi),%rsi
0x2d453:mov %rdi,%rbx
```

### entry_299 0x17452e ret1 -> 0x313eb

- rows: `2`; seed: `full_gpr_snapshot:2`; runs: `vmtail-live-residual-targets:1,vmtail-state-residual-targets:1`; relation: `native_ret_patch_text_offset_not_vm_ip:2`
- bytes: `88c988db88c088d288d288d288db88d2`

```asm
0x313eb:mov %cl,%cl
0x313ed:mov %bl,%bl
0x313ef:mov %al,%al
0x313f1:mov %dl,%dl
0x313f3:mov %dl,%dl
0x313f5:mov %dl,%dl
0x313f7:mov %bl,%bl
0x313f9:mov %dl,%dl
0x313fb:mov %cl,%cl
0x313fd:mov 0x1c(%rsp),%eax
0x31401:movl $0x0,0x1c(%rsp)
0x31409:nop
0x3140a:mov 0xa8(%rsp),%rax
0x31412:xor %fs:0x28,%rax
0x3141b:je 31422 <dlopen@plt+0x1084a>
0x3141d:call 206c0 <__stack_chk_fail@plt>
0x31422:add $0xb0,%rsp
0x31429:pop %rbx
0x3142a:ret
0x3142b:nop
0x3142c:push %r15
0x3142e:push %r14
0x31430:push %r13
0x31432:push %r12
```

### entry_299 0x33710f ret1 -> 0x74b3d

- rows: `2`; seed: `frame_only_snapshot:1,full_gpr_snapshot:1`; runs: `vmtail-fakenet-w16:1,vmtail-live-residual-targets:1`; relation: `native_ret_patch_text_offset_not_vm_ip:2`
- bytes: `88c088d288c088c988d288c988db88c9`

```asm
0x74b3d:mov %al,%al
0x74b3f:mov %dl,%dl
0x74b41:mov %al,%al
0x74b43:mov %cl,%cl
0x74b45:mov %dl,%dl
0x74b47:mov %cl,%cl
0x74b49:mov %bl,%bl
0x74b4b:mov %cl,%cl
0x74b4d:mov %al,%al
0x74b4f:mov 0xc(%rsp),%eax
0x74b53:movl $0x0,0xc(%rsp)
0x74b5b:mov %ebx,%eax
0x74b5d:mov 0xb8(%rsp),%rcx
0x74b65:xor %fs:0x28,%rcx
0x74b6e:je 74b75 <x@@Base+0x3ca99>
0x74b70:call 206c0 <__stack_chk_fail@plt>
0x74b75:add $0xc0,%rsp
0x74b7c:pop %rbx
0x74b7d:ret
0x74b7e:xchg %ax,%ax
0x74b80:push %rbx
0x74b81:sub $0xa0,%rsp
0x74b88:mov %fs:0x28,%rax
0x74b91:mov %rax,0x98(%rsp)
```

