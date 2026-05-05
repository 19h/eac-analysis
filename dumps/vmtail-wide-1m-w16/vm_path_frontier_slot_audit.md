# Path Frontier Slot Audit

Evaluation of weak path-specialized slot expressions against state-trace rows.
This checks whether a frontier expression can be safely promoted to a dispatch-table entry.

| metric | value |
| --- | ---: |
| frontier rows | 10 |
| direct table validated rows | 0 |
| rows with any direct table matches | 0 |
| not promotable rows | 10 |

| entry | path | events | eval rows | table matches | invalid slots | verdict |
| ---: | --- | ---: | ---: | ---: | ---: | --- |
| `356` | `7af0b6860c39318d` | `116` | `116` | `0` | `103` | `not_promotable` |
| `216` | `75052fca20bfc88b` | `112` | `112` | `0` | `112` | `not_promotable` |
| `278` | `a604fbe70c42f7fd` | `82` | `83` | `0` | `83` | `not_promotable` |
| `311` | `75688f09a9896611` | `67` | `69` | `0` | `69` | `not_promotable` |
| `95` | `605a965b0cc7f63e` | `52` | `95` | `0` | `95` | `not_promotable` |
| `264` | `e3b0c44298fc1c14` | `49` | `49` | `0` | `49` | `not_promotable` |
| `95` | `be7c6d4e5e3db62f` | `40` | `95` | `0` | `95` | `not_promotable` |
| `321` | `e43a6d061b0d7434` | `13` | `19` | `0` | `19` | `not_promotable` |
| `321` | `9e32de774899afb7` | `6` | `19` | `0` | `19` | `not_promotable` |
| `78` | `96fd915ac218c913` | `1` | `1` | `0` | `1` | `not_promotable` |
