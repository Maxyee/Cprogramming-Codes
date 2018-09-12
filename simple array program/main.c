#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mohon[5]= {21,18,47,21,7};
    int i;
    int total=0;

    for(i=0; i<5; i++)
    {

        total += mohon[i];
    }
    printf("the total number is %d",total);

    return 0;
}
