#include <stdio.h>
#include <math.h>

int main()
{
float ax,bx,by,ay;
double d;
printf("give 'a' coordinates \n x=");
scanf("%f",&ax);
printf(" y=");
scanf("%f",&ay);
printf("give 'b' coordinates \n x=");
scanf("%f",&bx);
printf(" y=");
scanf("%f",&by);
d=sqrt(pow(ax-bx,2)+pow(ay-by,2));
printf("distance is %f",d);

return 0;
}
