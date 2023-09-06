; we can loop a function using the cmp and jmp instruction to repeat a specific sequence.
; in this case we loop until EAX is less than 0xf

section .text


global main

main:
    mov ebp, esp; for correct debugging
    mov eax, 0x1
    jmp func
    
    
func:
    add eax, eax
    cmp eax, 0xf
    jl func
    mov eax, 0x1
    mov ebx, 0x0
    int 0x80
    
      