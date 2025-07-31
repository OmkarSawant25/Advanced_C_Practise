#include <stdio.h>

int main()
{
	int amount,notes;
	int count = 0;
	printf("Enter the amount : \n");
	scanf("%d",&amount);

	if(amount>=500){
		notes=amount/500;
		printf("500 x %d \n",notes);
		count = count + notes;
		amount = amount % 500;
	}
	if(amount>=200){
		notes=amount/200;
		printf("200 x %d \n",notes);
		count = count + notes;
		amount = amount % 200;
	}
	if(amount>=100){
		notes=amount/100;
		printf("100 x %d \n",notes);
		count = count + notes;
		amount = amount % 100;
	}
	if(amount>=50){
		notes=amount/50;
		printf("50 x %d \n",notes);
		count = count + notes;
		amount = amount % 50;
	}
	
	if(amount>=20){
		notes=amount/20;
		printf("20 x %d \n",notes);
		count = count + notes;
		amount = amount % 20;
	}
	if(amount>=10){
		notes=amount/10;
		printf("10 x %d \n",notes);
		count = count + notes;
		amount = amount % 10;
	}

	else{
		printf("Remaining amount is %d\n",amount);
	}
}
