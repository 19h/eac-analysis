# EAC ELF Reconstruction Notes

Target: `eac.elf`

SHA-256: `0b44ad59697129534189efdb75cde2b96245f831438e9f6a53cb7725f190d739`

## Current Artifacts

- `driver.c`: dlopen/dlsym harness for exported `x`, now also dumps the EAC memory maps, the output buffer, and the global sidecar context. Optional `EAC_DISPATCH_TRACE=1` patches selected dispatcher jumps to `int3` and logs the resolved target from the signal context.
- `trace_preload.c`: libc/network/process tracer with EAC-relative caller offsets. Network and process spawning are denied by default unless `EAC_TRACE_ALLOW_NETWORK=1` or `EAC_TRACE_ALLOW_SPAWN=1`.
- `recon_summary.py`: summarizes a dump directory, trace call sites, dispatcher edges, executable pointer fixups, memory-vs-file mutations, and context pointers.
- `vm_tail_scan.py`: ranks observed dispatch-table targets and suggests extra `EAC_VMTAIL_SITES=0xsite:reg,...` hooks using Capstone.
- `vm_trace_graph.py`: converts a traced run into VM edge TSV form; default output is site-based, and `--sequential` emits dynamic per-frame transitions from ordered trace events.
- `vm_handler_table.py`: merges dispatch-table metadata, dynamic trace profiles, and static Capstone handler features into one TSV.
- `vm_bytecode_blocks.py`: reduces direct executed VM instruction rows into contiguous exact bytecode coverage blocks.
- `vm_bytecode_recover.py`: reconstructs exact VM byte values from instruction rows, verifies byte consistency, and emits segment hashes plus a unique instruction table.
- `vm_bytecode_cfg.py`: builds a bytecode block graph from instruction rows and recovered exact bytecode segments.
- `vm_isa_summary.py`: clusters exact recovered VM instruction signatures by source handler, fixed byte length, target distribution, and operand byte/word layout.
- `vm_semantic_templates.py`: merges ISA schemas with static handler features into per-handler rows and ranked semantic templates.
- `vm_handler_skeleton.py`: extracts normalized frame/IP/table access skeletons from handler disassembly and groups full, dispatch-tail, or canonical decode signatures.
- `dumps/local-blocked-log/run.stderr`: blocked-network trace from the harness.
- `dumps/local-blocked-log/postcall_*` and `postsleep_*`: in-memory EAC map/context/output dumps.
- `dumps/dispatch-trap/run.stderr`: targeted dispatcher trace with fast harness exit.
- `dumps/vmtail-allstatic/run.stderr`: dispatcher trace plus all statically found dispatch-table tail sites.
- `dumps/vmtail-allstatic/vm_table.tsv`: one row per dispatch-table entry with static tail candidate and observed hit counts.
- `dumps/vmtail-allstatic/vm_edges.tsv`: recovered VM edge list from the all-static trace.
- `dumps/vmtail-allstatic/vm_seq_edges.tsv`: dynamic sequential VM edge list from the same trace.
- `dumps/vmtail-allstatic/vm_source_profile.tsv`: per-source handler profile of outgoing sites, targets, VM IP deltas, and `ip_w0..ip_w5` words.
- `dumps/vmtail-allstatic/vm_handler_table.tsv`: combined static/dynamic handler table for all 360 dispatch entries.
- `dumps/vmtail-wide/*`: repeat of the all-static trace using a wider `0x1200` static tail-site scan, covering long-tail handlers that the earlier `0x800` scan missed.
- `dumps/vmtail-wide/vm_instruction_trace.tsv`: direct executed VM instruction rows with source handler, start/end VM IP, target handler, logged words, consumed bytes, and byte exactness.
- `dumps/vmtail-wide/vm_bytecode_blocks.tsv`: contiguous exact bytecode coverage ranges derived from `vm_instruction_trace.tsv`.
- `dumps/vmtail-wide/vm_bytecode_segments.tsv`: conflict-checked exact byte segments with SHA-256 hashes and byte previews.
- `dumps/vmtail-wide/vm_instruction_unique.tsv`: deduplicated exact instruction rows collapsed by `(start_vm_ip, source_entry, delta, bytes)`.
- `dumps/vmtail-wide/vm_bytecode_block_edges.tsv`: aggregate control-flow edges between recovered bytecode segments.
- `dumps/vmtail-wide-1m/*`: longer `0x1200` wide-tail run. The harness reached about 767k VM tail events before fast exit and expanded exact bytecode recovery from `0x24948` to `0x41d31` bytes with no byte conflicts.
- `dumps/vmtail-wide-1m/vm_isa_handlers.tsv`: exact-covered handler schema summary.
- `dumps/vmtail-wide-1m/vm_isa_patterns.tsv`: exact-covered `(source handler, byte length)` operand-layout summary.
- `dumps/vmtail-wide-1m/vm_isa_families.tsv`: operand-layout families grouped by byte length, shape, and constant byte positions.
- `dumps/vmtail-wide-1m/vm_isa_missing_exact.tsv`: dynamic source handlers that still have no exact positive byte schema.
- `dumps/vmtail-wide-1m/vm_handler_semantics.tsv`: one semantic row per dispatch-table entry, combining observation class, ISA shape, frame/IP/table access patterns, and dynamic target profile.
- `dumps/vmtail-wide-1m/vm_semantic_templates.tsv`: ranked semantic templates grouped by observation class, byte shape, constant positions, static IP reads, frame writes, and dispatch-table access.
- `dumps/vmtail-wide-1m/vm_handler_skeletons.tsv`: one row per dispatch-table entry with full normalized frame/IP/table skeleton, final dispatch suffix, and canonical decode signature.
- `dumps/vmtail-wide-1m/vm_handler_decode_groups.tsv`: observed handlers grouped by canonical decode signature.
- `dumps/vmtail-wide-1m/vm_handler_dispatch_groups.tsv`: observed handlers grouped by final dispatch-tail skeleton.
- `dumps/vmtail-wide-1m/vm_handler_skeleton_groups.tsv`: observed handlers grouped by full normalized handler skeleton.

Reproduction:

