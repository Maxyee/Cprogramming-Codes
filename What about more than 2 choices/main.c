#include <stdio.h>
#include <stdlib.h>

int main()
{
    float grade1;
    float grade2;
    float grade3;

    printf("Enter your 3 test grades :  \n");

    scanf(" %f",&grade1);
    scanf(" %f",&grade2);
    scanf(" %f",&grade3);

    float avg = (grade1+grade2+grade3)/3;
    printf("average : %.2f\n",avg);

    if(avg>=90)
    {
        printf(" the grade is A+");
    }
    else if(avg>=80){
        printf(" the grade is A");

    }
    else if(avg>=70){
        printf(" the grade is B");

    }
    else if(avg>=60){
        printf(" the grade is F");
    }
    else{
        printf(" the grade is Fail");
    }
    return 0;
}
