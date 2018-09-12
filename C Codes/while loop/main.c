#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(void)
{
    int loopcounts;
    int hotdogs;
    int total;
    int avarage;
    total=0;
    loopcounts=0;

    while(loopcounts>5)
    {
        printf("Enter number of dogs ate : ");
        scanf("%d",&hotdogs);
        total=total+hotdogs;
        loopcounts=loopcounts+1;
    }

    avarage=total/5;
    printf("total number of dogs was %d",avarage);

    getch();
}
