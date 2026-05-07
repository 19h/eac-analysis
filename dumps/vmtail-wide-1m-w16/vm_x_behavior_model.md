# x() Observed Behavior Model

This model joins the recovered VM timeline with runtime side-effect traces from instrumented x() runs. Runtime events are concrete native-offset observations, but they are not proof of a per-VM-instruction binding unless a later bridge/dataflow artifact links them.

## Run Coverage

| metric | value |
| --- | --- |
| trace rows | 36 |
| x modes | 1:34,0:1,2:1 |
| network policies | blocked_observed:34,fake_observed:1,not_observed:1 |
| network hosts | api.epicgames.dev:35,datarouter.ol.epicgames.com:35 |
| runtime event sequence rows | 7538 |
| runtime aggregate operations | open:4390,readlink:2570,realpath:122,fopen:100,pthread_create:93,popen:65,mprotect:62,getaddrinfo:62,getenv:48,opendir:14,send:4,connect:... |

## Runtime Phases

| phase | events | runs | operations | top details |
| --- | --- | --- | --- | --- |
| device_inventory | 20 | 5 | opendir:5,readlink:5,realpath:5,open:5 | opendir:/sys/class/net:5,readlink:/sys/class/net/enxce0c6f149a89:5,realpath:/sys/class/net/../../devices/pci0000:00/0000:00:14.0/usb1/1-7... |
| entropy_seed | 65 | 32 | fopen:65 | fopen:/dev/urandom:65 |
| environment_check | 48 | 31 | getenv:48 | getenv:EAC_LAUNCHERDIR:31,getenv:LD_PRELOAD:7,getenv:LD_AUDIT:7,getenv:_EAC_DEV:3 |
| filesystem_io | 19 | 5 | open:15,fopen:4 | open:/etc/machine-id:5,open:/etc/hostname:5,open:/etc/os-release:5,fopen:/models/dev/sc-rev/eac/eacsym/driver:4 |
| firmware_hardware_inventory | 96 | 31 | open:96 | open:/sys/devices/virtual/dmi/id/board_name:31,open:/sys/devices/virtual/dmi/id/product_name:31,open:/sys/class/dmi/id/bios_vendor:9,open... |
| mount_inventory | 13 | 7 | open:13 | open:/etc/mtab:13 |
| native_runtime_event | 2 | 1 | close:2 | close:3:2 |
| network_connectivity | 72 | 31 | getaddrinfo:62,send:4,socket:2,connect:2,recv:2 | getaddrinfo:api.epicgames.dev:31,getaddrinfo:datarouter.ol.epicgames.com:31,send:3:4,connect:127.0.0.1:443:2,recv:3:2 |
| network_dns_fallback_shell | 60 | 30 | popen:60 | popen:host -4 api.epicgames.dev:30,popen:host -4 datarouter.ol.epicgames.com:30 |
| process_inventory | 6703 | 31 | open:4221,readlink:2448,fopen:31,opendir:3 | open:/proc/mounts:31,fopen:/proc/bus/pci/devices:31,readlink:/proc/self/exe:8,open:/proc/cpuinfo:5,open:/proc/net/route:5,open:/proc/modu... |
| process_or_shell_probe | 5 | 5 | popen:5 | popen:lshw -C display 2>/dev/null:5 |
| self_memory_map_inspection | 34 | 31 | open:34 | open:/proc/self/maps:34 |
| self_memory_protection | 62 | 31 | mprotect:62 | mprotect:0x72281bc00000:2,mprotect:0x716a80a00000:2,mprotect:0x71e060e00000:2,mprotect:0x76aef2600000:2,mprotect:0x7e8fac200000:2,mprotec... |
| storage_inventory | 246 | 6 | readlink:117,realpath:117,open:6,opendir:6 | realpath:/dev/disk/by-id/../../nvm:90,realpath:/dev/disk/by-id/../../sda1:12,realpath:/dev/disk/by-id/../../sda:10,open:/sys/class/block/... |
| thread_start | 93 | 31 | pthread_create:93 |  |

## First Seen VM Program Overlay

| rank | program | phase hint | summary | strings |
| --- | --- | --- | --- | --- |
| 0 | 033 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet |  |
| 1 | 034 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet | YYYYY |
| 2 | 032 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet |  |
| 3 | 007 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet |  |
| 4 | 008 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet |  |
| 5 | 009 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet |  |
| 6 | 010 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet |  |
| 7 | 025 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet |  |
| 8 | 001 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet |  |
| 9 | 002 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet |  |
| 10 | 000 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet |  |
| 11 | 029 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet |  |
| 12 | 030 | vm_control_dispatch | VM dispatch/math only so far; no behavioral data refs recovered |  |
| 13 | 003 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet |  |
| 14 | 004 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet |  |
| 15 | 005 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet |  |
| 16 | 006 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet |  |
| 17 | 042 | runtime_support | C++ runtime/support surface | _ITM_registerTMCloneTable \|\| __freelocale \|\| _ITM_registerTMCloneTable \|\| __freelocale |
| 18 | 043 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet |  |
| 19 | 048 | runtime_support | C++ runtime/support surface | _ITM_registerTMCloneTable \|\| __freelocale \|\| long double |
| 20 | 053 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet |  |
| 21 | 054 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet |  |
| 22 | 049 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet |  |
| 23 | 046 | runtime_support | C++ runtime/support surface | _ITM_registerTMCloneTable \|\| __freelocale |
| 24 | 047 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet |  |
| 25 | 050 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet |  |
| 26 | 051 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet |  |
| 27 | 052 | network_connectivity_or_tls | TLS/SSL protocol or library-adjacent logic; host/environment inventory surface | dropping unexpected ChangeCipherSpec \|\| GLIBC_2.17 |
| 28 | 044 | vm_control_dispatch | control-transfer/native-bridge candidate with no exact side-effect reference yet |  |
| 29 | 045 | threading | threading or synchronization surface | pthread_cond_wait |

## Caveat

This is an observed behavior model for available x() runs. It keeps runtime native events and VM program rows separate; it is not a proof that every runtime event is bound to a specific VM instruction, and it does not exercise real external server responses.
