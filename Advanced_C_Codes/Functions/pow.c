#include <stdio.h>
#include <math.h>

int main()
{
	int a;
	printf("Enter a number ");
	scanf("%d", &a);

	int res = pow(a, 2);
	printf("The square of %d is : %d\n", a, res);

	return 0;
}
