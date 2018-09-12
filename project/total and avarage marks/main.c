#include<stdio.h>
#include<conio.h>

int main()
{

int b[10],j,sum=0;
float av;



for(j=1;j<=10;j++)
{
printf("ENTER THE %d NUMBER:--" ,j);
scanf("%d",&b[j] );
}
for(j=1;j<=10;j++)
printf("\nthe numbers are %d",b[j]);
for(j=1;j<=10;j++)
sum=sum+b[j];
printf("\n THE SUM OF  NUMBERS ARE: %f",sum);
av=sum/10;
printf("\n THE AVERAGE OF  NUMBERS R:%2.2f",av);
getch();
}

