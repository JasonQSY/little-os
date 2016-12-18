global loader

MAGIC_NUMBER equ 0x1BADB002
FLAGS equ 0x0
CHECKSUM equ -MAGIC_NUMBER
KERNAL_STACK_SIZE equ 4096

extern main

section .bss
align 4
kernal_stack:
    resb KERNAL_STACK_SIZE

section .text
align 4
    dd MAGIC_NUMBER
    dd FLAGS
    dd CHECKSUM

loader:
    mov esp, kernal_stack + KERNAL_STACK_SIZE
    call main
    mov eax, 0xCAFEBABE
.loop:
    jmp .loop