```sh
make
mkdir -p dumps/local-blocked-log
env EAC_DUMP_DIR=dumps/local-blocked-log \
  EAC_LAUNCHERDIR=/tmp/fake_launcher \
  LD_PRELOAD=./trace_preload.so \
  ./driver ./eac.elf 1 x 0x800 1 \
  >dumps/local-blocked-log/run.stdout \
  2>dumps/local-blocked-log/run.stderr
python3 recon_summary.py dumps/local-blocked-log --eac eac.elf
```

Dispatcher trace:

```sh
make
mkdir -p dumps/dispatch-trap
timeout 30s env EAC_FAST_EXIT=1 \
  EAC_DISPATCH_TRACE=1 \
  EAC_DISPATCH_LIMIT=4096 \
  EAC_LAUNCHERDIR=/tmp/fake_launcher \
  LD_PRELOAD=./trace_preload.so \
  ./driver ./eac.elf 1 x 0x800 0 \
  >dumps/dispatch-trap/run.stdout \
  2>dumps/dispatch-trap/run.stderr
python3 recon_summary.py dumps/dispatch-trap --eac eac.elf
```

Dispatcher plus recursive direct VM tail trace:

```sh
make
mkdir -p dumps/vmtail-recursive
timeout 30s env EAC_FAST_EXIT=1 \
  EAC_DISPATCH_TRACE=1 \
  EAC_DISPATCH_DETAIL=1 \
  EAC_VMTAIL_TRACE=1 \
  EAC_DISPATCH_LIMIT=4096 \
  EAC_VMTAIL_LIMIT=30000 \
  EAC_DUMP_DIR=dumps/vmtail-recursive \
  EAC_LAUNCHERDIR=/tmp/fake_launcher \
  LD_PRELOAD=./trace_preload.so \
  ./driver ./eac.elf 1 x 0x800 0 \
  >dumps/vmtail-recursive/run.stdout \
  2>dumps/vmtail-recursive/run.stderr
python3 recon_summary.py dumps/vmtail-recursive --eac eac.elf
python3 vm_tail_scan.py dumps/vmtail-recursive --eac eac.elf --limit 24
```

Extra tail hooks can be supplied without recompiling:

```sh
EAC_VMTAIL_SITES='0xb0458:r15,0xbf126:rbx,0xbf886:r15' ...
```

All-table static tail trace:

```sh
make
mkdir -p dumps/vmtail-allstatic
SPEC=$(python3 vm_tail_scan.py --all-table --eac eac.elf --window 0x800 --limit 0 \
  | sed -n 's/^EAC_VMTAIL_SITES=//p')
timeout 30s env EAC_FAST_EXIT=1 \
  EAC_DISPATCH_TRACE=1 \
  EAC_DISPATCH_DETAIL=1 \
  EAC_VMTAIL_TRACE=1 \
  EAC_DISPATCH_LIMIT=4096 \
  EAC_VMTAIL_LIMIT=250000 \
  EAC_VMTAIL_SITES="$SPEC" \
  EAC_DUMP_DIR=dumps/vmtail-allstatic \
  EAC_LAUNCHERDIR=/tmp/fake_launcher \
  LD_PRELOAD=./trace_preload.so \
  ./driver ./eac.elf 1 x 0x800 0 \
  >dumps/vmtail-allstatic/run.stdout \
  2>dumps/vmtail-allstatic/run.stderr
python3 recon_summary.py dumps/vmtail-allstatic --eac eac.elf
python3 vm_tail_scan.py dumps/vmtail-allstatic --eac eac.elf --window 0x800 --table-report \
  >dumps/vmtail-allstatic/vm_table.tsv
python3 vm_trace_graph.py dumps/vmtail-allstatic --eac eac.elf \
  >dumps/vmtail-allstatic/vm_edges.tsv
python3 vm_trace_graph.py dumps/vmtail-allstatic --eac eac.elf --sequential \
  >dumps/vmtail-allstatic/vm_seq_edges.tsv
python3 vm_trace_graph.py dumps/vmtail-allstatic --eac eac.elf --source-profile \
  >dumps/vmtail-allstatic/vm_source_profile.tsv
python3 vm_handler_table.py dumps/vmtail-allstatic --eac eac.elf \
  >dumps/vmtail-allstatic/vm_handler_table.tsv
```

Wide-tail rerun:

```sh
make
mkdir -p dumps/vmtail-wide
SPEC=$(python3 vm_tail_scan.py --all-table --eac eac.elf --window 0x1200 --limit 0 \
  | sed -n 's/^EAC_VMTAIL_SITES=//p')
timeout 30s env EAC_FAST_EXIT=1 \
  EAC_DISPATCH_TRACE=1 \
  EAC_DISPATCH_DETAIL=1 \
  EAC_VMTAIL_TRACE=1 \
  EAC_DISPATCH_LIMIT=4096 \
  EAC_VMTAIL_LIMIT=250000 \
  EAC_VMTAIL_SITES="$SPEC" \
  EAC_DUMP_DIR=dumps/vmtail-wide \
  EAC_LAUNCHERDIR=/tmp/fake_launcher \
  LD_PRELOAD=./trace_preload.so \
  ./driver ./eac.elf 1 x 0x800 0 \
  >dumps/vmtail-wide/run.stdout \
  2>dumps/vmtail-wide/run.stderr
python3 vm_tail_scan.py dumps/vmtail-wide --eac eac.elf --window 0x1200 --table-report \
  >dumps/vmtail-wide/vm_table.tsv
python3 vm_trace_graph.py dumps/vmtail-wide --eac eac.elf --window 0x1200 --sequential \
  >dumps/vmtail-wide/vm_seq_edges.tsv
python3 vm_trace_graph.py dumps/vmtail-wide --eac eac.elf --window 0x1200 --source-profile \
  >dumps/vmtail-wide/vm_source_profile.tsv
python3 vm_trace_graph.py dumps/vmtail-wide --eac eac.elf --window 0x1200 --instruction-trace \
  >dumps/vmtail-wide/vm_instruction_trace.tsv
python3 vm_handler_table.py dumps/vmtail-wide --eac eac.elf --window 0x1200 \
  >dumps/vmtail-wide/vm_handler_table.tsv
python3 vm_bytecode_blocks.py dumps/vmtail-wide/vm_instruction_trace.tsv \
  >dumps/vmtail-wide/vm_bytecode_blocks.tsv
python3 vm_bytecode_recover.py dumps/vmtail-wide/vm_instruction_trace.tsv \
  >dumps/vmtail-wide/vm_bytecode_segments.tsv
python3 vm_bytecode_recover.py dumps/vmtail-wide/vm_instruction_trace.tsv --instructions \
  >dumps/vmtail-wide/vm_instruction_unique.tsv
python3 vm_bytecode_cfg.py dumps/vmtail-wide/vm_instruction_trace.tsv \
  --segments dumps/vmtail-wide/vm_bytecode_segments.tsv \
  >dumps/vmtail-wide/vm_bytecode_block_edges.tsv
```

