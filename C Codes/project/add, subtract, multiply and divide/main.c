#include <stdio.h>
#include <stdlib.h>



    int add (int x, int y)
{
    int z;
    z = x + y;
    return (z);
}
int sub(int x, int y)
{
    int z;
    z = x - y;
    return (z);
}
int mul(int x, int y)
{
    int z;
    z = x * y;
    return (z);
}
int div(int x, int y)
{
    int z;
    z = x / y;
    return (z);
}
int main ()
{
    int i,j,k,l,m,n;
    i = 10;
    j = 20;
    k = add(i, j);
    l=sub(i,j);
    m=mul(i,j);
    n=div(i,j);
    printf("\n Sum %d",k);
    printf("\n Subtraction %d",l);
    printf("\n Multiplication %d",m);
    printf("\n divide %d",n);
}

