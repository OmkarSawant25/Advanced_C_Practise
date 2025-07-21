#include <stdio.h>

int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	int a = 1;
	int b = 1;
	int sum = 1;

	for(int i = 1;i<=n;i++){
		if(i == 1 || i==2){
			printf("%d ",sum);
		}
		else{
			sum = a+b;
			a=b;
			b=sum;
			printf("%d ",sum);
		}
	}
}



