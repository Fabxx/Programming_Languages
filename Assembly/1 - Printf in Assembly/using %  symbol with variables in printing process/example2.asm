GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\cc0hOMoG.s 			page 1


                 		.file	"example2.c"
                 		.section .rdata,"dr"
                 	.LC0:
    0000 48697320 		.ascii "His name was %s\12\0"
         6E616D65 
         20776173 
         2025730A 
         00
                 	.LC1:
    0011 4865206E 		.ascii "He never liked to be %d\12\0"
         65766572 
         206C696B 
         65642074 
         6F206265 
    002a 00000000 		.align 8
         0000
                 	.LC2:
   0030 62757420 		.ascii "but still, he wanted to be a %s\12\0"
        7374696C 
        6C2C2068 
        65207761 
        6E746564 
   0051 00000000 		.align 8
        000000
                	.LC3:
   0058 5361646C 		.ascii "Sadly the place where he was living, wouldn't give that much payday, in fact\12he was earn
        79207468 
        6520706C 
        61636520 
        77686572 
   00bf 00       		.text
                		.globl	main
                		.seh_proc	main
                	main:
   0000 55       		pushq	%rbp
                		.seh_pushreg	%rbp
   0001 4889E5   		movq	%rsp, %rbp
                		.seh_setframe	%rbp, 0
   0004 4883EC40 		subq	$64, %rsp
                		.seh_stackalloc	64
                		.seh_endprologue
   0008 E8000000 		call	__main
        00
   000d C745F04A 		movl	$1852337994, -16(%rbp)
        6F686E
   0014 C645F400 		movb	$0, -12(%rbp)
   0018 C745FC38 		movl	$56, -4(%rbp)
        000000
   001f 48B85072 		movabsq	$7885065666585129552, %rax
        6F677261 
        6D6D
   0029 488945E0 		movq	%rax, -32(%rbp)
   002d 66C745E8 		movw	$29285, -24(%rbp)
        6572
   0033 C645EA00 		movb	$0, -22(%rbp)
   0037 C745F8E2 		movl	$1250, -8(%rbp)
        040000
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\cc0hOMoG.s 			page 2


   003e 488D45F0 		leaq	-16(%rbp), %rax
   0042 4889C2   		movq	%rax, %rdx
   0045 488D0D00 		leaq	.LC0(%rip), %rcx
        000000
   004c E8000000 		call	printf
        00
   0051 8B45FC   		movl	-4(%rbp), %eax
   0054 89C2     		movl	%eax, %edx
   0056 488D0D11 		leaq	.LC1(%rip), %rcx
        000000
   005d E8000000 		call	printf
        00
   0062 488D45E0 		leaq	-32(%rbp), %rax
   0066 4889C2   		movq	%rax, %rdx
   0069 488D0D30 		leaq	.LC2(%rip), %rcx
        000000
   0070 E8000000 		call	printf
        00
   0075 8B45F8   		movl	-8(%rbp), %eax
   0078 89C2     		movl	%eax, %edx
   007a 488D0D58 		leaq	.LC3(%rip), %rcx
        000000
   0081 E8000000 		call	printf
        00
   0086 B8000000 		movl	$0, %eax
        00
   008b 4883C440 		addq	$64, %rsp
   008f 5D       		popq	%rbp
   0090 C3       		ret
                		.seh_endproc
                		.ident	"GCC: (tdm64-1) 5.1.0"
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\cc0hOMoG.s 			page 3


DEFINED SYMBOLS
                            *ABS*:0000000000000000 example2.c
C:\Users\ADMINI~1\AppData\Local\Temp\cc0hOMoG.s:18     .text:0000000000000000 main

UNDEFINED SYMBOLS
__main
printf
