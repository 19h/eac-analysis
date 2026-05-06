# VM Program Atlas 010 MBA Collection

- Program range: `0x11c2aa`..`0x11de59`
- Case states / blocks: `15`
- IR rows captured: `0`
- Runtime observations captured: `335` from `21` trace files
- Case-start observations with concrete pre-state: `52`

## Files

- `vm_program_atlas_010_mba_cases.tsv`: per-case static block, raw bytecode, edge, and observation summary.
- `vm_program_atlas_010_mba_observations.tsv`: all trace rows whose start is a case state or whose end enters a case state.
- `vm_program_atlas_010_mba_ir_rows.tsv`: all lifted IR rows inside the program.

## Missing For Full MBA Reduction

- Native function entry address for direct Frida attachment to the RetDec-shaped dispatcher.
- Runtime pointer value for `ctx->ip`, so alias checks against `&ctx->next` can be proven directly.
- Additional diverse observations if any MBA helper is not uniquely determined by the existing state traces.
