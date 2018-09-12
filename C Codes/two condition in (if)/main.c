#include <stdio.h>
#include <stdlib.h>

int main()
{
    int eyes;
    int toes;
    printf("Enter the number of your eyes and toes : ");
    scanf("%d%d",&eyes,&toes);

    if(eyes==2 && toes==10)
    {

        printf("you are normal");
    }
    else
    {
        printf("you are weird");
    }
    return 0;
}
