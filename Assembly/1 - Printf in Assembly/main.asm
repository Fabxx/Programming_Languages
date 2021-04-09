#include <stdio.h>
#include <stdlib.h>

;Simple printf in  assembly.

#include <stdio.h>
int main() {
   return printf("%d\n", 1);
}

;assembly matching code from C.

.file   "test.c"
        .section        .rodata
.LC0:
        .string "%d\n"
        .text
        .globl  main
        .type   main, @function
main:
        pushq   %rbp
        movq    %rsp, %rbp
        movl    $1, %esi
        movl    $.LC0, %edi
        movl    $0, %eax
        call    printf
        popq    %rbp
        ret
        .size   main, .-main
        .ident  "GCC: (GNU) 6.1.1 20160602"
        .section        .note.GNU-stack,"",@progbits
