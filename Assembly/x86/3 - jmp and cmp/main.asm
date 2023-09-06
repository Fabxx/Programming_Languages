; here we compare eax value with ebx, and we tell the code to jump if eax is less than ebx
; cmp instruction modifies the EFLAGS, specifically the Zero Flag ZF, since boolean 
; operations return 1 or 0.

; Once the flag is edited by cmp, the jump instruction checks for that flag to perform or not
; the jump to the memory address.

; in this case we are using jl, jump if less than.

; Other jump instructions that can be used with different conditions:

; JE  => Jump if equal

; JNE => Jump if not equal

; JG  => Jump if greater

; JGE => Jummp if greater or equal

; JL  => Jump if less

; JLE => jump if less or equal

section .text


global main

main:
    mov ebp, esp; for correct debugging
    mov eax, 0xa
    mov ebx, 0xb
    cmp eax, ebx ; 10 < 11 so jl will jump
    jl func ; zero flag is now 0 which means true, 1 is false
    
    
func:
    mov eax, 1
    mov ebx, 0
    int 0x80
    
      