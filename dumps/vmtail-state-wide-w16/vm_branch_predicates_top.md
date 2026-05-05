# VM Branch Predicate Catalog

- branch events: `68949`
- unknown branch events: `11176`
- unknown classes: `live_in_reg:6154,unknown_frame_field:3547,derived_live_in:1475`

## Top Unknown Branches

- entry `3` branch `0x78c93:je`: `128/128` unknown; class `live_in_reg:128`
  condition: `0x78c91:cmp:al, 0:low8(live_in(rax))(?livein_rax) ? 0x0(0x0):zf=None:constant,live_in_reg,unknown:128`
- entry `3` branch `0x78cd4:je`: `128/128` unknown; class `live_in_reg:128`
  condition: `0x78cd1:cmp:dl, 0:low8(live_in(rdx))(?livein_rdx) ? 0x0(0x0):zf=None:constant,live_in_reg,unknown:128`
- entry `17` branch `0x7bafa:je`: `128/128` unknown; class `live_in_reg:128`
  condition: `0x7baf6:cmp:r8b, 0:low8(live_in(r8))(?livein_r8) ? 0x0(0x0):zf=None:constant,live_in_reg,unknown:128`
- entry `18` branch `0x7bed4:je`: `128/128` unknown; class `live_in_reg:128`
  condition: `0x7bed0:cmp:dil, 0:low8(live_in(rdi))(?livein_rdi) ? 0x0(0x0):zf=None:constant,live_in_reg,unknown:128`
- entry `20` branch `0x7c649:je`: `128/128` unknown; class `live_in_reg:128`
  condition: `0x7c645:cmp:r14b, 0:low8(live_in(r14))(?livein_r14) ? 0x0(0x0):zf=None:constant,live_in_reg,unknown:128`
- entry `26` branch `0x7ddeb:jne`: `128/128` unknown; class `unknown_frame_field:128`
  condition: `0x7dde8:cmp:r8, rbx:(u16_2 + frame)(frame+0x1e8) ? (frame+0x81 + 0x1a44e4ef)(?binop):zf=None:constant,derived_unknown,frame_pointer,unknown,unknown_frame_field,vm_bytecode:128`
- entry `30` branch `0x7e868:je`: `128/128` unknown; class `live_in_reg:128`
  condition: `0x7e864:cmp:sil, 0:low8(live_in(rsi))(?livein_rsi) ? 0x0(0x0):zf=None:constant,live_in_reg,unknown:128`
- entry `30` branch `0x7e896:je`: `128/128` unknown; class `live_in_reg:128`
  condition: `0x7e893:cmp:cl, 0:low8(live_in(rcx))(?livein_rcx) ? 0x0(0x0):zf=None:constant,live_in_reg,unknown:128`
- entry `30` branch `0x7e8b1:je`: `128/128` unknown; class `unknown_frame_field:128`
  condition: `0x7e8ae:cmp:bl, 0:low8((frame+0x81 ^ 0x681ea231))(?binop) ? 0x0(0x0):zf=None:constant,derived_unknown,unknown,unknown_frame_field:128`
- entry `30` branch `0x7e913:je`: `128/128` unknown; class `live_in_reg:128`
  condition: `0x7e90f:cmp:r15b, 0:low8(live_in(r15))(?livein_r15) ? 0x0(0x0):zf=None:constant,live_in_reg,unknown:128`
- entry `33` branch `0x7f916:jne`: `128/128` unknown; class `unknown_frame_field:128`
  condition: `0x7f913:cmp:r12, r14:(u16_0 + frame)(frame+0x1e8) ? (frame+0x81 + 0x1a44e4ef)(?binop):zf=None:constant,derived_unknown,frame_pointer,unknown,unknown_frame_field,vm_bytecode:128`
- entry `33` branch `0x7f983:je`: `128/128` unknown; class `unknown_frame_field:128`
  condition: `0x7f97f:cmp:r14b, 0:low8((frame+0x81 + 0x1a44e4ef))(?binop) ? 0x0(0x0):zf=None:constant,derived_unknown,unknown,unknown_frame_field:128`
- entry `37` branch `0x806c4:je`: `128/128` unknown; class `live_in_reg:128`
  condition: `0x806c1:cmp:dl, 0:low8(live_in(rdx))(?livein_rdx) ? 0x0(0x0):zf=None:constant,live_in_reg,unknown:128`
- entry `43` branch `0x81818:je`: `128/128` unknown; class `live_in_reg:128`
  condition: `0x81815:cmp:cl, 0:low8(live_in(rcx))(?livein_rcx) ? 0x0(0x0):zf=None:constant,live_in_reg,unknown:128`
