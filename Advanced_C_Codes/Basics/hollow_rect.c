#include <stdio.h>

int main()
{
	int n,m;
	printf("Enter no. of rows : ");
	scanf("%d",&n);
	printf("Enter no. of columns : ");
	scanf("%d",&m);

	for(int i = 1 ; i <= n ; i++)
	{
		for(int j = 1 ; j <= m ; j++)
		{
			if(j == 1 || j == m || i == 1 || i == n){
				printf("* ");
			}
			else{
				printf("  ");
			}
		}
		printf("\n");
	}
}

