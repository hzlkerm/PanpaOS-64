// PanpaOS-64 - Dosya Sistemi Çekirdeği (AI tarafından yazıldı)
#include <stdint.h>

struct File64 {
    char name[32];
    uint64_t size;
    uint64_t addr;
};

File64 fs_table[64];
uint32_t file_count = 0;

void init_fs64_core() {
    file_count = 0;
}
