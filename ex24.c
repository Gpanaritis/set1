#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int a;
  char digit[5];
  printf("Give your two digit number\n");
  scanf("%d",&a);
  while(a<=0 || a/10==0 || a/10>9) {printf("please give two digit number\n"); scanf("%d",&a);}
  itoa(a,digit,10);
  digit[2]=digit[1];
  digit[3]=digit[2];
  digit[1]=digit[0];
  printf("The resulting number is %s",digit);
  
  return 0;
}

