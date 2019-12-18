#include<stdio.h>
#include <math.h>

int main()
{
double x,y1,y2;
printf("give x");
scanf("%lf",&x);
y1=pow(x,5)-pow(x,3)+3*x;
y2= exp(x)+4*log(x)-x*x;
printf("y1=%f and y2=%f",y1,y2);
return 0;

}
