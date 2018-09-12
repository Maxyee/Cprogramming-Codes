#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1;
  int num2;

  int multiplication;

  printf("please enter your  number : ");

  scanf("%d", &num1);
  scanf("%d", &num2);

  multiplication = num1*num2;

  printf("the result is : %d ", multiplication);

  getch();
}
