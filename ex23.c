#include<stdio.h>

int main()
{
  int a[4],i,j,temp;
  for (i=0;i<4;i++)
  {
    printf("please enter number %d \n",i+1);
    scanf("%d",&a[i]);
  }
  for (i=1;i<=3;i++) //Èá öôéáîåé ìïíï ôá äõï ðñùôá øçöéá
  {
    for (j=3;j>=i;j--)
     {
        if (a[j-1]<a[j]) {temp=a[j-1]; a[j-1]=a[j]; a[j]=temp;}
     }
  }
  temp=a[0]+a[1];
  printf("The sum of the two highest is %d",temp);
  return 0;
}
