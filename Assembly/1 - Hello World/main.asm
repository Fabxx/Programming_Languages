; text = var name
; db = define byte, since each char is a byte.
; the actual string
; 10 (aka 0xa) = \n

; data section it's used to initialize variables that are declared

section .data
       
       text db "hello world!", 0xa
       len equ $ - text ; obtain string lenght


; text section, used to declare functions and write code for those functions
section .text
    global main  ;can also write it as _start for some assemblers

main:
    mov ebp, esp ; for debugging
    mov eax, 4 ; call sys_write to perform a write operation in the regs
    mov ebx, 1 ; specify stdout for the file specifier
    mov ecx, text ; put your string in the register
    mov edx, len ; number of bytes to write
    int 0x80 ; this opcode executes the currently sys operation set up in the regs.


; our return 0 setup, EDX must be 1 and EDX, the returned value 0 respectively in these registers.   

; NOTE: they don't have to be setup always in this way, what matters is that EAX is 1 and then EDX to the status number
; you want to display. 0 is EXIT_SUCCESS

exit:
    mov eax, 1
    mov edx, 0
    int 0x80    


; quick recap:

; EAX 4 represents a write operation to a buffer

; EBX 1 represents the buffer ID, in our case, stdout

; ECX contains our text

; EDX contains the lenght of the string to write

; 0x80 executes the write operation (4) into stdout (1). Specifically this opcode executes any sys operation defined in EAX
