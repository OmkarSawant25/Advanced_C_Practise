#include<stdio.h>

int main()
{
    int num,temp,count = 0,count1,result,rem,mul;
    printf("Enter a number : ");
    scanf("%d",&num);
    temp = num;

    while(temp != 0)
    {
        temp = temp/10;
        count ++;
    }

    count1 = count;
    result = 0;
    mul = 1;
    temp = num;

    while(temp != 0)
    {
        rem = temp % 10;
        while(count1 != 0)
        {
            mul = mul * rem;
            count1 --;
        }
        result = result + mul;
        count1 = count;
        temp = temp/10;
        mul = 1;
    }

    if(num == result) printf("%d is an Amstrong number\n",num);
    else printf("%d is not an Amstrong number\n",num);

    return 0;
}