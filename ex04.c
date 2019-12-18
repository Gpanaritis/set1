#include<stdio.h>
int main()
{
int a,b,c;
printf("give two integers \n");
scanf("%d%d",&a,&b);
c=a*b;
if (c>0 && c<10) printf("%d + %d = %d",a,b,a+b);
else if (c>100 && c<1000) printf("%d - %d = %d",a,b,a-b);
else printf("not eligible number");
}
