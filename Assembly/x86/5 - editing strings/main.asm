; we can edit a string by using mov instruction.
; we call string with [] which means call it as a pointer
; then we define on the same line a byte "H" which is the char to put inside.
; if we type [string] only we point to index 0 of the string
; if we type [string+0x1] we edit the second char, and so on

; Remember: the index starts from 0. my string is 4 chars so 0-3 is the memory range.
; each byte of char is represented by 2 hex characters, 4 bits each.

; so Fabx in memory: 0x46 64 62 78
;                       F  A  B  X

; [string+0x3] points to x 78, and we replace it with H 48

; NOTE: on gdb if you debug the mov instruction where [string+0x3] is
; you will get only the value pointed at 0x3, not the entire string

; you can obtain the full string once it's inside the register ECX

section .data
    string db "Fabx"
    lenght equ $ - string


section .text

global main

main:
    mov ebp, esp; for correct debugging
    mov [string+0x3], byte 'H'
    mov eax, 4
    mov ebx, 1
    mov ecx, string
    mov edx, lenght
    int 0x80