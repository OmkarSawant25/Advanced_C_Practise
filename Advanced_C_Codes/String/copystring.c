#include<stdio.h>

int main()
{
	/*Shallow copy */
	// char s1[] = "Omkar";
	// char *s2 = s1; //s2 is a  shallow copy
	// s1[0] = 'Z';
	// printf("%s \n",s1);

	/*Deep copy*/
	char *s1 = "Omkar Sawant";
	char *s2;
	s2 = s1;
	printf("%s\n",s1);
	printf("%s\n",s2);
	s2 = "JSPM";
	printf("%s\n",s1);
	printf("%s\n",s2);

	return 0;
}
 