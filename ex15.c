#include<stdio.h>
#include<math.h>
int main()
{
int a,b[5],i,c=1;

printf("give five digit number\n");
scanf("%d",&a);
while(a<=0 || a/10000==0 || a/10000>9) {printf("give five digit number\n"); scanf("%d",&a);}
for (i=0;i<=4;i++)
{
 b[i]=(a/c)%10;
 c=c*10;
 printf("%d",b[i]);
}

return 0;
}
