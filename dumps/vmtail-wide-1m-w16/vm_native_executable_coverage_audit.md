# Native Executable Coverage Audit

Compares executable ELF sections against native ranges already represented by reconstruction C sidecars.

- executable sections: 5
- executable bytes: 5651040
- recovered executable bytes: 5649762
- uncovered executable bytes: 1278
- recovered range rows: 91455
- uncovered gaps: 181

| section | range | bytes | covered | uncovered | coverage | ranges |
| --- | --- | ---: | ---: | ---: | ---: | ---: |
| `.init` | `0x1fbd0-0x1fbe7` | 23 | 23 | 0 | 100.00% | 1 |
| `.plt` | `0x1fbf0-0x20bd0` | 4064 | 4064 | 0 | 100.00% | 254 |
| `.plt.got` | `0x20bd0-0x20be0` | 16 | 16 | 0 | 100.00% | 2 |
| `.text` | `0x20c00-0x583650` | 5646928 | 5645650 | 1278 | 99.97% | 91195 |
| `.fini` | `0x583650-0x583659` | 9 | 9 | 0 | 100.00% | 3 |

## Largest Uncovered Gaps

| section | range | bytes |
| --- | --- | ---: |
| `.text` | `0x1fc470-0x1fc47c` | 12 |
| `.text` | `0x1fc864-0x1fc870` | 12 |
| `.text` | `0x1fc948-0x1fc954` | 12 |
| `.text` | `0x347f50-0x347f5c` | 12 |
| `.text` | `0x348028-0x348034` | 12 |
| `.text` | `0x3a2e95-0x3a2ea1` | 12 |
| `.text` | `0x3e3552-0x3e355e` | 12 |
| `.text` | `0x3efc46-0x3efc52` | 12 |
| `.text` | `0x4db649-0x4db655` | 12 |
| `.text` | `0x4db739-0x4db745` | 12 |
| `.text` | `0x4dbe61-0x4dbe6d` | 12 |
| `.text` | `0x4dd605-0x4dd611` | 12 |
| `.text` | `0x4dd919-0x4dd925` | 12 |
| `.text` | `0x4ddbd9-0x4ddbe5` | 12 |
| `.text` | `0x4dde99-0x4ddea5` | 12 |
| `.text` | `0x4de159-0x4de165` | 12 |
| `.text` | `0x4de419-0x4de425` | 12 |
| `.text` | `0x4de6d9-0x4de6e5` | 12 |
| `.text` | `0x4de999-0x4de9a5` | 12 |
| `.text` | `0x4e09d3-0x4e09de` | 11 |
| `.text` | `0x7276d-0x72777` | 10 |
| `.text` | `0x4db583-0x4db58d` | 10 |
| `.text` | `0x4db597-0x4db5a1` | 10 |
| `.text` | `0x4db7f9-0x4db803` | 10 |
| `.text` | `0x4dc287-0x4dc291` | 10 |
| `.text` | `0x4e0299-0x4e02a3` | 10 |
| `.text` | `0x4e02d5-0x4e02df` | 10 |
| `.text` | `0x4e0a01-0x4e0a0b` | 10 |
| `.text` | `0x4e5571-0x4e557b` | 10 |
| `.text` | `0x4e5586-0x4e5590` | 10 |
| `.text` | `0x4e78d9-0x4e78e3` | 10 |
| `.text` | `0x4e8db9-0x4e8dc3` | 10 |
| `.text` | `0x50294e-0x502958` | 10 |
| `.text` | `0x4dbba9-0x4dbbb2` | 9 |
| `.text` | `0x4dbbc4-0x4dbbcd` | 9 |
| `.text` | `0x4e116e-0x4e1177` | 9 |
| `.text` | `0x4e1180-0x4e1189` | 9 |
| `.text` | `0x4e18b9-0x4e18c2` | 9 |
| `.text` | `0x4e468a-0x4e4693` | 9 |
| `.text` | `0x31f83-0x31f8b` | 8 |
