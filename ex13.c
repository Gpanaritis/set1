#include<stdio.h>

int main()
{
  int a=0,i;
  while (a<=126)
  {
    for(i=1;i<=10;i++) { if (a>126) break; printf("%c(%d)  ",(char)a,a); a++;}
    
    printf("\n");
  }
  return 0;
}
