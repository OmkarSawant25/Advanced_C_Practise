/*Use the -lm flag to link the math library when compiling your C program.*/

#include <stdio.h>
#include<math.h>

int main()
{
	int a;
	printf("Enter a number ");
	scanf("%d", &a);

	int root = sqrt(a);
	printf("The squareroot of %d is : %d\n", a, root);

	return 0;
}