- entry `66` branch `0x85621:je`: `128/128` unknown; class `live_in_reg:128`
  condition: `0x8561d:cmp:r14b, 0:low8(live_in(r14))(?livein_r14) ? 0x0(0x0):zf=None:constant,live_in_reg,unknown:128`
- entry `79` branch `0x8860f:je`: `128/128` unknown; class `live_in_reg:128`
  condition: `0x8860b:cmp:dil, 0:low8(live_in(rdi))(?livein_rdi) ? 0x0(0x0):zf=None:constant,live_in_reg,unknown:128`
- entry `82` branch `0x8922d:je`: `128/128` unknown; class `live_in_reg:128`
  condition: `0x8922b:cmp:al, 0:low8(live_in(rax))(?livein_rax) ? 0x0(0x0):zf=None:constant,live_in_reg,unknown:128`
- entry `82` branch `0x892c8:je`: `128/128` unknown; class `live_in_reg:128`
  condition: `0x892c4:cmp:r9b, 0:low8(live_in(r9))(?livein_r9) ? 0x0(0x0):zf=None:constant,live_in_reg,unknown:128`
- entry `82` branch `0x89338:je`: `128/128` unknown; class `live_in_reg:128`
  condition: `0x89334:cmp:r9b, 0:low8(live_in(r9))(?livein_r9) ? 0x0(0x0):zf=None:constant,live_in_reg,unknown:128`
- entry `88` branch `0x8aa9c:je`: `128/128` unknown; class `live_in_reg:128`
  condition: `0x8aa99:cmp:cl, 0:low8(live_in(rcx))(?livein_rcx) ? 0x0(0x0):zf=None:constant,live_in_reg,unknown:128`
- entry `91` branch `0x8b6ee:je`: `128/128` unknown; class `live_in_reg:128`
  condition: `0x8b6ea:cmp:r15b, 0:low8(live_in(r15))(?livein_r15) ? 0x0(0x0):zf=None:constant,live_in_reg,unknown:128`
- entry `99` branch `0x8ca79:jne`: `128/128` unknown; class `unknown_frame_field:128`
  condition: `0x8ca75:cmp:r8b, 0x62:low8(frame+0xe1)(?frame_e1) ? 0x62(0x62):zf=None:constant,unknown,unknown_frame_field:128`
- entry `99` branch `0x8ca94:jne`: `128/128` unknown; class `unknown_frame_field:128`
  condition: `0x8ca90:cmp:r8b, 0x32:low8(frame+0xe1)(?frame_e1) ? 0x32(0x32):zf=None:constant,unknown,unknown_frame_field:128`
- entry `114` branch `0x90334:je`: `128/128` unknown; class `live_in_reg:128`
  condition: `0x90330:cmp:sil, 0:low8(live_in(rsi))(?livein_rsi) ? 0x0(0x0):zf=None:constant,live_in_reg,unknown:128`
- entry `123` branch `0x91a6a:je`: `128/128` unknown; class `live_in_reg:128`
  condition: `0x91a66:cmp:r15b, 0:low8(live_in(r15))(?livein_r15) ? 0x0(0x0):zf=None:constant,live_in_reg,unknown:128`
- entry `140` branch `0x94f11:je`: `128/128` unknown; class `live_in_reg:128`
  condition: `0x94f0e:cmp:dl, 0:low8(live_in(rdx))(?livein_rdx) ? 0x0(0x0):zf=None:constant,live_in_reg,unknown:128`
- entry `140` branch `0x94fab:je`: `128/128` unknown; class `unknown_frame_field:128`
  condition: `0x94fa7:cmp:r13b, 0:low8((frame+0x81 | 0x16a9ca8c))(?binop) ? 0x0(0x0):zf=None:constant,derived_unknown,unknown,unknown_frame_field:128`
- entry `146` branch `0x96428:je`: `128/128` unknown; class `live_in_reg:128`
  condition: `0x96424:cmp:r8b, 0:low8(live_in(r8))(?livein_r8) ? 0x0(0x0):zf=None:constant,live_in_reg,unknown:128`
- entry `157` branch `0x98e31:je`: `128/128` unknown; class `unknown_frame_field:128`
  condition: `0x98e2d:cmp:r14b, 0:low8((((frame + 0x0) - 0x67000032) + frame+0x71))(?binop) ? 0x0(0x0):zf=None:constant,derived_unknown,frame_pointer,unknown,unknown_frame_field:128`
- entry `161` branch `0x99779:je`: `128/128` unknown; class `unknown_frame_field:128`
  condition: `0x99775:cmp:r11b, 0:low8(frame+0x81)(?frame_81) ? 0x0(0x0):zf=None:constant,unknown,unknown_frame_field:128`
