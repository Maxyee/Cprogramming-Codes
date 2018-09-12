#include <stdio.h>
#include <stdlib.h>

int main()
{
    char answer;

    printf("Do you like burger? (y/n) \n: ");

    scanf("%c",&answer);

    if((answer=='y')||(answer=='n')){
        printf("You are a fatty guy....:P");
    }
    else{
        printf("keyboard much");
    }

    return 0;
}
