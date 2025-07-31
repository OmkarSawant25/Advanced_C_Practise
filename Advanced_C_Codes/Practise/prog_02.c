#include <stdio.h>
#define PI 3.14
#define Omkar 25

void main()
{
	int x = 5;
	printf("Pi = %f",PI);
	printf("x = %d",x);
}

// in compiler there are four stage
// cc -save-temps prog1.c
// 1)Preprocessing .i expansion 	{ cc -E pr.c }
// 2)Compiling .s error 		{ cc -S pr.c }
// 3)Assembling .o assembly code	{ xxd -b program1.o }
// 4)linking (libc.so + __.o)
// preprocessing madhe PI chi value replace honar
// pan x chi nahi
