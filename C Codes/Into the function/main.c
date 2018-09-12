#include <stdio.h>
#include <stdlib.h>


int findarea(int x, int y);



int main()
{
    int one;
    int two;
    scanf("%d%d", &one , &two);
    printf("%d",findarea(one,two));
}


int findarea(int x, int y)
{

    return x*y;
}