Long wide-tail rerun:

```sh
make
mkdir -p dumps/vmtail-wide-1m
SPEC=$(python3 vm_tail_scan.py --all-table --eac eac.elf --window 0x1200 --limit 0 \
  | sed -n 's/^EAC_VMTAIL_SITES=//p')
timeout 60s env EAC_FAST_EXIT=1 \
  EAC_DISPATCH_TRACE=1 \
  EAC_DISPATCH_DETAIL=1 \
  EAC_VMTAIL_TRACE=1 \
  EAC_DISPATCH_LIMIT=4096 \
  EAC_VMTAIL_LIMIT=1000000 \
  EAC_VMTAIL_SITES="$SPEC" \
  EAC_DUMP_DIR=dumps/vmtail-wide-1m \
  EAC_LAUNCHERDIR=/tmp/fake_launcher \
  LD_PRELOAD=./trace_preload.so \
  ./driver ./eac.elf 1 x 0x800 0 \
  >dumps/vmtail-wide-1m/run.stdout \
  2>dumps/vmtail-wide-1m/run.stderr
python3 recon_summary.py dumps/vmtail-wide-1m --eac eac.elf \
  >dumps/vmtail-wide-1m/recon_summary.txt
python3 vm_tail_scan.py dumps/vmtail-wide-1m --eac eac.elf --window 0x1200 --table-report \
  >dumps/vmtail-wide-1m/vm_table.tsv
python3 vm_trace_graph.py dumps/vmtail-wide-1m --eac eac.elf --window 0x1200 \
  >dumps/vmtail-wide-1m/vm_edges.tsv
python3 vm_trace_graph.py dumps/vmtail-wide-1m --eac eac.elf --window 0x1200 --sequential \
  >dumps/vmtail-wide-1m/vm_seq_edges.tsv
python3 vm_trace_graph.py dumps/vmtail-wide-1m --eac eac.elf --window 0x1200 --source-profile \
  >dumps/vmtail-wide-1m/vm_source_profile.tsv
python3 vm_trace_graph.py dumps/vmtail-wide-1m --eac eac.elf --window 0x1200 --instruction-trace \
  >dumps/vmtail-wide-1m/vm_instruction_trace.tsv
python3 vm_handler_table.py dumps/vmtail-wide-1m --eac eac.elf --window 0x1200 \
  >dumps/vmtail-wide-1m/vm_handler_table.tsv
python3 vm_bytecode_blocks.py dumps/vmtail-wide-1m/vm_instruction_trace.tsv \
  >dumps/vmtail-wide-1m/vm_bytecode_blocks.tsv
python3 vm_bytecode_recover.py dumps/vmtail-wide-1m/vm_instruction_trace.tsv \
  >dumps/vmtail-wide-1m/vm_bytecode_segments.tsv
python3 vm_bytecode_recover.py dumps/vmtail-wide-1m/vm_instruction_trace.tsv --instructions \
  >dumps/vmtail-wide-1m/vm_instruction_unique.tsv
python3 vm_bytecode_cfg.py dumps/vmtail-wide-1m/vm_instruction_trace.tsv \
  --segments dumps/vmtail-wide-1m/vm_bytecode_segments.tsv \
  >dumps/vmtail-wide-1m/vm_bytecode_block_edges.tsv
python3 vm_isa_summary.py dumps/vmtail-wide-1m/vm_instruction_unique.tsv \
  >dumps/vmtail-wide-1m/vm_isa_handlers.tsv
python3 vm_isa_summary.py dumps/vmtail-wide-1m/vm_instruction_unique.tsv --patterns \
  >dumps/vmtail-wide-1m/vm_isa_patterns.tsv
python3 vm_isa_summary.py dumps/vmtail-wide-1m/vm_instruction_unique.tsv --families \
  >dumps/vmtail-wide-1m/vm_isa_families.tsv
python3 vm_isa_summary.py dumps/vmtail-wide-1m/vm_instruction_unique.tsv \
  --source-profile dumps/vmtail-wide-1m/vm_source_profile.tsv \
  --missing-exact \
  >dumps/vmtail-wide-1m/vm_isa_missing_exact.tsv
python3 vm_semantic_templates.py dumps/vmtail-wide-1m \
  >dumps/vmtail-wide-1m/vm_semantic_templates.tsv
python3 vm_semantic_templates.py dumps/vmtail-wide-1m --per-handler \
  >dumps/vmtail-wide-1m/vm_handler_semantics.tsv
python3 vm_handler_skeleton.py dumps/vmtail-wide-1m \
  >dumps/vmtail-wide-1m/vm_handler_skeletons.tsv
python3 vm_handler_skeleton.py dumps/vmtail-wide-1m --groups --group-key decode \
  >dumps/vmtail-wide-1m/vm_handler_decode_groups.tsv
python3 vm_handler_skeleton.py dumps/vmtail-wide-1m --groups --group-key dispatch \
  >dumps/vmtail-wide-1m/vm_handler_dispatch_groups.tsv
python3 vm_handler_skeleton.py dumps/vmtail-wide-1m --groups --group-key skeleton \
  >dumps/vmtail-wide-1m/vm_handler_skeleton_groups.tsv
```

## ELF Overview

- ELF64 x86-64 shared object, stripped, PIE, NX stack, partial RELRO.
- Entry point: `0x20c00`.
- Only meaningful product export: `x` at `0x380dc`, size `234`.
- Embedded libraries/symbol surfaces include Zydis, BLAKE3, mbedTLS/PolarSSL strings, and libstdc++ support code.
- `.text` is large (`0x562a50`) and the first load segment is mapped RWE by the ELF headers. At runtime the loader maps the main code page range as `rwxp`.
- `.init_array` has 22 constructors from `0x21700`, `0x20dca`, ... `0x215b0`.

