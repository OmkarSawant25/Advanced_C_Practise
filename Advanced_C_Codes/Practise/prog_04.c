#include <stdio.h>

void main(){
/*
	int x = 10;
	int ans = 0;

	printf("%d\n",x);	//10
	printf("%d\n",ans);	//0

	ans = ++x;
	
	printf("%d\n",x);	//11
	printf("%d\n",ans);	//11
*/	
/*	int x = 10;
	int ans = 0;

	printf("%d\n",x);	//10
	printf("%d\n",ans);	//0

	ans = x++;		//ans madhe 10 janar ani next line la increment honar
	
	printf("%d\n",x);	//11  
	printf("%d\n",ans);	//10
*/	
	int x = 10;
	int ans = 0;

	printf("%d\n",x);	//10
	printf("%d\n",ans);	//0

//	ans = ++x + ++x;	//24
//	ans = ++x + ++x + ++x;  //37
	ans = ++x + ++x + ++x + ++x;

	printf("%d\n",x);	//11  
	printf("%d\n",ans);	//10
}
