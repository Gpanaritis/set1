#include <stdio.h>
int main()
{
double d;
float f;

printf("give double number");
scanf("%lf",&d);
f= (float)d;
printf("double is %.12f and float is %.12f",d,f);
return 0;
}
