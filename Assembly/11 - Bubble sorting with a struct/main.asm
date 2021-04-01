GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\ccVwzd2m.s 			page 1


   1              		.file	"main.c"
   2              		.comm	str, 20400, 5
   3              		.comm	num_elem, 4, 2
   4              		.section .rdata,"dr"
   5              		.align 8
   6              	.LC0:
   7 0000 496E7365 		.ascii "Insert the number of elements where you want to acquire data.\0"
   7      72742074 
   7      6865206E 
   7      756D6265 
   7      72206F66 
   8              	.LC1:
   9 003e 256400   		.ascii "%d\0"
  10              	.LC2:
  11 0041 496E7365 		.ascii "Insert the name\0"
  11      72742074 
  11      6865206E 
  11      616D6500 
  12              	.LC3:
  13 0051 496E7365 		.ascii "Insert the surname\0"
  13      72742074 
  13      68652073 
  13      75726E61 
  13      6D6500
  14 0064 00000000 		.align 8
  15              	.LC4:
  16 0068 496E7365 		.ascii "Insert the number for this element\0"
  16      72742074 
  16      6865206E 
  16      756D6265 
  16      7220666F 
  17              	.LC5:
  18 008b 41637175 		.ascii "Acquisition completed\0"
  18      69736974 
  18      696F6E20 
  18      636F6D70 
  18      6C657465 
  19              		.text
  20              		.globl	input
  22              		.seh_proc	input
  23              	input:
  24 0000 55       		pushq	%rbp
  25              		.seh_pushreg	%rbp
  26 0001 4889E5   		movq	%rsp, %rbp
  27              		.seh_setframe	%rbp, 0
  28 0004 4883EC30 		subq	$48, %rsp
  29              		.seh_stackalloc	48
  30              		.seh_endprologue
  31 0008 488D0D00 		leaq	.LC0(%rip), %rcx
  31      000000
  32 000f E8000000 		call	puts
  32      00
  33 0014 488D0500 		leaq	num_elem(%rip), %rax
  33      000000
  34 001b 4889C2   		movq	%rax, %rdx
  35 001e 488D0D3E 		leaq	.LC1(%rip), %rcx
  35      000000
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\ccVwzd2m.s 			page 2


  36 0025 E8000000 		call	scanf
  36      00
  37 002a C745FC00 		movl	$0, -4(%rbp)
  37      000000
  38 0031 E9B70000 		jmp	.L2
  38      00
  39              	.L3:
  40 0036 488D0D41 		leaq	.LC2(%rip), %rcx
  40      000000
  41 003d E8000000 		call	puts
  41      00
  42 0042 488B0500 		movq	__imp___iob_func(%rip), %rax
  42      000000
  43 0049 FFD0     		call	*%rax
  44 004b 4889C1   		movq	%rax, %rcx
  45 004e E8000000 		call	fflush
  45      00
  46 0053 8B45FC   		movl	-4(%rbp), %eax
  47 0056 4898     		cltq
  48 0058 4869C0CC 		imulq	$204, %rax, %rax
  48      000000
  49 005f 488D1500 		leaq	str(%rip), %rdx
  49      000000
  50 0066 4801D0   		addq	%rdx, %rax
  51 0069 4883C004 		addq	$4, %rax
  52 006d 4889C1   		movq	%rax, %rcx
  53 0070 E8000000 		call	gets
  53      00
  54 0075 488D0D51 		leaq	.LC3(%rip), %rcx
  54      000000
  55 007c E8000000 		call	puts
  55      00
  56 0081 488B0500 		movq	__imp___iob_func(%rip), %rax
  56      000000
  57 0088 FFD0     		call	*%rax
  58 008a 4889C1   		movq	%rax, %rcx
  59 008d E8000000 		call	fflush
  59      00
  60 0092 8B45FC   		movl	-4(%rbp), %eax
  61 0095 4898     		cltq
  62 0097 4869C0CC 		imulq	$204, %rax, %rax
  62      000000
  63 009e 488D5060 		leaq	96(%rax), %rdx
  64 00a2 488D0500 		leaq	str(%rip), %rax
  64      000000
  65 00a9 4801D0   		addq	%rdx, %rax
  66 00ac 4883C008 		addq	$8, %rax
  67 00b0 4889C1   		movq	%rax, %rcx
  68 00b3 E8000000 		call	gets
  68      00
  69 00b8 488D0D68 		leaq	.LC4(%rip), %rcx
  69      000000
  70 00bf E8000000 		call	puts
  70      00
  71 00c4 8B45FC   		movl	-4(%rbp), %eax
  72 00c7 4898     		cltq
  73 00c9 4869C0CC 		imulq	$204, %rax, %rax
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\ccVwzd2m.s 			page 3


  73      000000
  74 00d0 488D1500 		leaq	str(%rip), %rdx
  74      000000
  75 00d7 4801D0   		addq	%rdx, %rax
  76 00da 4889C2   		movq	%rax, %rdx
  77 00dd 488D0D3E 		leaq	.LC1(%rip), %rcx
  77      000000
  78 00e4 E8000000 		call	scanf
  78      00
  79 00e9 8345FC01 		addl	$1, -4(%rbp)
  80              	.L2:
  81 00ed 488D0500 		leaq	num_elem(%rip), %rax
  81      000000
  82 00f4 8B00     		movl	(%rax), %eax
  83 00f6 3945FC   		cmpl	%eax, -4(%rbp)
  84 00f9 0F8C37FF 		jl	.L3
  84      FFFF
  85 00ff 488D0D8B 		leaq	.LC5(%rip), %rcx
  85      000000
  86 0106 E8000000 		call	puts
  86      00
  87 010b 90       		nop
  88 010c 4883C430 		addq	$48, %rsp
  89 0110 5D       		popq	%rbp
  90 0111 C3       		ret
  91              		.seh_endproc
  92              		.globl	bubble_sort
  94              		.seh_proc	bubble_sort
  95              	bubble_sort:
  96 0112 55       		pushq	%rbp
  97              		.seh_pushreg	%rbp
  98 0113 57       		pushq	%rdi
  99              		.seh_pushreg	%rdi
 100 0114 56       		pushq	%rsi
 101              		.seh_pushreg	%rsi
 102 0115 4889E5   		movq	%rsp, %rbp
 103              		.seh_setframe	%rbp, 0
 104 0118 4881ECE0 		subq	$224, %rsp
 104      000000
 105              		.seh_stackalloc	224
 106              		.seh_endprologue
 107 011f 488D0500 		leaq	num_elem(%rip), %rax
 107      000000
 108 0126 8B00     		movl	(%rax), %eax
 109 0128 8945F8   		movl	%eax, -8(%rbp)
 110 012b C745FC00 		movl	$0, -4(%rbp)
 110      000000
 111 0132 E9720100 		jmp	.L5
 111      00
 112              	.L7:
 113 0137 488D1500 		leaq	str(%rip), %rdx
 113      000000
 114 013e 8B45FC   		movl	-4(%rbp), %eax
 115 0141 4898     		cltq
 116 0143 4869C0CC 		imulq	$204, %rax, %rax
 116      000000
 117 014a 4801D0   		addq	%rdx, %rax
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\ccVwzd2m.s 			page 4


 118 014d 8B10     		movl	(%rax), %edx
 119 014f 8B45FC   		movl	-4(%rbp), %eax
 120 0152 83C001   		addl	$1, %eax
 121 0155 488D0D00 		leaq	str(%rip), %rcx
 121      000000
 122 015c 4898     		cltq
 123 015e 4869C0CC 		imulq	$204, %rax, %rax
 123      000000
 124 0165 4801C8   		addq	%rcx, %rax
 125 0168 8B00     		movl	(%rax), %eax
 126 016a 39C2     		cmpl	%eax, %edx
 127 016c 0F8E2F01 		jle	.L6
 127      0000
 128 0172 488D1500 		leaq	str(%rip), %rdx
 128      000000
 129 0179 8B45FC   		movl	-4(%rbp), %eax
 130 017c 4898     		cltq
 131 017e 4869C0CC 		imulq	$204, %rax, %rax
 131      000000
 132 0185 4801C2   		addq	%rax, %rdx
 133 0188 488D8520 		leaq	-224(%rbp), %rax
 133      FFFFFF
 134 018f B9190000 		movl	$25, %ecx
 134      00
 135 0194 4889C7   		movq	%rax, %rdi
 136 0197 4889D6   		movq	%rdx, %rsi
 137 019a F348A5   		rep movsq
 138 019d 4889F2   		movq	%rsi, %rdx
 139 01a0 4889F8   		movq	%rdi, %rax
 140 01a3 8B0A     		movl	(%rdx), %ecx
 141 01a5 8908     		movl	%ecx, (%rax)
 142 01a7 488D4004 		leaq	4(%rax), %rax
 143 01ab 488D5204 		leaq	4(%rdx), %rdx
 144 01af 8B45FC   		movl	-4(%rbp), %eax
 145 01b2 448D4001 		leal	1(%rax), %r8d
 146 01b6 488D1500 		leaq	str(%rip), %rdx
 146      000000
 147 01bd 8B45FC   		movl	-4(%rbp), %eax
 148 01c0 4898     		cltq
 149 01c2 4869C0CC 		imulq	$204, %rax, %rax
 149      000000
 150 01c9 488D0C02 		leaq	(%rdx,%rax), %rcx
 151 01cd 488D1500 		leaq	str(%rip), %rdx
 151      000000
 152 01d4 4963C0   		movslq	%r8d, %rax
 153 01d7 4869C0CC 		imulq	$204, %rax, %rax
 153      000000
 154 01de 4801C2   		addq	%rax, %rdx
 155 01e1 4889C8   		movq	%rcx, %rax
 156 01e4 B9CC0000 		movl	$204, %ecx
 156      00
 157 01e9 4C8B02   		movq	(%rdx), %r8
 158 01ec 4C8900   		movq	%r8, (%rax)
 159 01ef 4189C8   		movl	%ecx, %r8d
 160 01f2 4901C0   		addq	%rax, %r8
 161 01f5 4D8D4808 		leaq	8(%r8), %r9
 162 01f9 4189C8   		movl	%ecx, %r8d
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\ccVwzd2m.s 			page 5


 163 01fc 4901D0   		addq	%rdx, %r8
 164 01ff 4983C008 		addq	$8, %r8
 165 0203 4D8B40F0 		movq	-16(%r8), %r8
 166 0207 4D8941F0 		movq	%r8, -16(%r9)
 167 020b 4C8D4008 		leaq	8(%rax), %r8
 168 020f 4983E0F8 		andq	$-8, %r8
 169 0213 4C29C0   		subq	%r8, %rax
 170 0216 4829C2   		subq	%rax, %rdx
 171 0219 01C1     		addl	%eax, %ecx
 172 021b 83E1F8   		andl	$-8, %ecx
 173 021e 89C8     		movl	%ecx, %eax
 174 0220 C1E803   		shrl	$3, %eax
 175 0223 89C0     		movl	%eax, %eax
 176 0225 4C89C7   		movq	%r8, %rdi
 177 0228 4889D6   		movq	%rdx, %rsi
 178 022b 4889C1   		movq	%rax, %rcx
 179 022e F348A5   		rep movsq
 180 0231 8B45FC   		movl	-4(%rbp), %eax
 181 0234 83C001   		addl	$1, %eax
 182 0237 488D1500 		leaq	str(%rip), %rdx
 182      000000
 183 023e 4898     		cltq
 184 0240 4869C0CC 		imulq	$204, %rax, %rax
 184      000000
 185 0247 4801D0   		addq	%rdx, %rax
 186 024a 4889C2   		movq	%rax, %rdx
 187 024d 488D8520 		leaq	-224(%rbp), %rax
 187      FFFFFF
 188 0254 B9CC0000 		movl	$204, %ecx
 188      00
 189 0259 4C8B00   		movq	(%rax), %r8
 190 025c 4C8902   		movq	%r8, (%rdx)
 191 025f 4189C8   		movl	%ecx, %r8d
 192 0262 4901D0   		addq	%rdx, %r8
 193 0265 4D8D4808 		leaq	8(%r8), %r9
 194 0269 4189C8   		movl	%ecx, %r8d
 195 026c 4901C0   		addq	%rax, %r8
 196 026f 4983C008 		addq	$8, %r8
 197 0273 4D8B40F0 		movq	-16(%r8), %r8
 198 0277 4D8941F0 		movq	%r8, -16(%r9)
 199 027b 4C8D4208 		leaq	8(%rdx), %r8
 200 027f 4983E0F8 		andq	$-8, %r8
 201 0283 4C29C2   		subq	%r8, %rdx
 202 0286 4829D0   		subq	%rdx, %rax
 203 0289 01D1     		addl	%edx, %ecx
 204 028b 83E1F8   		andl	$-8, %ecx
 205 028e C1E903   		shrl	$3, %ecx
 206 0291 89CA     		movl	%ecx, %edx
 207 0293 89D2     		movl	%edx, %edx
 208 0295 4C89C7   		movq	%r8, %rdi
 209 0298 4889C6   		movq	%rax, %rsi
 210 029b 4889D1   		movq	%rdx, %rcx
 211 029e F348A5   		rep movsq
 212              	.L6:
 213 02a1 836DF801 		subl	$1, -8(%rbp)
 214 02a5 8345FC01 		addl	$1, -4(%rbp)
 215              	.L5:
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\ccVwzd2m.s 			page 6


 216 02a9 8B45F8   		movl	-8(%rbp), %eax
 217 02ac 83E801   		subl	$1, %eax
 218 02af 3B45FC   		cmpl	-4(%rbp), %eax
 219 02b2 0F8F7FFE 		jg	.L7
 219      FFFF
 220 02b8 90       		nop
 221 02b9 4881C4E0 		addq	$224, %rsp
 221      000000
 222 02c0 5E       		popq	%rsi
 223 02c1 5F       		popq	%rdi
 224 02c2 5D       		popq	%rbp
 225 02c3 C3       		ret
 226              		.seh_endproc
 227              		.section .rdata,"dr"
 228              	.LC6:
 229 00a1 4E616D65 		.ascii "Name:%s\12\0"
 229      3A25730A 
 229      00
 230              	.LC7:
 231 00aa 5375726E 		.ascii "Surname:%s\12\0"
 231      616D653A 
 231      25730A00 
 232              	.LC8:
 233 00b6 4E756D62 		.ascii "Number:%d\12\0"
 233      65723A25 
 233      640A00
 234              		.text
 235              		.globl	print_sort
 237              		.seh_proc	print_sort
 238              	print_sort:
 239 02c4 55       		pushq	%rbp
 240              		.seh_pushreg	%rbp
 241 02c5 4889E5   		movq	%rsp, %rbp
 242              		.seh_setframe	%rbp, 0
 243 02c8 4883EC30 		subq	$48, %rsp
 244              		.seh_stackalloc	48
 245              		.seh_endprologue
 246 02cc C745FC00 		movl	$0, -4(%rbp)
 246      000000
 247 02d3 E9800000 		jmp	.L9
 247      00
 248              	.L10:
 249 02d8 8B45FC   		movl	-4(%rbp), %eax
 250 02db 4898     		cltq
 251 02dd 4869C0CC 		imulq	$204, %rax, %rax
 251      000000
 252 02e4 488D1500 		leaq	str(%rip), %rdx
 252      000000
 253 02eb 4801D0   		addq	%rdx, %rax
 254 02ee 4883C004 		addq	$4, %rax
 255 02f2 4889C2   		movq	%rax, %rdx
 256 02f5 488D0DA1 		leaq	.LC6(%rip), %rcx
 256      000000
 257 02fc E8000000 		call	printf
 257      00
 258 0301 8B45FC   		movl	-4(%rbp), %eax
 259 0304 4898     		cltq
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\ccVwzd2m.s 			page 7


 260 0306 4869C0CC 		imulq	$204, %rax, %rax
 260      000000
 261 030d 488D5060 		leaq	96(%rax), %rdx
 262 0311 488D0500 		leaq	str(%rip), %rax
 262      000000
 263 0318 4801D0   		addq	%rdx, %rax
 264 031b 4883C008 		addq	$8, %rax
 265 031f 4889C2   		movq	%rax, %rdx
 266 0322 488D0DAA 		leaq	.LC7(%rip), %rcx
 266      000000
 267 0329 E8000000 		call	printf
 267      00
 268 032e 488D1500 		leaq	str(%rip), %rdx
 268      000000
 269 0335 8B45FC   		movl	-4(%rbp), %eax
 270 0338 4898     		cltq
 271 033a 4869C0CC 		imulq	$204, %rax, %rax
 271      000000
 272 0341 4801D0   		addq	%rdx, %rax
 273 0344 8B00     		movl	(%rax), %eax
 274 0346 89C2     		movl	%eax, %edx
 275 0348 488D0DB6 		leaq	.LC8(%rip), %rcx
 275      000000
 276 034f E8000000 		call	printf
 276      00
 277 0354 8345FC01 		addl	$1, -4(%rbp)
 278              	.L9:
 279 0358 488D0500 		leaq	num_elem(%rip), %rax
 279      000000
 280 035f 8B00     		movl	(%rax), %eax
 281 0361 3945FC   		cmpl	%eax, -4(%rbp)
 282 0364 0F8C6EFF 		jl	.L10
 282      FFFF
 283 036a 90       		nop
 284 036b 4883C430 		addq	$48, %rsp
 285 036f 5D       		popq	%rbp
 286 0370 C3       		ret
 287              		.seh_endproc
 289              		.section .rdata,"dr"
 290              	.LC9:
 291 00c1 70617573 		.ascii "pause\0"
 291      6500
 292 00c7 00000000 		.text
 292      00000000 
 292      00
 293              		.globl	main
 295              		.seh_proc	main
 296              	main:
 297 0371 55       		pushq	%rbp
 298              		.seh_pushreg	%rbp
 299 0372 4889E5   		movq	%rsp, %rbp
 300              		.seh_setframe	%rbp, 0
 301 0375 4883EC20 		subq	$32, %rsp
 302              		.seh_stackalloc	32
 303              		.seh_endprologue
 304 0379 E8000000 		call	__main
 304      00
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\ccVwzd2m.s 			page 8


 305 037e E87DFCFF 		call	input
 305      FF
 306 0383 E88AFDFF 		call	bubble_sort
 306      FF
 307 0388 E837FFFF 		call	print_sort
 307      FF
 308 038d 488D0DC1 		leaq	.LC9(%rip), %rcx
 308      000000
 309 0394 E8000000 		call	system
 309      00
 310 0399 B8000000 		movl	$0, %eax
 310      00
 311 039e 4883C420 		addq	$32, %rsp
 312 03a2 5D       		popq	%rbp
 313 03a3 C3       		ret
 314              		.seh_endproc
 315              		.ident	"GCC: (tdm64-1) 5.1.0"
GAS LISTING C:\Users\ADMINI~1\AppData\Local\Temp\ccVwzd2m.s 			page 9


DEFINED SYMBOLS
                            *ABS*:0000000000000000 main.c
                            *COM*:0000000000004fb0 str
                            *COM*:0000000000000004 num_elem
C:\Users\ADMINI~1\AppData\Local\Temp\ccVwzd2m.s:23     .text:0000000000000000 input
C:\Users\ADMINI~1\AppData\Local\Temp\ccVwzd2m.s:95     .text:0000000000000112 bubble_sort
C:\Users\ADMINI~1\AppData\Local\Temp\ccVwzd2m.s:238    .text:00000000000002c4 print_sort
C:\Users\ADMINI~1\AppData\Local\Temp\ccVwzd2m.s:296    .text:0000000000000371 main

UNDEFINED SYMBOLS
__imp___iob_func
__main
puts
scanf
fflush
gets
printf
system
