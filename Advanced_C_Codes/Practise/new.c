#include <stdio.h>
int main()
{
   int i;
   for (i = 0; i < 5; i++)
   {
      if (i < 3)
      {
         printf("True_less%d\n", i);
      }
      else
      {
         printf("false_less%d\n", i);
      }
      if (i > 3)
      {
         printf("True_great%d\n", i);
      }
      else
      {
         printf("false_great%d\n", i);
      }
   }
}
