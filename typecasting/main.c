#include <stdio.h>
#include <stdlib.h>

int main()
{
   float avgprofit;
   int priceofpumkin=10;
   int sales=59;
   int daysworked=7;

   avgprofit= ((float)priceofpumkin * (float)sales)/(float)daysworked;

   printf("average daily profit : $%.2f",avgprofit);


   return 0;


}
