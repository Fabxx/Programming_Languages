GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\ccWExpNr.s 			page 1


   1              		.file	"main.c"
   3              		.section .rdata,"dr"
   4              	.LC0:
   5 0000 6573656D 		.ascii "esempio n^2 \0"
   5      70696F20 
   5      6E5E3220 
   5      00
   6 000d 000000   		.align 8
   7              	.LC1:
   8 0010 496E7365 		.ascii "Inserire il valore per continuare: (numeri da 1 a 4) \0"
   8      72697265 
   8      20696C20 
   8      76616C6F 
   8      72652070 
   9              	.LC2:
  10 0046 256400   		.ascii "%d\0"
  11 0049 00000000 		.align 8
  11      000000
  12              	.LC3:
  13 0050 696C206E 		.ascii "il numero che hai selezionato \303\250 : %d\0"
  13      756D6572 
  13      6F206368 
  13      65206861 
  13      69207365 
  14 0076 0000     		.align 8
  15              	.LC4:
  16 0078 696C206E 		.ascii "il numero non \303\250 compreso nel range. riprova! \0"
  16      756D6572 
  16      6F206E6F 
  16      6E20C3A8 
  16      20636F6D 
  17 00a7 00000000 		.text
  17      00000000 
  17      00
  18              		.globl	main
  20              		.seh_proc	main
  21              	main:
  22 0000 55       		pushq	%rbp
  23              		.seh_pushreg	%rbp
  24 0001 4889E5   		movq	%rsp, %rbp
  25              		.seh_setframe	%rbp, 0
  26 0004 4883EC30 		subq	$48, %rsp
  27              		.seh_stackalloc	48
  28              		.seh_endprologue
  29 0008 E8000000 		call	__main
  29      00
  30 000d 488D0D00 		leaq	.LC0(%rip), %rcx
  30      000000
  31 0014 E8000000 		call	puts
  31      00
  32 0019 488D0D10 		leaq	.LC1(%rip), %rcx
  32      000000
  33 0020 E8000000 		call	puts
  33      00
  34 0025 488D45FC 		leaq	-4(%rbp), %rax
  35 0029 4889C2   		movq	%rax, %rdx
  36 002c 488D0D46 		leaq	.LC2(%rip), %rcx
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\ccWExpNr.s 			page 2


  36      000000
  37 0033 E8000000 		call	scanf
  37      00
  38 0038 8B45FC   		movl	-4(%rbp), %eax
  39 003b 83F802   		cmpl	$2, %eax
  40 003e 742B     		je	.L3
  41 0040 83F802   		cmpl	$2, %eax
  42 0043 7F07     		jg	.L4
  43 0045 83F801   		cmpl	$1, %eax
  44 0048 740E     		je	.L5
  45 004a EB58     		jmp	.L2
  46              	.L4:
  47 004c 83F803   		cmpl	$3, %eax
  48 004f 742D     		je	.L6
  49 0051 83F804   		cmpl	$4, %eax
  50 0054 743B     		je	.L7
  51 0056 EB4C     		jmp	.L2
  52              	.L5:
  53 0058 8B45FC   		movl	-4(%rbp), %eax
  54 005b 89C2     		movl	%eax, %edx
  55 005d 488D0D50 		leaq	.LC3(%rip), %rcx
  55      000000
  56 0064 E8000000 		call	printf
  56      00
  57 0069 EB46     		jmp	.L8
  58              	.L3:
  59 006b 8B45FC   		movl	-4(%rbp), %eax
  60 006e 89C2     		movl	%eax, %edx
  61 0070 488D0D50 		leaq	.LC3(%rip), %rcx
  61      000000
  62 0077 E8000000 		call	printf
  62      00
  63 007c EB33     		jmp	.L8
  64              	.L6:
  65 007e 8B45FC   		movl	-4(%rbp), %eax
  66 0081 89C2     		movl	%eax, %edx
  67 0083 488D0D50 		leaq	.LC3(%rip), %rcx
  67      000000
  68 008a E8000000 		call	printf
  68      00
  69 008f EB20     		jmp	.L8
  70              	.L7:
  71 0091 8B45FC   		movl	-4(%rbp), %eax
  72 0094 89C2     		movl	%eax, %edx
  73 0096 488D0D50 		leaq	.LC3(%rip), %rcx
  73      000000
  74 009d E8000000 		call	printf
  74      00
  75 00a2 EB0D     		jmp	.L8
  76              	.L2:
  77 00a4 488D0D78 		leaq	.LC4(%rip), %rcx
  77      000000
  78 00ab E8000000 		call	puts
  78      00
  79 00b0 90       		nop
  80              	.L8:
  81 00b1 B8000000 		movl	$0, %eax
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\ccWExpNr.s 			page 3


  81      00
  82 00b6 4883C430 		addq	$48, %rsp
  83 00ba 5D       		popq	%rbp
  84 00bb C3       		ret
  85              		.seh_endproc
  86              		.ident	"GCC: (tdm64-1) 5.1.0"
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\ccWExpNr.s 			page 4


DEFINED SYMBOLS
                            *ABS*:0000000000000000 main.c
C:\Users\ADMINI~1\AppData\Local\Temp\ccWExpNr.s:21     .text:0000000000000000 main

UNDEFINED SYMBOLS
__main
puts
scanf
printf
