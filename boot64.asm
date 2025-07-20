; PanpaOS-64 x86_64 Bootloader (AI tarafından yazıldı)

BITS 64
ORG 0x7C00

start:
    cli
    xor ax, ax
    mov ds, ax
    mov es, ax
    mov fs, ax
    mov gs, ax
    mov ss, ax

    ; 64-bit long mode'a geçiş (basitleştirilmiş)
    mov eax, 0x80000001
    mov cr4, eax
    mov eax, 0xC0000080
    mov ecx, 0x1
    wrmsr

    ; Kernel yüklemesi
    mov rsi, KERNEL_LOAD_ADDR
    mov rcx, KERNEL_SECTOR_COUNT
    call load_kernel64

    jmp kernel64_core_entry

KERNEL_LOAD_ADDR equ 0x100000
KERNEL_SECTOR_COUNT equ 32

load_kernel64:
    ; Diskten kernel yükle (örnek, gerçek kodda disk okuma gerekir)
    ret

kernel64_core_entry:
    jmp 0x100000

times 510-($-$$) db 0
DW 0xAA55
