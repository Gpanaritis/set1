#include<stdio.h>
#include<math.h>
int main()
{
  int b[4][10],i,j;
  for (j=1;j<=10;j++)
  {
    b[0][j-1]=j;
    b[1][j-1]=j*2;
    b[2][j-1]=j*3;
    b[3][j-1]=j*10;
  }
  for (j=1;j<=10;j++)
  {
    for (i=1;i<=4;i++)
    {
      printf("%d  ", b[i-1][j-1]);
    }
    printf("\n");
  }
  
  return 0;
}
