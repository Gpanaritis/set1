#include<stdio.h>
int pow1(int x, int y);
int positive(int x);
int main()
{
int n,i;
long int s3=0,sI=0;
printf("how many digits you want to produce?\n");
n=positive(n);
for (i=1;i<=n;i++)
 {
 s3+=pow1(i,3);
 sI+=pow1(i,i);
 //while: i=1 while (i<=n) ... i++
 //do: i++ ...  while (i<=n)
 }
printf("The sum of i^3=%d\nThe sum of i^i=%d",s3,sI);
return 0;
}

int positive(int x)
{
scanf("%d",&x);
while (x<=0) {printf("please give positive value\n"); scanf("%d",&x);}
return x;
}

int pow1(int x, int y)
{
int i;
long int res=1;
for(i=1; i<=y; i++)
 {
 res=res*x;
 }
return res;
}
