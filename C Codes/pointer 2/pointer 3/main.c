#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student
{
    char name[20];
    int id;
    float cgpa;
    int ph_no;

};
 int id;
    float cgpa;
    int ph_no;

void show(struct Student s[])
{
    int i;
    for(i=0;i<1;i++)
    {
        printf("\n id: %d \n",s[i].id);
        printf("cgpa: %f \n",s[i].cgpa);
        printf("ph_no: %d \n",s[i].ph_no);
    }
}
/*int id;
void modify(void)
{
    printf("Enter your choice:");
    scanf("%d",&id);
    if(id==1)
    printf("This is Asshole");
    else if(id==2)
    printf("This is not Asshole");
    else
    printf("Enter right choice !");
}*/
    char ch;
    int *p1= &id;
    float *p2= &cgpa;
    int *p3= &ph_no;

void nameChanger(void)
{
    printf("Enter your name:\n");
    scanf("%d",&ch);
}
/*void info(void)
{
    strcpy(s[0].name,"Sunny");
    s[0].id=1;
    s[0].cgpa= 3.95;
    s[0].ph_no = 8844;
}*/
int main()
{

    struct Student s[40];
    strcpy(s[0].name,"Sunny");
    s[0].id=1;
    s[0].cgpa= 3.95;
    s[0].ph_no = 8844;
    strcpy(s[1].name,"John");
    s[1].id=2;
    s[1].cgpa= 3.5;
    s[1].ph_no = 1234;
    nameChanger();
    show(s);
    return 0;
}
