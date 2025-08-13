#include <stdio.h>

int main()
{
	int n;
	printf("Enter a num : ");
	scanf("%d",&n);
	int a = 4;
		//4 7 10 13 15
	for(int i = 1; i <= n ; i++)
	{
		printf("%d ",a);
		a = a + 3;
	}
	return 0;
}
