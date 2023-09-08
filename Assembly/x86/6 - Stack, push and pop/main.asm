; push: 
;       -inserts data into the stack 

;       -decreases the ESP by "n" bytes of pushed data (ESP address goes Above in memory)



; pop: 
;       -moves the current data pointed by ESP from stack to register

;       -increases the ESP by "n" bytes of pushed data (ESP address goes below in memory)

;       - does NOT remove the data from the previous address when popping.


; the stack is LIFO (last in first out)

; imagine making a stack of plates
; you add plates from the bottom, the address decreases because in memory going
; from the bottom is like 0xFFFFFFFF to 0x00000000:

; plate 1 - 0x00000009, plate 2 0x00000008 and so on
; when we remove the plates from above, we go down to the memory again, from 0 to F

; if we want to go down the stack, we sum esp with the byte to reach

; if we want to go up the stack, we subtract esp with the byte to reach

; NOTES ON POP INSTRUCTION: 

; pop removes the data from the stack only if we do another push
; on the same memory address where ESP moved from.

; so what happens is:

; push 0xa on 0x9
; pop eax, address goes back to 0x6
; mov eax, [esp+0x4] to reach again 0x9, will still find 0xa
; if after pop i push another value, 0x9 will have another value

section .text

global main

main:
    mov  ebp, esp; for correct debugging
    push 0xa
    pop  eax  ; will contain 0xa from the stack, moves ESP back to initial address.
     
    push 0xb ; esp-0x4
    push 0xa ; esp-0x4, last address pointed by ESP
    
    add  esp, 0x4 ; esp+0x4. reach 0xb instead of 0xa (4 because each int is 4 bytes)
    pop  eax
   
   ; we can also use directly the mov instruction with the esp called as pointer
   ; and point to the stack element we want.
    
    mov  eax, [esp-0x8] ; doing 0x8 because on pos 0x4 there is still 0xb
    mov  eax, 0x1
    mov  ebx, 0x0
    int  0x80
