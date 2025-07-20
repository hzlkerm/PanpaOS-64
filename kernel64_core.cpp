// PanpaOS-64 - Çekirdek Ana Modülü (AI tarafından yazıldı)
#include <stdint.h>
extern void init_memory64();
extern void init_scheduler64();
extern void init_fs64_core();
extern void init_interrupt64();
extern void init_syscalls64();

void kernel64_core_main() {
    init_memory64();
    init_scheduler64();
    init_fs64_core();
    init_interrupt64();
    init_syscalls64();
    while (1) { /* idle */ }
}
