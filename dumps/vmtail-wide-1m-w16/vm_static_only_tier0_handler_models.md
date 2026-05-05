# Static-only Tier0 Handler Models

These 11 models translate the ranked tier0 single-function RetDec sidecars into frame-level C semantics.
They are static reconstruction evidence for handlers absent from the current dynamic trace matrix.

| Metric | Value |
| --- | ---: |
| models | 11 |
| source tier | tier0 single-function small static replay |

| Rank | Entry | Target | RetDec function | Model | Slot status | IP advance |
| ---: | ---: | --- | --- | --- | --- | ---: |
| 1 | 57 | `0x841f9` | `function_841f9` | `vm_tier0_entry_057` | `retdec_state_slot` | 4 |
| 2 | 255 | `0xad768` | `function_ad768` | `vm_tier0_entry_255` | `retdec_return_slot` | 8 |
| 3 | 96 | `0x8c4cf` | `function_8c4cf` | `vm_tier0_entry_096` | `decode_candidate_slot` | 8 |
| 4 | 71 | `0x86766` | `function_86766` | `vm_tier0_entry_071` | `decode_candidate_slot` | 8 |
| 5 | 73 | `0x86be4` | `function_86be4` | `vm_tier0_entry_073` | `final_state_candidate_slot` | 8 |
| 6 | 339 | `0xbf2d5` | `function_bf2d5` | `vm_tier0_entry_339` | `decode_candidate_slot` | 8 |
| 7 | 324 | `0xbb8aa` | `function_bb8aa` | `vm_tier0_entry_324` | `retdec_table_slot` | 8 |
| 8 | 38 | `0x80d79` | `function_80d79` | `vm_tier0_entry_038` | `decode_candidate_slot` | 8 |
| 9 | 67 | `0x859fc` | `function_859fc` | `vm_tier0_entry_067` | `retdec_table_slot` | 8 |
| 10 | 138 | `0x94c3a` | `function_94c3a` | `vm_tier0_entry_138` | `decode_candidate_slot` | 8 |
| 11 | 47 | `0x822bc` | `function_822bc` | `vm_tier0_entry_047` | `final_state_candidate_slot` | 9 |
