GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\ccdWeWEK.s 			page 1
   
   ;Equivalent of: https://github.com/Fabio-Git-dev/Programming_Languages/blob/master/C/10%20-%20use%20of%20functions%20for%20a%20simple%20calculator/calculator.c

   1              		.file	"calculator.c"
   3              		.section .rdata,"dr"
   4              		.align 8
   5              	.LC0:
   6 0000 496E7075 		.ascii "Input a number [ +(1), -(2), *(3), /(4), ^(5), exit(6)]: \0"
   6      74206120 
   6      6E756D62 
   6      6572205B 
   6      202B2831 
   7              	.LC1:
   8 003a 256400   		.ascii "%d\0"
   9              	.LC2:
  10 003d 506C6561 		.ascii "Please input again\0"
  10      73652069 
  10      6E707574 
  10      20616761 
  10      696E00
  11              		.text
  12              		.globl	main
  14              		.seh_proc	main
  15              	main:
  16 0000 55       		pushq	%rbp
  17              		.seh_pushreg	%rbp
  18 0001 4889E5   		movq	%rsp, %rbp
  19              		.seh_setframe	%rbp, 0
  20 0004 4883EC30 		subq	$48, %rsp
  21              		.seh_stackalloc	48
  22              		.seh_endprologue
  23 0008 E8000000 		call	__main
  23      00
  24              	.L2:
  25 000d 488D0D00 		leaq	.LC0(%rip), %rcx
  25      000000
  26 0014 E8000000 		call	printf
  26      00
  27 0019 488D45FC 		leaq	-4(%rbp), %rax
  28 001d 4889C2   		movq	%rax, %rdx
  29 0020 488D0D3A 		leaq	.LC1(%rip), %rcx
  29      000000
  30 0027 E8000000 		call	scanf
  30      00
  31 002c 8B45FC   		movl	-4(%rbp), %eax
  32 002f 83F806   		cmpl	$6, %eax
  33 0032 7F07     		jg	.L3
  34 0034 8B45FC   		movl	-4(%rbp), %eax
  35 0037 85C0     		testl	%eax, %eax
  36 0039 7F0E     		jg	.L4
  37              	.L3:
  38 003b 488D0D3D 		leaq	.LC2(%rip), %rcx
  38      000000
  39 0042 E8000000 		call	puts
  39      00
  40 0047 EBC4     		jmp	.L2
  41              	.L4:
  42 0049 8B45FC   		movl	-4(%rbp), %eax
  43 004c 89C1     		movl	%eax, %ecx
  44 004e E8130000 		call	sel_func
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\ccdWeWEK.s 			page 2


  44      00
  45 0053 8B45FC   		movl	-4(%rbp), %eax
  46 0056 83F806   		cmpl	$6, %eax
  47 0059 75B2     		jne	.L2
  48 005b B8000000 		movl	$0, %eax
  48      00
  49 0060 4883C430 		addq	$48, %rsp
  50 0064 5D       		popq	%rbp
  51 0065 C3       		ret
  52              		.seh_endproc
  53              		.globl	sel_func
  55              		.seh_proc	sel_func
  56              	sel_func:
  57 0066 55       		pushq	%rbp
  58              		.seh_pushreg	%rbp
  59 0067 4889E5   		movq	%rsp, %rbp
  60              		.seh_setframe	%rbp, 0
  61 006a 4883EC30 		subq	$48, %rsp
  62              		.seh_stackalloc	48
  63              		.seh_endprologue
  64 006e 894D10   		movl	%ecx, 16(%rbp)
  65 0071 837D1005 		cmpl	$5, 16(%rbp)
  66 0075 7764     		ja	.L7
  67 0077 8B4510   		movl	16(%rbp), %eax
  68 007a 488D1485 		leaq	0(,%rax,4), %rdx
  68      00000000 
  69 0082 488D0550 		leaq	.L9(%rip), %rax
  69      000000
  70 0089 8B0402   		movl	(%rdx,%rax), %eax
  71 008c 4863D0   		movslq	%eax, %rdx
  72 008f 488D0550 		leaq	.L9(%rip), %rax
  72      000000
  73 0096 4801D0   		addq	%rdx, %rax
  74 0099 FFE0     		jmp	*%rax
  75              		.section .rdata,"dr"
  76              		.align 4
  77              	.L9:
  78 0050 DF000000 		.long	.L7-.L9
  79 0054 A3000000 		.long	.L8-.L9
  80 0058 B4000000 		.long	.L10-.L9
  81 005c C5000000 		.long	.L11-.L9
  82 0060 D6000000 		.long	.L12-.L9
  83 0064 E7000000 		.long	.L13-.L9
  84              		.text
  85              	.L8:
  86 009b 488D0546 		leaq	add(%rip), %rax
  86      000000
  87 00a2 488945F8 		movq	%rax, -8(%rbp)
  88 00a6 EB33     		jmp	.L7
  89              	.L10:
  90 00a8 488D0584 		leaq	sub(%rip), %rax
  90      000000
  91 00af 488945F8 		movq	%rax, -8(%rbp)
  92 00b3 EB26     		jmp	.L7
  93              	.L11:
  94 00b5 488D05C4 		leaq	mul(%rip), %rax
  94      000000
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\ccdWeWEK.s 			page 3


  95 00bc 488945F8 		movq	%rax, -8(%rbp)
  96 00c0 EB19     		jmp	.L7
  97              	.L12:
  98 00c2 488D0503 		leaq	div(%rip), %rax
  98      010000
  99 00c9 488945F8 		movq	%rax, -8(%rbp)
 100 00cd EB0C     		jmp	.L7
 101              	.L13:
 102 00cf 488D0542 		leaq	square(%rip), %rax
 102      010000
 103 00d6 488945F8 		movq	%rax, -8(%rbp)
 104 00da 90       		nop
 105              	.L7:
 106 00db 488B45F8 		movq	-8(%rbp), %rax
 107 00df FFD0     		call	*%rax
 108 00e1 90       		nop
 109 00e2 4883C430 		addq	$48, %rsp
 110 00e6 5D       		popq	%rbp
 111 00e7 C3       		ret
 112              		.seh_endproc
 113              		.section .rdata,"dr"
 114              	.LC3:
 115 0068 496E7075 		.ascii "Input two numbers : \0"
 115      74207477 
 115      6F206E75 
 115      6D626572 
 115      73203A20 
 116              	.LC4:
 117 007d 25642564 		.ascii "%d%d\0"
 117      00
 118              	.LC5:
 119 0082 52657375 		.ascii "Result = %d\12\0"
 119      6C74203D 
 119      2025640A 
 119      00
 120              		.text
 121              		.globl	add
 123              		.seh_proc	add
 124              	add:
 125 00e8 55       		pushq	%rbp
 126              		.seh_pushreg	%rbp
 127 00e9 4889E5   		movq	%rsp, %rbp
 128              		.seh_setframe	%rbp, 0
 129 00ec 4883EC30 		subq	$48, %rsp
 130              		.seh_stackalloc	48
 131              		.seh_endprologue
 132 00f0 488D0D68 		leaq	.LC3(%rip), %rcx
 132      000000
 133 00f7 E8000000 		call	printf
 133      00
 134 00fc 488D55F8 		leaq	-8(%rbp), %rdx
 135 0100 488D45FC 		leaq	-4(%rbp), %rax
 136 0104 4989D0   		movq	%rdx, %r8
 137 0107 4889C2   		movq	%rax, %rdx
 138 010a 488D0D7D 		leaq	.LC4(%rip), %rcx
 138      000000
 139 0111 E8000000 		call	scanf
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\ccdWeWEK.s 			page 4


 139      00
 140 0116 8B55FC   		movl	-4(%rbp), %edx
 141 0119 8B45F8   		movl	-8(%rbp), %eax
 142 011c 01D0     		addl	%edx, %eax
 143 011e 89C2     		movl	%eax, %edx
 144 0120 488D0D82 		leaq	.LC5(%rip), %rcx
 144      000000
 145 0127 E8000000 		call	printf
 145      00
 146 012c 90       		nop
 147 012d 4883C430 		addq	$48, %rsp
 148 0131 5D       		popq	%rbp
 149 0132 C3       		ret
 150              		.seh_endproc
 151              		.globl	sub
 153              		.seh_proc	sub
 154              	sub:
 155 0133 55       		pushq	%rbp
 156              		.seh_pushreg	%rbp
 157 0134 4889E5   		movq	%rsp, %rbp
 158              		.seh_setframe	%rbp, 0
 159 0137 4883EC30 		subq	$48, %rsp
 160              		.seh_stackalloc	48
 161              		.seh_endprologue
 162 013b 488D0D68 		leaq	.LC3(%rip), %rcx
 162      000000
 163 0142 E8000000 		call	printf
 163      00
 164 0147 488D55F8 		leaq	-8(%rbp), %rdx
 165 014b 488D45FC 		leaq	-4(%rbp), %rax
 166 014f 4989D0   		movq	%rdx, %r8
 167 0152 4889C2   		movq	%rax, %rdx
 168 0155 488D0D7D 		leaq	.LC4(%rip), %rcx
 168      000000
 169 015c E8000000 		call	scanf
 169      00
 170 0161 8B55FC   		movl	-4(%rbp), %edx
 171 0164 8B45F8   		movl	-8(%rbp), %eax
 172 0167 29C2     		subl	%eax, %edx
 173 0169 89D0     		movl	%edx, %eax
 174 016b 89C2     		movl	%eax, %edx
 175 016d 488D0D82 		leaq	.LC5(%rip), %rcx
 175      000000
 176 0174 E8000000 		call	printf
 176      00
 177 0179 90       		nop
 178 017a 4883C430 		addq	$48, %rsp
 179 017e 5D       		popq	%rbp
 180 017f C3       		ret
 181              		.seh_endproc
 182              		.globl	mul
 184              		.seh_proc	mul
 185              	mul:
 186 0180 55       		pushq	%rbp
 187              		.seh_pushreg	%rbp
 188 0181 4889E5   		movq	%rsp, %rbp
 189              		.seh_setframe	%rbp, 0
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\ccdWeWEK.s 			page 5


 190 0184 4883EC30 		subq	$48, %rsp
 191              		.seh_stackalloc	48
 192              		.seh_endprologue
 193 0188 488D0D68 		leaq	.LC3(%rip), %rcx
 193      000000
 194 018f E8000000 		call	printf
 194      00
 195 0194 488D55F8 		leaq	-8(%rbp), %rdx
 196 0198 488D45FC 		leaq	-4(%rbp), %rax
 197 019c 4989D0   		movq	%rdx, %r8
 198 019f 4889C2   		movq	%rax, %rdx
 199 01a2 488D0D7D 		leaq	.LC4(%rip), %rcx
 199      000000
 200 01a9 E8000000 		call	scanf
 200      00
 201 01ae 8B55FC   		movl	-4(%rbp), %edx
 202 01b1 8B45F8   		movl	-8(%rbp), %eax
 203 01b4 0FAFC2   		imull	%edx, %eax
 204 01b7 89C2     		movl	%eax, %edx
 205 01b9 488D0D82 		leaq	.LC5(%rip), %rcx
 205      000000
 206 01c0 E8000000 		call	printf
 206      00
 207 01c5 90       		nop
 208 01c6 4883C430 		addq	$48, %rsp
 209 01ca 5D       		popq	%rbp
 210 01cb C3       		ret
 211              		.seh_endproc
 212              		.globl	div
 214              		.seh_proc	div
 215              	div:
 216 01cc 55       		pushq	%rbp
 217              		.seh_pushreg	%rbp
 218 01cd 4889E5   		movq	%rsp, %rbp
 219              		.seh_setframe	%rbp, 0
 220 01d0 4883EC30 		subq	$48, %rsp
 221              		.seh_stackalloc	48
 222              		.seh_endprologue
 223 01d4 488D0D68 		leaq	.LC3(%rip), %rcx
 223      000000
 224 01db E8000000 		call	printf
 224      00
 225 01e0 488D55F8 		leaq	-8(%rbp), %rdx
 226 01e4 488D45FC 		leaq	-4(%rbp), %rax
 227 01e8 4989D0   		movq	%rdx, %r8
 228 01eb 4889C2   		movq	%rax, %rdx
 229 01ee 488D0D7D 		leaq	.LC4(%rip), %rcx
 229      000000
 230 01f5 E8000000 		call	scanf
 230      00
 231 01fa 8B45FC   		movl	-4(%rbp), %eax
 232 01fd 8B4DF8   		movl	-8(%rbp), %ecx
 233 0200 99       		cltd
 234 0201 F7F9     		idivl	%ecx
 235 0203 89C2     		movl	%eax, %edx
 236 0205 488D0D82 		leaq	.LC5(%rip), %rcx
 236      000000
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\ccdWeWEK.s 			page 6


 237 020c E8000000 		call	printf
 237      00
 238 0211 90       		nop
 239 0212 4883C430 		addq	$48, %rsp
 240 0216 5D       		popq	%rbp
 241 0217 C3       		ret
 242              		.seh_endproc
 243              		.section .rdata,"dr"
 244              	.LC6:
 245 008f 496E7075 		.ascii "Input base : \0"
 245      74206261 
 245      7365203A 
 245      2000
 246              	.LC7:
 247 009d 496E7075 		.ascii "Input exp : \0"
 247      74206578 
 247      70203A20 
 247      00
 248              	.LC8:
 249 00aa 25645E25 		.ascii "%d^%d = %d\12\0"
 249      64203D20 
 249      25640A00 
 250 00b6 00000000 		.text
 250      00000000 
 250      0000
 251              		.globl	square
 253              		.seh_proc	square
 254              	square:
 255 0218 55       		pushq	%rbp
 256              		.seh_pushreg	%rbp
 257 0219 4889E5   		movq	%rsp, %rbp
 258              		.seh_setframe	%rbp, 0
 259 021c 4883EC30 		subq	$48, %rsp
 260              		.seh_stackalloc	48
 261              		.seh_endprologue
 262 0220 C745F801 		movl	$1, -8(%rbp)
 262      000000
 263 0227 488D0D8F 		leaq	.LC6(%rip), %rcx
 263      000000
 264 022e E8000000 		call	printf
 264      00
 265 0233 488D45F0 		leaq	-16(%rbp), %rax
 266 0237 4889C2   		movq	%rax, %rdx
 267 023a 488D0D3A 		leaq	.LC1(%rip), %rcx
 267      000000
 268 0241 E8000000 		call	scanf
 268      00
 269 0246 488D0D9D 		leaq	.LC7(%rip), %rcx
 269      000000
 270 024d E8000000 		call	printf
 270      00
 271 0252 488D45F4 		leaq	-12(%rbp), %rax
 272 0256 4889C2   		movq	%rax, %rdx
 273 0259 488D0D3A 		leaq	.LC1(%rip), %rcx
 273      000000
 274 0260 E8000000 		call	scanf
 274      00
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\ccdWeWEK.s 			page 7


 275 0265 C745FC00 		movl	$0, -4(%rbp)
 275      000000
 276 026c EB10     		jmp	.L19
 277              	.L20:
 278 026e 8B45F0   		movl	-16(%rbp), %eax
 279 0271 8B55F8   		movl	-8(%rbp), %edx
 280 0274 0FAFC2   		imull	%edx, %eax
 281 0277 8945F8   		movl	%eax, -8(%rbp)
 282 027a 8345FC01 		addl	$1, -4(%rbp)
 283              	.L19:
 284 027e 8B45F4   		movl	-12(%rbp), %eax
 285 0281 3945FC   		cmpl	%eax, -4(%rbp)
 286 0284 7CE8     		jl	.L20
 287 0286 8B55F4   		movl	-12(%rbp), %edx
 288 0289 8B45F0   		movl	-16(%rbp), %eax
 289 028c 8B4DF8   		movl	-8(%rbp), %ecx
 290 028f 4189C9   		movl	%ecx, %r9d
 291 0292 4189D0   		movl	%edx, %r8d
 292 0295 89C2     		movl	%eax, %edx
 293 0297 488D0DAA 		leaq	.LC8(%rip), %rcx
 293      000000
 294 029e E8000000 		call	printf
 294      00
 295 02a3 90       		nop
 296 02a4 4883C430 		addq	$48, %rsp
 297 02a8 5D       		popq	%rbp
 298 02a9 C3       		ret
 299              		.seh_endproc
 300              		.ident	"GCC: (tdm64-1) 5.1.0"
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\ccdWeWEK.s 			page 8


DEFINED SYMBOLS
                            *ABS*:0000000000000000 calculator.c
C:\Users\ADMINI~1\AppData\Local\Temp\ccdWeWEK.s:15     .text:0000000000000000 main
C:\Users\ADMINI~1\AppData\Local\Temp\ccdWeWEK.s:56     .text:0000000000000066 sel_func
C:\Users\ADMINI~1\AppData\Local\Temp\ccdWeWEK.s:124    .text:00000000000000e8 add
C:\Users\ADMINI~1\AppData\Local\Temp\ccdWeWEK.s:154    .text:0000000000000133 sub
C:\Users\ADMINI~1\AppData\Local\Temp\ccdWeWEK.s:185    .text:0000000000000180 mul
C:\Users\ADMINI~1\AppData\Local\Temp\ccdWeWEK.s:215    .text:00000000000001cc div
C:\Users\ADMINI~1\AppData\Local\Temp\ccdWeWEK.s:254    .text:0000000000000218 square

UNDEFINED SYMBOLS
__main
printf
scanf
puts
