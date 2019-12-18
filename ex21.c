#include<stdio.h>
#define pxr 12
#define fpat 0.23
#define timet 0.02
#define smst 0.14
float positive(float x);

int main()
{
int code;
float time,sms,fpa,total;
printf("please give your customer code\n");
scanf("%d",&code);
while (code<=0 || code/1000==0 || code/1000>9) {printf("please enter a four digit number\n"); scanf("%d",&code);}
printf("please enter talk time\n");
time=positive(time);
printf("please enter amount of messages\n");
sms=positive(sms);
time=time*timet;
sms=sms*smst;
fpa=(time+sms)*fpat;
total=time+sms+fpa;
printf("Tmob account\n");
printf("---------------------------------------------\n");
printf("Customer code time  SMS  FPA | TOTAL\n");
printf("%d          %.1f  %.1f  %.1f | %.3f\n",code,time,sms,fpa,total);
printf("_____________________________________________");
return 0;
}

float positive(float x)
{
scanf("%f",&x);
while (x<0) {printf("please give positive value\n"); scanf("%f",&x);}
return x;
}
