#include <stdio.h>
#include <stdlib.h>

int main()
{
    int friends = 87;// if 1 then it will print only friend ,on friends....

    printf("i have %d friend%s",friends, (friends !=1) ? "s"  : "");


    /*

    char lastname[20];
    printf("Enter your last name : \n");

    scanf("%c",lastname);

    (lastname[0]<'M') ? printf("blue team") : printf("red team");*/
    return 0;
}
