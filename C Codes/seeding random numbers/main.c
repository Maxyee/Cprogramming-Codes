#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0;

    srand(time(NULL));

    while(i<15){
    printf("%d\n",rand());
    i++;
    }
    return 0;
}
