#include <stdio.h>

int main()
{
  float F,C;
  printf("give temperature in farenheit \n");
  scanf("%f",&F);
  C=(5/9)*(F-32);
  printf("the temperature is %f degrees celsius",C);
  
  return 0;
}
