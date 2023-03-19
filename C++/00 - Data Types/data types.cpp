char	Smallest addressable unit of the machine that can contain basic character set. It is an integer type. Actual type can be either signed or unsigned. It contains CHAR_BIT bits.[3] 	8 	%c 	CHAR_MIN / CHAR_MAX 	n/a
signed char 	Of the same size as char, but guaranteed to be signed. Capable of containing at least the [−127, +127] range.[3][a] 	8 	%c (or %hhi for numerical output) 	SCHAR_MIN / SCHAR_MAX[5] 	n/a
unsigned char 	Of the same size as char, but guaranteed to be unsigned. Contains at least the [0, 255] range.[6] 	8 	%c (or %hhu for numerical output) 	0 / UCHAR_MAX 	n/a
short
short int
signed short
signed short int 	Short signed integer type. Capable of containing at least the [−32,767, +32,767] range.[3][a] 	16 	%hi or %hd 	SHRT_MIN / SHRT_MAX 	n/a
unsigned short
unsigned short int 	Short unsigned integer type. Contains at least the [0, 65,535] range.[3] 	16 	%hu 	0 / USHRT_MAX 	n/a
int
signed
signed int 	Basic signed integer type. Capable of containing at least the [−32,767, +32,767] range.[3][a] 	16 	%i or %d 	INT_MIN / INT_MAX 	none
unsigned
unsigned int 	Basic unsigned integer type. Contains at least the [0, 65,535] range.[3] 	16 	%u 	0 / UINT_MAX 	u or U
long
long int
signed long
signed long int 	Long signed integer type. Capable of containing at least the [−2,147,483,647, +2,147,483,647] range.[3][a] 	32 	%li or %ld 	LONG_MIN / LONG_MAX 	l or L[7]
unsigned long
unsigned long int 	Long unsigned integer type. Capable of containing at least the [0, 4,294,967,295] range.[3] 	32 	%lu 	0 / ULONG_MAX 	both u or U and l or L
long long
long long int
signed long long
signed long long int 	Long long signed integer type. Capable of containing at least the [−9,223,372,036,854,775,807, +9,223,372,036,854,775,807] range.[3][a] Specified since the C99 version of the standard. 	64 	%lli or %lld 	LLONG_MIN / LLONG_MAX 	ll or LL
unsigned long long
unsigned long long int 	Long long unsigned integer type. Contains at least the [0, +18,446,744,073,709,551,615] range.[3] Specified since the C99 version of the standard. 	64 	%llu 	0 / ULLONG_MAX 	both u or U and ll or LL
float 	Real floating-point type, usually referred to as a single-precision floating-point type. Actual properties unspecified (except minimum limits); however, on most systems, this is the IEEE 754 single-precision binary floating-point format (32 bits). This format is required by the optional Annex F "IEC 60559 floating-point arithmetic". 		Converting from text:[b]

    %f %F
    %g %G
    %e %E
    %a %A

		
double 	Real floating-point type, usually referred to as a double-precision floating-point type. Actual properties unspecified (except minimum limits); however, on most systems, this is the IEEE 754 double-precision binary floating-point format (64 bits). This format is required by the optional Annex F "IEC 60559 floating-point arithmetic". 		

    %lf %lF
    %lg %lG
    %le %lE
    %la %lA[c]

		
long double 	Real floating-point type, usually mapped to an extended precision floating-point number format. Actual properties unspecified. It can be either x86 extended-precision floating-point format (80 bits, but typically 96 bits or 128 bits in memory with padding bytes), the non-IEEE "double-double" (128 bits), IEEE 754 quadruple-precision floating-point format (128 bits), or the same as double. See the article on long double for details. 		%Lf %LF
%Lg %LG
%Le %LE
%La %LA[c] 	

Other specifications:

Integer Data Types

C type	stdint.h type	Bits	Sign	Range
char	uint8_t	8	Unsigned	0 .. 255
signed char	int8_t	8	Signed	-128 .. 127
unsigned short	uint16_t	16	Unsigned	0 .. 65,535
short	int16_t	16	Signed	-32,768 .. 32,767
unsigned int	uint32_t	32	Unsigned	0 .. 4,294,967,295
int	int32_t	32	Signed	-2,147,483,648 .. 2,147,483,647
unsigned long long	uint64_t	64	Unsigned	0 .. 18,446,744,073,709,551,615
long long	int64_t	64	Signed	-9,223,372,036,854,775,808 .. 9,223,372,036,854,775,807
Floating Point Data Types
C type	IEE754 Name	Bits	Range
float	Single Precision	32	-3.4E38 .. 3.4E38
double	Double Precision	64	-1.7E308 .. 1.7E308
	
