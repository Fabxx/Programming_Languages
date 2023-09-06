; EIP in x86 is the Instruction Pointer, which points to the next instruction in memory to
; be executed. normally in GDB when you hit a breakpoint, you can see the instruction 
; pointed by the EIP with a -> or => near the memory address.

; when jmp is used, the ESP register which contains the pointer of the base stack address
; to reach, gets updated with the new address of the stack frame of "func"
; the FP frame pointer saves the previous address of ESP so that the register knows 
; where the program jumped from in case it needs to go back.

section .text
    

global main

main:
    mov ebp, esp; for correct debugging
    mov ebx, 42 ; exit status 42 will be returned if jmp works
    mov eax, 1
    jmp func ; jump to func function, alters the EIP
    mov ebx, 13 ; if not successfull status will be 13 
   
func:

    int 0x80
    

; NOTES: we can analyze the EIP when we reach the jmp instruction and we can see
;        that it points to the address of int 0x80 inside func.
