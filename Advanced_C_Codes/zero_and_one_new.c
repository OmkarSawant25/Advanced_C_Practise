#include <stdio.h>

int main()
{
	int n;
	printf("Enter no. of rows : ");
	scanf("%d",&n);
	int a;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			if( (i+j) % 2 == 0){
				printf("%d ",1);
			}
			else{
				printf("%d ",0);
			}	
		}
		printf("\n");
	}
}
	



