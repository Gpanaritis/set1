#include<stdio.h>
#include<math.h>
int main()
{
int N,s=0,i=1;

printf("give an integer ranging 0-10\n");
scanf("%d",&N);

while (N==0 || i!=N+1)
{
if(N>0 && N<10)
{
s+=pow(4*i,2);
i++;
}
else{printf("give an integer ranging 0-10\n"); scanf("%d",&N);}
}
printf("the expression is %d",s);
return 0;
}
