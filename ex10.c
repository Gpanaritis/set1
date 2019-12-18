#include <stdio.h>
#include <math.h>
int main()
{
int x,y;
float t;
double lx,ly;

printf("give x,y \n");
scanf("%d%d",&x,&y);

printf("x+y=%d \n",x+y);
if (x>y) {printf("x>y");}
if (x<y) {printf("x<y");}
else {printf("x=y");}
t=pow(x,y);
printf("\nx^y=%f \n",t);
lx=log10(x);
ly=log10(y);
printf("log10(%d)=%f and log10(%d)=%f",x,lx,y,ly);

return 0;
}

