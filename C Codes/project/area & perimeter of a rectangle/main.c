#include <stdio.h>
#include <stdlib.h>


int main(){

    float l,w;
    float area;

    printf("Enter size of each sides of the rectangle : ");
    scanf("%f%f",&l,&w);

    area = l * w;
    printf("Area of rectangle is: %.3f",area);

    return 0;
}
