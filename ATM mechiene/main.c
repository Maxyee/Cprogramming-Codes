#include <stdio.h>
#include <stdlib.h>

int main()
{
    int balance = 0 ;
    int pin=1231 ;
    int tmpPin ;
    int anothertransaction=1;//do another transaction, 2no, not another transaction.
    printf("please enter your pin : ");
    scanf("%d",&tmpPin);

    if(pin != tmpPin)
    {
        printf("Invalid pin");
        return 0;
    }

    while(anothertransaction==1)
    {

        int option;

        printf("What do you want to do ?: \n");
        printf("1. check your balance\n");
        printf("2. Deposit \n");
        printf("3. withdraw \n");


        scanf("%d", &option);

        if(option==1)//check balance
        {
            printf("your balance is : $%d \n",balance);
        }
        else if(option==2)//deposit
        {
            int amountDeposit;
            printf("How much money do you want to deposit : $ \n" );
            scanf("%d", &amountDeposit);
            if(amountDeposit > 0)
            {
                balance += amountDeposit;
            }
            else
            {
                printf("Invalid deposit amount \n");
            }
        }
        else if(option==3)// withdraw
        {
            int amountwithdraw;
            printf("how much mone you want to withdraw : $ ");
            scanf("%d",&amountwithdraw);
            if(amountwithdraw <= balance && amountwithdraw % 20==0)
            {
                balance -= amountwithdraw;
            }
            else
            {
                if(amountwithdraw>balance)
                {
                    printf("you don't have enough money. Decline \n");
                }
                else
                {
                    printf("you must enter amount that is divisible by 20 \n");
                }
            }
        }
        else
        {
            printf("invalid transaction. \n");
        }

        anothertransaction = 0;

        while(anothertransaction != 1 && anothertransaction != 2)
        {
            printf("Do you want to another transaction: \n");
            printf("1 - yes, 2 - no \n");
            scanf("%d", &anothertransaction);
        }
    }
    return 0;
}
