#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num1;
    int num2;

    printf("Enter 2 numbers : ");
    scanf("%d",&num1);
    scanf("%d",&num2);

    if(num1==num2)
        {
            printf("they are equal");
        }
    if(num1<num2)
        {
            printf("%d is less then %d ", num1,num2);
        }
    if(num1>num2)
        {
            printf("%d is greater then %d",num1,num2);
        }
    getch();
}
