#include<stdio.h>
int main()
{
    int choice;
    float balance=10000.0;
    float amount,bonus;
    do{
      printf("enter value for choice");
      scanf("%d",&choice); 

      if(choice==1) 
     {
        printf("Enter amount to Deposit");
        scanf("%f",&amount);
        if(amount>25000)
        {
            bonus=amount*0.01; 
        balance+=amount+bonus;  
        }
        else
        {
            balance+=amount;
        }
        balance-=5; 
        printf("service charge 5 appiled\n");
        printf("updated balance is:%f\n",balance);
        }
        else if(choice==2) 
     { 
        printf("Enter amount to withdraw ");
        scanf("%f",&amount);
        if(amount>balance)
        {
            printf("Warning Insufficient funds.\n");
        }
        else{
            balance-=amount;
            balance-=5;
            printf("service charge 5 is applied\n");
            printf("updated balance is :%f\n",balance);
        }
        }
        else if(choice==3)
        {
        printf("your current balance is:%f\n",balance);
        }
        else if (choice==4)
        {
            printf("Thank you for banking with us ");
        }
    }
    while(choice!=4);
return 0;

}