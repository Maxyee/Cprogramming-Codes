#include<stdio.h>

int Room_booking()
{
    int number,room,room_no,total_day,cost,total_cost,advance,Due_amount,choose,press,i;


    printf("\nName         : ");
    char name[50];
    scanf("%s", name);

    printf("\nPhone Number : ");
    scanf("%d",&number);

    do
    {
        printf("\n\nFor Ac Room Press     : 1\nFor Non Ac Room Press : 2\n\nEnter : ");
        scanf("%d",&choose);
    }
    while(choose!=1 && choose!=2);



    switch(choose)
    {
        case 1:
        {

            do
            {
                printf("\n\nFor Single Room Press 1\nFor Couple Room Press 2\nFor Deluxe Room Press 3\n\nEnter : ");
                scanf("%d",&press);
            }
            while(press!=1 && press!=2 && press!=3);

            printf("\n\nTotal Room : ");
            scanf("%d",&room);
            for(i=1; i<=room; i++)
            {
                printf("\nAvailable Room No.  : ");
                scanf("%d",&room_no);
            }
            printf("\nTotal Day  : ");
            scanf("%d",&total_day);
            printf("\n\nRoom Rent :");
            scanf("%d",&cost);
            total_cost=cost*room*total_day;
            break;

        }

        case 2:
        {

            do
            {
                printf("\n\nFor Single Room Press 1\nFor Couple Room Press 2\nFor Deluxe Room Press 3\n\nEnter : ");
                scanf("%d",&press);
            }
            while(press!=1 && press!=2 && press!=3);

            printf("\n\nTotal Room : ");
            scanf("%d",&room);
            for(i=1; i<=room; i++)
            {
                printf("\nRoom Type  : ");
                scanf("%d",&room_no);
            }
            printf("\nTotal Day  : ");
            scanf("%d",&total_day);
            printf("\n\nRoom Rent :");
            scanf("%d",&cost);
            total_cost=cost*room*total_day;
            break;

        }

    }
    printf("\n\nTotal Payment Cost : %d BDT",total_cost);
    printf("\n\nAdvance            : ");
    scanf("%d",&advance);
    Due_amount=total_cost-advance;
    printf("\nDue Amount         : %d BDT",Due_amount);
    printf("\n\n\nConfirmation Message sent to %d ",number);
    printf("\n\n\n\n            ||Booking Confirmed||\n\n");
    printf("                  THANK YOU\n\n");


    return 0 ;
}

int main()
{
	printf("               ________________________\n");
    printf("               || HOTEL OBSIDIAN ORB ||\n");
    printf("               ||____________________||\n\n");
    printf("             <><|><> Access Menu <><|><>\n\n");
    printf("    ==============Air Conditioned==============\n\n");
    printf("    1. Single Room    Costs per night> 3000 BDT\n    2. Couple Room    Costs per night> 4000 BDT\n    3. Deluxe room    Costs per night> 5000 BDT\n\n");
    printf("    ============Non Air Conditioned============\n\n");
    printf("    1. Single Room    Costs per night> 2000 BDT\n    2. Couple Room    Costs per night> 3000 BDT\n    3. Deluxe room    Costs per night> 4000 BDT\n\n");
    Room_booking();
    return 0;
}
