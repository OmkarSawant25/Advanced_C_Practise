#include <stdio.h>

int main(){

	int a,b,c,middle;
	printf("Enter the Three numbers: ");
	scanf("%d %d %d",&a,&b,&c);

/*	if((b>=a && b<=c)||(b>=c && b<=a)){
		middle = b;
	}
	else if((a>=b && a<=c)||(a>=c && a<=b)){
		middle = a;
	}
	else{
		middle = c;
	}
	printf("The middle number is %d",middle);
*/

	if(a>b){
		if(a<c){
			middle = a;
		}else{
			if(b>c){
				middle = b;
			}
			else{
				middle = c;
			}
		}
	}
	else if(a<=b){
		if(a>c){
			middle =a;
		}
		else{
			if(b<c){
				middle = b;
			}
			else{
				middle = c;
			}
		}
	}

	printf("middle is %d\n",middle);

}

