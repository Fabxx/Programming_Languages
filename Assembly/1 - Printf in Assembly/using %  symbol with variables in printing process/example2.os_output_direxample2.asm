GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\cc0hOMoG.s 			page 1


   1              		.file	"example2.c"
   3              		.section .rdata,"dr"
   4              	.LC0:
   5 0000 48697320 		.ascii "His name was %s\12\0"
   5      6E616D65 
   5      20776173 
   5      2025730A 
   5      00
   6              	.LC1:
   7 0011 4865206E 		.ascii "He never liked to be %d\12\0"
   7      65766572 
   7      206C696B 
   7      65642074 
   7      6F206265 
   8 002a 00000000 		.align 8
   8      0000
   9              	.LC2:
  10 0030 62757420 		.ascii "but still, he wanted to be a %s\12\0"
  10      7374696C 
  10      6C2C2068 
  10      65207761 
  10      6E746564 
  11 0051 00000000 		.align 8
  11      000000
  12              	.LC3:
  13 0058 5361646C 		.ascii "Sadly the place where he was living, wouldn't give that much payday, in fact\12he was earn
  13      79207468 
  13      6520706C 
  13      61636520 
  13      77686572 
  14 00bf 00       		.text
  15              		.globl	main
  17              		.seh_proc	main
  18              	main:
  19 0000 55       		pushq	%rbp
  20              		.seh_pushreg	%rbp
  21 0001 4889E5   		movq	%rsp, %rbp
  22              		.seh_setframe	%rbp, 0
  23 0004 4883EC40 		subq	$64, %rsp
  24              		.seh_stackalloc	64
  25              		.seh_endprologue
  26 0008 E8000000 		call	__main
  26      00
  27 000d C745F04A 		movl	$1852337994, -16(%rbp)
  27      6F686E
  28 0014 C645F400 		movb	$0, -12(%rbp)
  29 0018 C745FC38 		movl	$56, -4(%rbp)
  29      000000
  30 001f 48B85072 		movabsq	$7885065666585129552, %rax
  30      6F677261 
  30      6D6D
  31 0029 488945E0 		movq	%rax, -32(%rbp)
  32 002d 66C745E8 		movw	$29285, -24(%rbp)
  32      6572
  33 0033 C645EA00 		movb	$0, -22(%rbp)
  34 0037 C745F8E2 		movl	$1250, -8(%rbp)
  34      040000
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\cc0hOMoG.s 			page 2


  35 003e 488D45F0 		leaq	-16(%rbp), %rax
  36 0042 4889C2   		movq	%rax, %rdx
  37 0045 488D0D00 		leaq	.LC0(%rip), %rcx
  37      000000
  38 004c E8000000 		call	printf
  38      00
  39 0051 8B45FC   		movl	-4(%rbp), %eax
  40 0054 89C2     		movl	%eax, %edx
  41 0056 488D0D11 		leaq	.LC1(%rip), %rcx
  41      000000
  42 005d E8000000 		call	printf
  42      00
  43 0062 488D45E0 		leaq	-32(%rbp), %rax
  44 0066 4889C2   		movq	%rax, %rdx
  45 0069 488D0D30 		leaq	.LC2(%rip), %rcx
  45      000000
  46 0070 E8000000 		call	printf
  46      00
  47 0075 8B45F8   		movl	-8(%rbp), %eax
  48 0078 89C2     		movl	%eax, %edx
  49 007a 488D0D58 		leaq	.LC3(%rip), %rcx
  49      000000
  50 0081 E8000000 		call	printf
  50      00
  51 0086 B8000000 		movl	$0, %eax
  51      00
  52 008b 4883C440 		addq	$64, %rsp
  53 008f 5D       		popq	%rbp
  54 0090 C3       		ret
  55              		.seh_endproc
  56              		.ident	"GCC: (tdm64-1) 5.1.0"
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\cc0hOMoG.s 			page 3


DEFINED SYMBOLS
                            *ABS*:0000000000000000 example2.c
C:\Users\ADMINI~1\AppData\Local\Temp\cc0hOMoG.s:18     .text:0000000000000000 main

UNDEFINED SYMBOLS
__main
printf
