GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\ccFtoMGI.s 			page 1


   1              		.file	"main.c"
   3              		.section .rdata,"dr"
   4              	.LC0:
   5 0000 256400   		.ascii "%d\0"
   6 0003 00000000 		.text
   6      00000000 
   6      00000000 
   6      00
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
  19 000d C745FC0A 		movl	$10, -4(%rbp)
  19      000000
  20 0014 C745F819 		movl	$25, -8(%rbp)
  20      000000
  21 001b C745F41E 		movl	$30, -12(%rbp)
  21      000000
  22 0022 8B55FC   		movl	-4(%rbp), %edx
  23 0025 8B45F8   		movl	-8(%rbp), %eax
  24 0028 01C2     		addl	%eax, %edx
  25 002a 8B45F4   		movl	-12(%rbp), %eax
  26 002d 01D0     		addl	%edx, %eax
  27 002f 89C2     		movl	%eax, %edx
  28 0031 488D0D00 		leaq	.LC0(%rip), %rcx
  28      000000
  29 0038 E8000000 		call	printf
  29      00
  30 003d B8000000 		movl	$0, %eax
  30      00
  31 0042 4883C430 		addq	$48, %rsp
  32 0046 5D       		popq	%rbp
  33 0047 C3       		ret
  34              		.seh_endproc
  35              		.ident	"GCC: (tdm64-1) 5.1.0"
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\ccFtoMGI.s 			page 2


DEFINED SYMBOLS
                            *ABS*:0000000000000000 main.c
C:\Users\ADMINI~1\AppData\Local\Temp\ccFtoMGI.s:10     .text:0000000000000000 main

UNDEFINED SYMBOLS
__main
printf