## Exported Entry `x`

`x(void *buf, uint32_t len)` is a small ABI gate and bootstrap:

- rejects `len <= 0x13`;
- requires `*(u32 *)(buf+0) <= 2`;
- requires `*(u32 *)(buf+4) == len`;
- requires `*(u32 *)(buf+8) == 1`;
- one-shot guards on global byte `base+0x84cdd0`;
- rejects `*(u32 *)(buf+0x14) > 2`;
- allocates `0x23f0`;
- calls constructor `0x2cafa`;
- stores the allocated context at global `base+0x84cdd8` and `base+0x84cd20`;
- chooses output pointer from `*(u64 *)(buf+0x0c)`, else fallback `base+0x84cde0`;
- calls main setup `0x2ceb0(ctx, mode2, game, product, sandbox, launcher, extra, out)`.

Synthetic input fields used by the harness:

- `buf+0x1c`: game name
- `buf+0x5c`: product name
- `buf+0x9c`: sandbox name
- `buf+0xdc`: launcher path/name
- `buf+0x2dc`: extra string

Observed return: `0`; `out[0] = 1`.

## Context Object

The primary sidecar object is `0x23f0` bytes.

Important offsets from `postcall_ctx`:

- `ctx+0x0000 = eac+0x842bb0`: primary vtable
- `ctx+0x0008 = eac+0x83c430`
- `ctx+0x0020 = eac+0x83c918`
- `ctx+0x09e0 = eac+0x842d48`
- `ctx+0x1648 = eac+0x842f60`
- `ctx+0x1a78 = eac+0x842f60`
- `ctx+0x1c30 = eac+0x842f60`
- `ctx+0x1dd0 = eac+0x842f60`
- `ctx+0x2080 = eac+0x83c4c0`
- `ctx+0x2090 = eac+0x842f60`
- `ctx+0x2238` points to an inline/small heap vector area near `ctx+0x2268`
- `ctx+0x2388` and `ctx+0x2390` point near `ctx+0x2378`

Vtable `eac+0x842bb0` relocates to:

- `0x2ccd6`: destructor body
- `0x2ce82`: destructor plus free
- `0x2d520`
- `0x3331c`

Constructor `0x2cafa` initializes subobjects at:

- `ctx+0x1a50`
- `ctx+0x1a78`
- `ctx+0x1c30`
- `ctx+0x1dd0`
- `ctx+0x1f78`
- `ctx+0x2080`
- `ctx+0x22a8`
- `ctx+0x2330`

## Runtime Behavior From Blocked Trace

Call-site catalog from `dumps/local-blocked-log/run.stderr`:

- `0x72b70`: creates three worker threads.
- Thread start is `0x729fe`, a thunk that invokes `arg->vtable[4](arg)`.
- `0x6b74f`: DNS via `getaddrinfo`.
- `0x6b7f7`: fallback `host -4 ...` via `popen`.
- `0x1a689b` and `0x1a6a09`: `mprotect` page 0 RW then R.
- `0x4c000b`: reads `/dev/urandom`.
- `0x3376ac`, `0x334271`, `0x33ae27`, `0x33d5f1`: self process comm/cmdline/status/maps.
- `0x58b24`: `/proc/mounts`, `/proc/modules`, and later `/proc/self/maps`.
- `0x36a519`, `0x36e0cf`: DMI board/product.
- `0x3722d8`: `/proc/bus/pci/devices`.
- `0x30d25c`: hardware and OS identity files under `/sys/class/dmi`, `/sys/class/block`, `/proc/cpuinfo`, `/etc/machine-id`, `/etc/hostname`.
- `0x2ef009`, `0x2efed1`, `0x2f0707`: enumerate `/dev/disk/by-id`, `readlink`, `realpath`.
- `0x2cb09b`: `lshw -C display`.
- `0x2f9551`: `/proc/net/route`.
- `0x305069`, `0x305d88`, `0x306735`: enumerate `/sys/class/net`.
- `0x350c8d`, `0x161ea8`: checks `LD_PRELOAD`.
- `0x35284b`, `0x161468`: checks `LD_AUDIT`.
- `0x162bce`: checks `_EAC_DEV`.
- `0x3909b`, `0x2042b6`: locates and hashes/reads `/proc/self/exe` (`driver` in this harness).
- `0x208abf`, `0x220c4d`, `0x221670`, `0x22d2ca`: process enumeration over `/proc/<pid>/{exe,comm,cmdline}`.

Network endpoints attempted with network denied:

- `api.epicgames.dev:443`
- `datarouter.ol.epicgames.com:443`

## Runtime Mutation / Anti-Dump

`postcall` memory differs from the file in ways that are not only dynamic relocations:

- page 0 (`off 0x0`) differs at bytes `0x1-0x4` and `0x19-0x1e`;
- after `mprotect(base, 0x1000, RW)` and `mprotect(base, 0x1000, R)`, the ELF magic is corrupted from `7f 45 4c 46` to `7f c5 ac e6`;
- ELF header entry bytes at `0x19-0x1e` are rewritten to a loaded pointer-like value;
- executable map `off 0x1000` has 1573 byte differences postcall;
- an executable-section zero slab starting around file offset `0x7836c` is filled with live pointers/state. Dispatch tracing shows the active obfuscation/VM frame is `base+0x7836d`, exactly inside this slab. There are no matching ELF relocation entries for those offsets;
- executable file range `0xc3718-0xc4258` is a 360-entry pointer table. The file stores raw offsets, while runtime memory stores `base + offset`. No ELF relocation entries exist for the sampled slots, so this is a custom/runtime fixup region inside `.text`;
- `postcall` to `postsleep` changes continue in the same slab and in writable data, indicating worker-thread state updates.

This is a practical anti-dump indicator: dumpers relying on loaded ELF headers will see a deliberately damaged header, while static `.text` also contains runtime-filled data islands.

## Obfuscation Shape

Many call sites are not normal compiler output. They use:

- `pushf` prologues;
- redundant pushes/pops and `xchg [rsp], reg`;
- stack-pointer arithmetic through memory;
- immediate arithmetic to synthesize small constants or target offsets;
- jumps into shared dispatcher-like blocks, especially `0xc823b`, `0xcdc60`, and related ranges;
- inline high-entropy byte spans that break linear disassembly between real basic blocks.

