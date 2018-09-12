#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("How old are you ?\n");
    scanf("%d",&age);

    if(age>=18)
    {

        printf("you may inter this website");

    }
    if(age<18)
    {

        printf("you may not enter this website");
    }
    return 0;
}
