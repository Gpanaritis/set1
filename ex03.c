#include<stdio.h>
int main()
{
int a,i=1,s=0;
float m;
while (i<=10)
{
printf("give grade");
scanf("%d",&a);
s+=a;
i++;
}
m=s/10;
if (m<5) printf("failed");
else printf("success");
return 0;
}
