#include<stdio.h>

int main()
{
float i,m,e,d;
char n;
printf("Do you want to convert money or distance m:d\n");
scanf("%c",&n);
while (n!=="m" || n!=="d" ) { printf("give m or d\n"); scanf("%c",&n);}
if (n=="m")
{
printf("give money in euro");
scanf("%f",&e);
d=340,75*e;
printf("in drachma it is %f",d);
}
else
{
printf("give distance in meters");
scanf("%f",&m);
i=0.0254*m;
printf("in inches it is %f",i);
}

return 0;
}
