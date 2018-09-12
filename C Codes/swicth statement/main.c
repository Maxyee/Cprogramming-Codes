#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    scanf("%d",&number);

    switch(number)
    {

    case 2:
        printf("you press 2");
        break;

    case 4:
        printf("you press 4");
        break;

    case 6:
        printf("you press 6");
        break;

    case 8:
        printf("you press 8");
        break;

    default :
        printf("i dont know the number what you entered");


    }
    return 0;
}
