#include <stdio.h>
#include <math.h>
 int main()
{
float a,b,c,d;
double x1,x2;

printf("give a,b,c to ax^2+bx+c \n");
scanf("%f%f%f",&a,&b,&c);

d=b*b-4*a*c;

if(a==0 && b==0){if (c==0) printf("it applies"); else printf("no known solution");}
else if (d<0) printf("no solution");
else
{
x1=((-b)+sqrt(d))/2*a;
x2=((-b)-sqrt(d))/2*a;

printf("%fx^2 + %fx + %f",a,b,c);
printf("\nx1=%f and x2=%f",x1,x2);
}
return 0;
}
