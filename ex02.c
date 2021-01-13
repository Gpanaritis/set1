#include<stdio.h>
int main()
{
  int a=1,i,b=1;

  while (a<=20)
  {
    for (i=1; i<=5; i++)
    {
      printf("%d ",b);
      b++;
    }
    a++;
    printf("\n");
   }
  return 0;
}
