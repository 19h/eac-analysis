# Synthetic Gap Dynamic Stitch

Sequence-based stitching for synthetic-successor gaps using the raw VMTAIL event stream.
A `dynamic_stitch_to_next_hooked_source` row means the next hooked VMTAIL event's source handler was inferred from its tail site, fixed delta, and byte match at `next_end - delta`.
This is dynamic sequence evidence for where execution reappears; it does not prove there were no unhooked handlers in between.

Rows: 22.
Resolution mix: dynamic_stitch_to_next_hooked_source:20, ambiguous_next_source:2.

| Synthetic Start | Source | Gap Bytes | Resolution | Next Source | Hidden Delta | Next Source Start | Evidence |
| --- | ---: | --- | --- | ---: | ---: | --- | --- |
| `0xd1445` | 175 | `cb1702008000` | `dynamic_stitch_to_next_hooked_source` | 310 | `+0x344e` | `0xd4893` | `observed_source,byte_match` |
| `0xd5ebc` | 195 | `1e1e02008000` | `dynamic_stitch_to_next_hooked_source` | 169 | `+0xb5eda` | `0x18bd96` | `observed_source,byte_match` |
| `0xdaf39` | 195 | `d43002008000` | `dynamic_stitch_to_next_hooked_source` | 310 | `+0xb114b` | `0x18c084` | `observed_source,byte_match` |
| `0x122e3c` | 299 | `09d402008000` | `dynamic_stitch_to_next_hooked_source` | 169 | `+0x19d628` | `0x2c0464` | `observed_source,byte_match` |
| `0x12906f` | 278 | `b2b51500800010c00600` | `dynamic_stitch_to_next_hooked_source` | 310 | `+0x49cf3` | `0x172d62` | `observed_source,byte_match` |
| `0x17452e` | 299 | `eb1303008000` | `dynamic_stitch_to_next_hooked_source` | 310 | `+0x14ba6c` | `0x2bff9a` | `observed_source,byte_match` |
| `0x17a420` | 175 | `031703008000` | `dynamic_stitch_to_next_hooked_source` | 169 | `-0x59922` | `0x120afe` | `observed_source,byte_match` |
| `0x18c467` | 195 | `fe2203008000` | `dynamic_stitch_to_next_hooked_source` | 310 | `-0x6edbb` | `0x11d6ac` | `observed_source,byte_match` |
| `0x1a6041` | 175 | `bd3903008000` | `dynamic_stitch_to_next_hooked_source` | 169 | `-0x83ea1` | `0x1221a0` | `observed_source,byte_match` |
| `0x1ed483` | 195 | `f97a03008000` | `dynamic_stitch_to_next_hooked_source` | 310 | `-0xcb5b3` | `0x121ed0` | `observed_source,byte_match` |
| `0x2304b8` | 195 | `7b4d04008000` | `dynamic_stitch_to_next_hooked_source` | 169 | `-0x15f4ac` | `0xd100c` | `observed_source,byte_match` |
| `0x231b74` | 195 | `c6f105008000` | `dynamic_stitch_to_next_hooked_source` | 169 | `-0x10fee7` | `0x121c8d` | `observed_source,byte_match` |
| `0x24bd2a` | 299 | `533f06008000` | `ambiguous_next_source` | - | `-` | `-` | `323:1:+0x4:observed_source,byte_miss` |
| `0x24bd2a` | 299 | `533f06008000` | `dynamic_stitch_to_next_hooked_source` | 86 | `-0x1310d0` | `0x11ac5a` | `observed_source,byte_match` |
| `0x293689` | 246 | `62010000701800003d0122` | `ambiguous_next_source` | - | `-` | `-` | `308:1:+0x20:observed_source,byte_miss` |
| `0x31f2b1` | 195 | `3f3c07008000` | `dynamic_stitch_to_next_hooked_source` | 169 | `-0x20198c` | `0x11d925` | `observed_source,byte_match` |
| `0x333bc9` | 195 | `d84807008000` | `dynamic_stitch_to_next_hooked_source` | 169 | `-0x15980` | `0x31e249` | `observed_source,byte_match` |
| `0x33710f` | 299 | `3d4b07008000` | `dynamic_stitch_to_next_hooked_source` | 310 | `-0x190b3` | `0x31e05c` | `observed_source,byte_match` |
| `0x33a6cc` | 299 | `924d07008000` | `dynamic_stitch_to_next_hooked_source` | 169 | `-0x1c296` | `0x31e436` | `observed_source,byte_match` |
| `0x33d2d9` | 195 | `884f07008000` | `dynamic_stitch_to_next_hooked_source` | 169 | `-0x1ecb6` | `0x31e623` | `observed_source,byte_match` |
| `0x34556c` | 175 | `515b07008000` | `dynamic_stitch_to_next_hooked_source` | 169 | `-0x227a5a` | `0x11db12` | `observed_source,byte_match` |
| `0x3655e4` | 195 | `bd7907008000` | `dynamic_stitch_to_next_hooked_source` | 310 | `-0x2478e5` | `0x11dcff` | `observed_source,byte_match` |