Dynamic dispatcher recovery from `EAC_DISPATCH_TRACE=1`:

- both dispatcher sites currently sampled, `0xc80b9` and `0xcdac7`, use the same fixed-up table base `0xc3718`;
- table byte index is held in `rbx` after the dispatcher's `shl rbx, 3`, so entry index is `idx / 8`;
- detailed tracing confirms `*(u64 *)(frame+0x10f) == base+0xc3718` on every sampled central dispatch and VM tail;
- all 3385 sampled dispatches used frame `base+0x7836d`;
- the frame field at `+0x0a` behaves like an encoded instruction pointer. It points into jump-over bytecode/data islands inside `.text`; top observed offsets include `0x310ca5`, `0x310ef0`, `0x311163`, `0x3113a5`, `0x3115e7`, and `0x311829`;
- observed edges in the synthetic blocked-network path:

| Count | Site | Table Entry | Slot | Target |
| ---: | --- | ---: | --- | --- |
| 1747 | `0xcdac7` | 169 | `0xc3c60` | `0x9af18` |
| 1562 | `0xcdac7` | 310 | `0xc40c8` | `0xb8556` |
| 36 | `0xc80b9` | 310 | `0xc40c8` | `0xb8556` |
| 31 | `0xc80b9` | 169 | `0xc3c60` | `0x9af18` |
| 5 | `0xc80b9` | 86 | `0xc39c8` | `0x8a37f` |
| 2 | `0xc80b9` | 42 | `0xc3868` | `0x815ea` |
| 1 | `0xcdac7` | 323 | `0xc4130` | `0xbb6e6` |
| 1 | `0xcdac7` | 42 | `0xc3868` | `0x815ea` |

The dispatch table at file offset `0xc3718` has 360 unique raw file-offset targets. The loader/custom runtime fixes all 360 qwords to `base + target`. Initial high-frequency entries from the central dispatcher and first tail layer:

| Entry | Slot | Target |
| ---: | --- | --- |
| 42 | `0xc3868` | `0x815ea` |
| 86 | `0xc39c8` | `0x8a37f` |
| 165 | `0xc3c40` | `0x9a24c` |
| 169 | `0xc3c60` | `0x9af18` |
| 171 | `0xc3c70` | `0x9b4b3` |
| 310 | `0xc40c8` | `0xb8556` |
| 323 | `0xc4130` | `0xbb6e6` |
| 354 | `0xc4228` | `0xc2241` |

`EAC_VMTAIL_TRACE=1` additionally patches selected register tail jumps in the observed handler blocks:

- `0x8173b`: `jmp rax`
- `0x8a49b`: `jmp r8`
- `0x9a46b`: `jmp r9`
- `0x9b0c5`: `jmp r10`
- `0x9b687`: `jmp r14`
- `0xb86f5`: `jmp r13`
- `0xbb8a8`: `jmp rax`
- `0xbba0c`: `jmp r12`
- `0xc240d`: `jmp rdx`

Additional sites can be injected with `EAC_VMTAIL_SITES=0xsite:reg,...`; the driver patches those sites and emulates the original register jump from the signal context. `vm_tail_scan.py` generates these strings from prior traces.

Static table scanning found 348 of the 360 dispatch-table entries have an apparent `jmp reg` tail within `0x800` bytes of the table target. These collapse to 300 unique candidate tail sites. The 12 table entries without a candidate under that window are:

`32`, `69`, `75`, `85`, `101`, `102`, `210`, `241`, `246`, `284`, `316`, `334`.

The first tail pass showed entries 165, 171, and 354 as hot second-layer handlers. Adding their tail sites expanded the current synthetic run to 10834 direct VM tail jumps, all using frame `base+0x7836d` and table `base+0xc3718`. Tail targets were concentrated on:

| Count | Tail Target Entry | Target |
| ---: | ---: | --- |
| 1689 | 171 | `0x9b4b3` |
| 1345 | 354 | `0xc2241` |
| 1309 | 165 | `0x9a24c` |
| 528 | 268 | `0xb0007` |
| 469 | 337 | `0xbec0e` |
| 449 | 340 | `0xbf435` |
| 415 | 114 | `0x90319` |
| 413 | 157 | `0x98a9a` |
| 412 | 333 | `0xbd8af` |

The auto-expanded pass in `dumps/vmtail-auto3` used three waves of scanner-suggested sites. It hit the configured `EAC_VMTAIL_LIMIT=160000`, observed 172 of the 360 dispatch-table entries, and expanded VM instruction-pointer coverage to 31149 unique offsets. Current bands include `0xd0ac0-0xdaf35`, `0x11ac5e-0x11db08`, `0x18b66f-0x18c463`, `0x22fe2d-0x231210`, `0x249468-0x24bd26`, `0x26cd75-0x26f073`, `0x30e876-0x31f2ad`, and `0x33170b-0x34355b`.

The all-static pass in `dumps/vmtail-allstatic` hit `EAC_VMTAIL_LIMIT=250000`, observed 192 table entries through tail targets and 195 table entries including central dispatch, and expanded VM instruction-pointer coverage to 39738 unique offsets. All 250000 tail targets resolved to known dispatch-table entries, so the static candidate tail hooks are coherent for this path.

The recovered static-site VM graph from that run has 4263 distinct edge rows in `vm_edges.tsv` over the synthetic blocked-network path.

The sequential VM graph in `vm_seq_edges.tsv` is built from consecutive trace events per VM frame and stops at the tail logging cap by default. A tail event is treated as a direct edge only when its tail site statically belongs to the previous target handler; central-dispatch events are kept as central-dispatch edges. This avoids falsely treating helper returns or uninstrumented intermediate paths as direct VM branches.

The older `dumps/vmtail-allstatic` graph skipped 842 unhooked-source candidates and 588 indirect-site candidates. It kept 4274 direct transition rows over 249120 observed branch events: 4241 tail rows, 33 central-dispatch rows, 181 source entries, 195 target entries, and 4262 distinct source-target entry pairs.

The wider `dumps/vmtail-wide` rerun used an all-table `0x1200` tail scan. It removed the unhooked-source gap and skipped only 782 indirect-site candidates. Its direct graph has 4296 transition rows over 249764 observed branch events: 4263 tail rows, 33 central-dispatch rows, 191 source entries, 195 target entries, and 4284 distinct source-target entry pairs.

