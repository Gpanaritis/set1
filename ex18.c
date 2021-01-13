#include<stdio.h>

int main()
{
  int x,y,result;
  printf("give two numbers\n");
  scanf("%d%d",&x,&y);
  while (x%y!=0 && y%x!=0)
  {
    if (x>y) x=x%y;
    else if (y>x) y=y%x;
  }
  if (x>y) result=y;
  else result=x;
  
  printf( "Max value is : %d\n", result);
  
  return 0;
}
