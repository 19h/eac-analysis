# Native Handler Environment Coverage

Handler-level cross-run provenance from `vm_trace_coverage_matrix.tsv` and every listed instruction trace. This is evidence about observed scenarios, not proof of exhaustive environment/config coverage.

| metric | value |
| --- | ---: |
| concrete source and target seen | 202 |
| concrete target only | 3 |
| concrete source only | 0 |
| synthetic fill only | 0 |
| static only / unobserved in trace matrix | 155 |
| fake-network source handlers | 191 |
| fake-network target handlers | 195 |
| blocked-network source handlers | 205 |
| blocked-network target handlers | 205 |
