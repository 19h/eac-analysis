# MBA Solution Corpus

This is the batch input set for reducing the remaining VM mixed-boolean arithmetic and unknown dispatch expressions. It preserves raw operands, formulas, observed row targets, exact string/data refs, and dynamic trace coverage by source entry.

## Summary

| metric | value |
| --- | --- |
| problem source entries | 185 |
| catalog entries needing algebra | 185 |
| row-level unresolved source entries | 185 |
| observation rows | 65928 |
| formula atom rows | 185 |
| trace input rows | 185 |
| problem kinds | algebraic_mba:162; dispatch_unknown:23 |
| statuses | ready_for_symbolic_reduction:162; needs_dispatch_resolution_or_trace:23 |

## Files

| file | purpose |
| --- | --- |
| dumps/vmtail-wide-1m-w16/vm_mba_problem_inventory.tsv | one row per MBA/problematic source entry with formulas, variables, constants, target set, and required inputs |
| dumps/vmtail-wide-1m-w16/vm_mba_observation_rows.tsv | one row per static VM instruction observation for those source entries, including b0..b5/u16 operands and dynamic trace counts |
| dumps/vmtail-wide-1m-w16/vm_mba_formula_atoms.tsv | formula variable/constant/operator extraction for symbolic simplification |
| dumps/vmtail-wide-1m-w16/vm_mba_trace_inputs.tsv | dynamic trace samples and pre/post state availability by source entry |

## How to read the existing `*_mba_reduced.c` tables

Rows such as `case_state -> successor_vm_ip` are not final program behavior. They are solved synthetic dispatcher edges. The `raw_u16_*` columns are the concrete VM bytes/words available to an MBA expression, and `observed_pre_state`/`observed_pre_flags` are runtime inputs needed when the expression depends on VM state.

## Caveat

This corpus is evidence collection, not final reduction. Entries with `needs_dispatch_resolution_or_trace` still require a dispatch proof or focused trace; entries with `ready_for_symbolic_reduction` have enough static row evidence to attempt automated algebraic simplification.
