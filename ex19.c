#include<stdio.h>

int main()
{
  int f[3],N,i=1,j;
  f[0]=0;
  f[1]=1;
  
  printf("How many numbers you want to see (max 20)\n");
  scanf("%d",&N);
  
  if(N>20) N=20;

  while (i<=N)
  {
    for (j=1; j<=5;j++)
    {
      f[2]=f[0]+f[1];
      printf("%d ",f[0]);
      f[0]=f[1];
      f[1]=f[2];
      i++;
      if (i>N) break;
    }
    printf("\n");
  }
  return 0;
}
