#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    char gender;

    printf("How old are you ?\n");
    scanf(" %d",&age);

    printf("what is your gender (m/f) \n");
    scanf(" %c",&gender);

    if(age>=18)
    {

        printf("you may inter this website");

        if(gender=='m')
    {
        printf(" dude");
        }

       else
    {
        printf(" My lady");
        }

    }
    else
    {
        printf("you may not enter this website");
    }
    return 0;
}
