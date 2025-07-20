// PanpaOS-64 - Görev Zamanlayıcı (AI tarafından yazıldı)
#include <stdint.h>

struct Task64 {
    uint64_t id;
    uint64_t rip;
    uint64_t rsp;
    uint64_t regs[16];
    uint8_t  state; // 0: boş, 1: hazır, 2: çalışıyor, 3: bekliyor
};

Task64 task_table[32];
uint32_t task_count = 0;

void init_scheduler64() {
    for (int i = 0; i < 32; ++i) task_table[i].state = 0;
    task_count = 0;
}

void schedule64() {
    // Basit round-robin zamanlayıcı
}