The longer `dumps/vmtail-wide-1m` rerun used the same `0x1200` all-table scan with `EAC_VMTAIL_LIMIT=1000000`. The harness fast-exited after the final VMTAIL counter reached 767345; 767334 VMTAIL records were complete line-start records, and 3385 central-dispatch records were present. After direct-edge filtering it skipped 1605 indirect-site candidates and kept 4795 transition rows over 769113 branch events: 4756 tail rows, 39 central-dispatch rows, 202 source entries, 205 target entries, and 4782 distinct source-target entry pairs.

Top sequential VM transitions in the long run:

| Count | Source Entry | Site | Target Entry | Target | VM IP Delta |
| ---: | ---: | --- | ---: | --- | --- |
| 2146 | 28 | `0x7e7ca` | 347 | `0xc088d` | `+0x3` |
| 2091 | 64 | `0x8536e` | 18 | `0x7be9b` | `+0x4` |
| 2041 | 114 | `0x90893` | 66 | `0x855ff` | `+0x4` |
| 1928 | 347 | `0xc0d7b` | 18 | `0x7be9b` | `+0x4` |
| 1894 | 189 | `0x9eac9` | 18 | `0x7be9b` | `+0x4` |
| 1787 | 337 | `0xbf126` | 297 | `0xb64d7` | `+0x4` |
| 1754 | 307 | `0xb837a` | 114 | `0x90319` | `+0x3` |
| 1747 | 340 | `0xbf886` | 307 | `0xb8064` | `+0x4` |
| 1729 | 18 | `0x7c308` | 114 | `0x90319` | `+0x3` |
| 1702 | 340 | `0xbf886` | 28 | `0x7e390` | `+0x4` |

The source profile in `vm_source_profile.tsv` covers 191 source handlers in the wide run. The longer `vmtail-wide-1m` profile covers 202 source handlers. The hottest long-run sources are strongly site-stable:

| Events | Source Entry | Source Target | Outgoing Site | VM IP Delta |
| ---: | ---: | --- | --- | --- |
| 28055 | 258 | `0xadf2c` | `0xae32f` | `+0x4` |
| 26605 | 28 | `0x7e390` | `0x7e7ca` | `+0x3` |
| 26531 | 337 | `0xbec0e` | `0xbf126` | `+0x4` |
| 26110 | 340 | `0xbf435` | `0xbf886` | `+0x4` |
| 25445 | 18 | `0x7be9b` | `0x7c308` | `+0x3` |
| 25296 | 114 | `0x90319` | `0x90893` | `+0x4` |
| 25104 | 189 | `0x9e7af` | `0x9eac9` | `+0x4` |
| 24294 | 347 | `0xc088d` | `0xc0d7b` | `+0x4` |
| 24092 | 307 | `0xb8064` | `0xb837a` | `+0x3` |
| 23676 | 64 | `0x85059` | `0x8536e` | `+0x4` |

The combined handler table in `vm_handler_table.tsv` now provides one row for every dispatch-table entry. It includes static span length, conditional-branch/jump/call/return counts, frame-relative reads/writes, inferred bytecode-pointer reads, inferred dispatch-table reads, and the dynamic source profile where available. The static dataflow is intentionally lightweight: it tracks registers derived from `rbp`, the VM bytecode pointer loaded from `frame+0x0a`, and the dispatch table loaded from `frame+0x10f`.

Current handler-table facts:

- 360 dispatch entries are present.
- The `0x800`/`0x900` scan missed 12 long-tail entries; the `0x1200` wide scan finds a candidate for every dispatch entry.
- 11 of those previously missed entries were observed as targets in the wide runs; entry 32 (`0x7efa8`) remains unobserved even in `vmtail-wide-1m`.
- Entry 69 (`0x85f24`) is still special. The wide linear scan associates it with entry 70's tail site after a `ret`, so its dynamic edges should be treated as helper-return/continuation behavior rather than a normal direct tail. In `vmtail-wide-1m` it was reached 23 times as a target but only contributes 2 direct source events after filtering; it reads richer bytecode operands through `frame+0x0a` and writes `frame+0x1dc`.
- All 360 wide handler-table rows now have an inferred dispatch-table read, but entry 69's read belongs to the post-`ret` linear span and should not be interpreted as its own direct tail path.
- Only entries 264 (`0xaf4cf`) and 265 (`0xaf57f`) contain direct `call` instructions in the scanned span. Entry 264 was observed and fans into central-dispatch targets 169, 171, 310, 354, and 165.

Weighted by source events in the long run, dominant VM IP deltas are:

| Events | Source Rows | VM IP Delta |
| ---: | ---: | --- |
| 463785 | 2224 | `+0x4` |
| 182851 | 733 | `+0x3` |
| 51701 | 785 | `+0x5` |
| 45208 | 613 | `+0x2` |
| 20473 | 362 | `+0x6` |
| 3275 | 28 | `+0xa` |
| 255 | 1 | `-0x6d` |
| 255 | 1 | `-0x3c4` |
| 230 | 7 | `-0x40` |
| 182 | 2 | `+0x2d` |

The executed-instruction listing in `vm_instruction_trace.tsv` has 769113 direct rows from the long wide trace. Each row attributes a branch to the previous direct source handler and records the bytecode pointer before and after that handler. The `bytes` column is exact when the positive delta fits in the logged `ip_w*` window, otherwise it is marked as a prefix or backedge sample.

Instruction-trace coverage:

- 202 source handlers.
- 71510 unique start VM IP offsets.
- 64450 distinct `(source_entry, delta, bytes)` signatures.
- 764018 rows have exact consumed bytes.
- 1157 rows are backedge samples.
- 3938 rows are positive jumps longer than the logged byte window and keep only a prefix sample.

The exact bytecode block reducer in `vm_bytecode_blocks.tsv` merges exact positive instruction intervals. It produced 557 contiguous blocks covering `0x41d31` bytes of VM bytecode and 764018 exact instruction events. The largest event bands are:

