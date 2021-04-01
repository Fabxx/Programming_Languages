GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\cchpWtrK.s 			page 1
;For loop equivalend of https://github.com/Fabio-Git-dev/Programming_Languages/blob/master/C/2%20-%20Loop%20execution%20for%20numbers/Numbers%20Loop/main.c

   1              		.file	"main.c"
   3              		.section .rdata,"dr"
   4              	.LC0:
   5 0000 25640A00 		.ascii "%d\12\0"
   6 0004 00000000 		.text
   6      00000000 
   6      00000000 
   7              		.globl	main
   9              		.seh_proc	main
  10              	main:
  11 0000 55       		pushq	%rbp
  12              		.seh_pushreg	%rbp
  13 0001 4889E5   		movq	%rsp, %rbp
  14              		.seh_setframe	%rbp, 0
  15 0004 4883EC30 		subq	$48, %rsp
  16              		.seh_stackalloc	48
  17              		.seh_endprologue
  18 0008 E8000000 		call	__main
  18      00
  19              	.L3:
  20 000d C745FC00 		movl	$0, -4(%rbp)
  20      000000
  21 0014 C745F801 		movl	$1, -8(%rbp)
  21      000000
  22              	.L2:
  23 001b 8B45FC   		movl	-4(%rbp), %eax
  24 001e 89C2     		movl	%eax, %edx
  25 0020 488D0D00 		leaq	.LC0(%rip), %rcx
  25      000000
  26 0027 E8000000 		call	printf
  26      00
  27 002c 8B55FC   		movl	-4(%rbp), %edx
  28 002f 8B45F8   		movl	-8(%rbp), %eax
  29 0032 01D0     		addl	%edx, %eax
  30 0034 8945F4   		movl	%eax, -12(%rbp)
  31 0037 8B45F8   		movl	-8(%rbp), %eax
  32 003a 8945FC   		movl	%eax, -4(%rbp)
  33 003d 8B45F4   		movl	-12(%rbp), %eax
  34 0040 8945F8   		movl	%eax, -8(%rbp)
  35 0043 817DFCFE 		cmpl	$254, -4(%rbp)
  35      000000
  36 004a 7ECF     		jle	.L2
  37 004c EBBF     		jmp	.L3
  38              		.seh_endproc
  39              		.ident	"GCC: (tdm64-1) 5.1.0"
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\cchpWtrK.s 			page 2


DEFINED SYMBOLS
                            *ABS*:0000000000000000 main.c
C:\Users\ADMINI~1\AppData\Local\Temp\cchpWtrK.s:10     .text:0000000000000000 main

UNDEFINED SYMBOLS
__main
printf
