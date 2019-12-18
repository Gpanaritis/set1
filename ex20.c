#include <stdio.h>
int main()
{
int pin=0,choice=0;
long int deposit;
unsigned long int money=100;
printf("what is your pin?\n");
scanf("%d",&pin);
while (pin!=2014) {printf("Wrong! Please try again\n"); scanf("%d",&pin);}
while (choice!=4)
{
printf("1) Available balance \n2) cash deposit\n3) cash withdrawal\n4) exit\n");
printf("what do you want to do?\n");
scanf("%d",&choice);
if (choice==1) {printf("your balance is %d\n",money);}
else if (choice==2)
    {printf("how much do you want to deposit?\n");
     scanf("%d",&deposit);
     while (deposit<0) {printf("please give positive value\n"); scanf("%d",&deposit);}
     money+=deposit;
     }
else if (choice==3)
  {
    printf("how much do you want to withdraw?\n");
    scanf("%d",&deposit);
    while(deposit>money){printf("the amount you are asking is not available\nplease enter new amount\n"); scanf("%d",&deposit);
    while(deposit%20){printf("the withrawal should be a multiple of 20\n"); scanf("%d",&deposit);}}

    money-=deposit;
  }
}
return 0;
}
