#include <stdio.h>

int main()
{
	int x,ld = 0;
	printf("Enter the number: ");
	scanf("%d",&x);
	int sum = 0;

	while(x != 0)
	{
		ld = x%10;
		sum = sum + ld;
		x = x/10;
	}

	printf("Sum is %d\n",sum);
}