| Events | Band | Blocks | Exact Bytes |
| ---: | --- | ---: | ---: |
| 501973 | `0x310000` | 85 | `0xa465` |
| 87549 | `0x230000` | 9 | `0x12e6` |
| 47699 | `0x370000` | 21 | `0x1bdb` |
| 27989 | `0x220000` | 2 | `0x2d3` |
| 27164 | `0x360000` | 94 | `0xb46d` |
| 24580 | `0x330000` | 79 | `0xa946` |
| 10341 | `0x340000` | 39 | `0x51f2` |
| 6160 | `0x260000` | 10 | `0x16ca` |
| 5859 | `0x170000` | 39 | `0x561e` |
| 5414 | `0x240000` | 16 | `0x27f0` |

The bytecode recovery pass in `vm_bytecode_segments.tsv` inserts every exact byte slice into a sparse VM byte map and checks that repeated observations agree byte-for-byte. Current result:

- 764018 exact rows inserted.
- 557 recovered byte segments.
- `0x41d31` total exact bytes.
- 0 conflicting byte offsets.
- 0 conflicting byte observations.

`vm_instruction_unique.tsv` collapses the exact trace to 71240 unique executed instruction signatures. The most repeated signatures are still the loop body beginning at `0x22ff44`, where many adjacent rows execute exactly 256 times. Example rows:

| Count | Start VM IP | Source Entry | Delta | Bytes | Target Entry |
| ---: | --- | ---: | --- | --- | ---: |
| 256 | `0x22ff44` | 171 | `+0x2` | `4201` | 322 |
| 256 | `0x22ff46` | 322 | `+0x4` | `13005796` | 157 |
| 256 | `0x22ff4a` | 157 | `+0x4` | `7b8b6800` | 258 |
| 256 | `0x22ff4e` | 258 | `+0x4` | `f3d5ce87` | 215 |
| 256 | `0x22ff52` | 215 | `+0x3` | `6809c8` | 301 |

`vm_isa_summary.py` clusters those exact signatures into handler-level schemas. Because it only accepts exact positive byte slices, it deliberately excludes backedges and prefix-only long jumps. Current exact-covered result:

- 171 source handlers have exact positive byte schemas.
- 171 `(source handler, byte length)` patterns are present, so every exact-covered source handler is fixed-width in this run.
- 31 dynamic source handlers, accounting for 5095 direct events, remain outside the exact schema set because they only appeared through backedges, long positive jumps with prefix samples, or other non-exact rows.

Exact fixed-width distribution:

| Events | Source Handlers | VM IP Delta |
| ---: | ---: | --- |
| 463785 | 56 | `+0x4` |
| 182851 | 13 | `+0x3` |
| 51701 | 79 | `+0x5` |
| 45208 | 11 | `+0x2` |
| 20473 | 12 | `+0x6` |

The family view groups those 171 exact handler schemas into 61 operand-layout families covering all 764018 exact events. The shape alphabet is event-weighted per byte position: `C` = constant, `E` = small enum, `V` = high-cardinality variable.

Top exact ISA families:

| Events | Entries | Delta | Shape | Constant Bytes |
| ---: | ---: | --- | --- | --- |
| 259786 | 30 | `+0x4` | `VVVV` | none |
| 160324 | 7 | `+0x3` | `VVV` | none |
| 97027 | 11 | `+0x4` | `VVCC` | `b2=0xe8,b3=0x01` |
| 52996 | 3 | `+0x4` | `VVVE` | none |
| 50537 | 6 | `+0x4` | `CCVV` | `b0=0xe8,b1=0x01` |
| 38978 | 8 | `+0x2` | `VV` | none |
| 21755 | 2 | `+0x3` | `VVE` | none |
| 11882 | 6 | `+0x6` | `VVVVVV` | none |
| 10566 | 3 | `+0x5` | `CCCVV` | `b0=0x00,b1=0x3d,b2=0x01` |
| 6647 | 7 | `+0x5` | `VVVCC` | `b3=0x3d,b4=0x01` |

High-weight operand-layout patterns show repeated constants inside otherwise encoded operands:

| Events | Entry | Target | Delta | Shape | Stable Bytes |
| ---: | ---: | --- | --- | --- | --- |
| 12091 | 184 | `0x9d694` | `+0x4` | `VVCC` | `b2=0xe8,b3=0x01` |
| 11741 | 174 | `0x9bd8f` | `+0x4` | `VVCC` | `b2=0xe8,b3=0x01` |
| 10873 | 305 | `0xb78b0` | `+0x4` | `VVCC` | `b2=0xe8,b3=0x01` |
| 10597 | 123 | `0x91a59` | `+0x4` | `VVCC` | `b2=0xe8,b3=0x01` |
| 10132 | 176 | `0x9c10b` | `+0x4` | `CCVV` | `b0=0xe8,b1=0x01` |
| 9920 | 315 | `0xb9451` | `+0x4` | `CCVV` | `b0=0xe8,b1=0x01` |
| 4380 | 301 | `0xb708d` | `+0x5` | `CCCVV` | `b0=0x00,b1=0x3d,b2=0x01` |
| 3575 | 220 | `0xa522e` | `+0x5` | `CCCVV` | `b0=0x00,b1=0x3d,b2=0x01` |
| 2509 | 167 | `0x9a8d2` | `+0x6` | `CCCCVV` | `b0=0xe8,b1=0x01,b2=0x3d,b3=0x01` |

Two central-dispatch targets now have compact enum/constant schemas in exact coverage:

| Events | Entry | Target | Delta | Shape | Operand Layout |
| ---: | ---: | --- | --- | --- | --- |
| 1796 | 169 | `0x9af18` | `+0x4` | `EECC` | `b0={0xab,0x62,0xa5}; b1={0x00,0x01}; b2=0xe8; b3=0x01` |
| 1614 | 310 | `0xb8556` | `+0x4` | `CCEE` | `b0=0xe8; b1=0x01; b2={0xa5,0x62,0xab}; b3={0x00,0x01}` |

`vm_semantic_templates.tsv` adds static handler behavior to the ISA families. Its template key is:

`observation class + VM IP delta + byte shape + constant byte positions + static IP reads + frame writes + dispatch-table reads + call/return counts`.

Current semantic-template coverage:

- 360 per-handler semantic rows.
- 147 ranked semantic templates.
- 120 exact templates covering 171 source handlers and 764018 exact events.
- 10 `central_or_long` templates covering 3379 non-exact events.
- 7 `sampled_backedge` templates covering 1405 non-exact events.
- 10 `sampled_long_or_sparse` templates covering 311 non-exact events.
- 155 dispatch entries remain unobserved on this synthetic path.

