#include<stdio.h>
int main()
{
int n,a,b,c,i=1,count=1,max=0;

printf("how many times?");
scanf("%d", &n);

printf("give number");
scanf("%d", &b);

while (i<=n-1)
{
printf("give number");
scanf("%d", &a);

if (b==a) count++;
else count=1;
b=a;

if (count>max) {max=count; c=a;}
i++;
}
printf("The highest number %d appeared %d times cosecutively",c,max);
return 0;
}