Top exact semantic templates:

| Events | Entries | Delta | Shape | Constants | IP Reads | Frame Writes |
| ---: | ---: | --- | --- | --- | --- | --- |
| 77027 | 3 | `+0x4` | `VVVV` | none | `+0x2/2,+0x0/2` | `0x23,0x170,0x0,0x16f,0xa` |
| 71689 | 3 | `+0x3` | `VVV` | none | `+0x2/1,+0x0/2` | `0x23,0x170,0x194,0xa` |
| 63472 | 8 | `+0x4` | `VVCC` | `b2=0xe8,b3=0x01` | `+0x2/2,+0x0/2` | `0x23,0x170,0xa` |
| 50825 | 2 | `+0x4` | `VVVV` | none | `+0x2/2,+0x0/2` | `0x170,0x23,0x0,0x16f,0xa` |
| 44729 | 2 | `+0x3` | `VVV` | none | `+0x0/1,+0x1/2` | `0x170,0x23,0x194,0xa` |
| 43906 | 2 | `+0x3` | `VVV` | none | `+0x2/1,+0x0/2` | `0x170,0x23,0x194,0xa` |
| 41290 | 5 | `+0x4` | `CCVV` | `b0=0xe8,b1=0x01` | `+0x0/2,+0x2/2` | `0x170,0x23,0xa` |
| 39919 | 5 | `+0x4` | `VVVV` | none | `+0x0/2,+0x2/2` | `0x170,0x23,0x81,0xa` |

`vm_handler_skeleton.py` keeps ordered access skeletons instead of just sets. The full skeleton is still intentionally noisy, so the most useful grouping is the canonical decode signature, which keeps only:

`IPADV*`, `RIP*`, `RF/WF+0x170`, `TDYN`, `RTdyn`, and the final `WF+0xa` VM-IP write.

Current decode-signature coverage:

- 360 per-handler skeleton rows.
- 186 observed decode groups covering 202 observed source handlers and 769113 direct events.
- 156 exact decode groups covering 171 exact handlers and 764018 exact events.
- 10 `central_or_long` decode groups covering 3379 events.
- 7 `sampled_backedge` decode groups covering 1405 events.
- 13 `sampled_long_or_sparse` decode groups covering 311 events.

Top exact decode groups:

| Events | Entries | Delta | Shape | Decode Signature |
| ---: | ---: | --- | --- | --- |
| 43042 | 4 | `+0x4` | `VVVV` | `IPADV+0x0;RIP+0x0/2;RF+0x170:xor;TDYN;RTdyn;WF+0xa` |
| 28646 | 2 | `+0x4` | `VVVV` | `IPADV+0x0;RIP+0x0/2;RF+0x170:add;WF+0x170:or;TDYN;RTdyn;WF+0xa` |
| 28055 | 1 | `+0x4` | `VVVV` | `IPADV+0x0;RIP+0x0/2;RF+0x170:sub;WF+0x170:and;TDYN;RTdyn;WF+0xa` |
| 26605 | 1 | `+0x3` | `VVV` | `IPADV+0x0;RIP+0x0/2;WF+0x170:or;TDYN;RTdyn;WF+0xa` |
| 26110 | 1 | `+0x4` | `VVVE` | `IPADV+0x0;RIP+0x0/2;RF+0x170:add;WF+0x170:sub;TDYN;RTdyn;WF+0xa` |
| 25445 | 1 | `+0x3` | `VVV` | `IPADV+0x0;RIP+0x0/2;RF+0x170:sub;WF+0x170:sub;TDYN;RTdyn;WF+0xa` |
| 25296 | 1 | `+0x4` | `VVVV` | `IPADV+0x0;RIP+0x0/2;RF+0x170:add;WF+0x170:sub;TDYN;RTdyn;WF+0xa` |
| 25104 | 1 | `+0x4` | `VVVV` | `IPADV+0x2;RIP+0x2/2;RF+0x170:add;WF+0x170:add;TDYN;RTdyn;WF+0xa` |

The bytecode block graph in `vm_bytecode_block_edges.tsv` aggregates instruction rows by recovered bytecode segment. It has 1114 aggregate edges. By event weight:

| Events | Edge Rows | Class |
| ---: | ---: | --- |
| 757319 | 557 | `intra_block` |
| 6699 | 557 | `out_of_recovered` |

The `out_of_recovered` edges are exact positive steps whose destination offset has not yet been recovered as an exact byte segment start; these are useful targets for varied-input traces.

Top auto3 tail targets:

| Count | Entry | Target |
| ---: | ---: | --- |
| 6477 | 258 | `0xadf2c` |
| 6033 | 28 | `0x7e390` |
| 5986 | 347 | `0xc088d` |
| 5505 | 114 | `0x90319` |
| 5327 | 189 | `0x9e7af` |
| 5089 | 66 | `0x855ff` |
| 4900 | 340 | `0xbf435` |
| 4663 | 18 | `0x7be9b` |
| 4656 | 337 | `0xbec0e` |

New high-value next entries from `vm_tail_scan.py dumps/vmtail-auto3` include 161 (`0x9975a`), 176 (`0x9c10b`), 301 (`0xb708d`), 144 (`0x95887`), 160 (`0x994cf`), 319 (`0xba72f`), 198 (`0xa037e`), 260 (`0xae90b`), 257 (`0xadbfd`), and 30 (`0x7e849`).

The observed handler blocks consistently read 16-bit words from the current `frame+0x0a` bytecode pointer, combine them with `frame+0x170` state, index through `frame+0x10f`, advance `frame+0x0a`, then tail-jump to the resolved handler. The raw 16-bit words are not direct table indices; the selected target depends on the per-frame rolling state.

The most useful next deobfuscation path is broader dynamic basic-block recovery rather than linear disassembly:

1. Use EAC-relative hook call sites as anchors for side-effectful blocks.
2. Break or instrument dispatcher entries (`0xc823b`, `0xcdc60`, and neighbors) to log logical next targets.
3. Normalize stack VM sequences into direct register assignments/jumps.
4. Re-run with throttled `/proc` tracing so long-running workers can complete without producing noisy logs.
