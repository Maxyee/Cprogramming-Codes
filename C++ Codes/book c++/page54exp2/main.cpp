#include <iostream>
#define size 10

using namespace std;


class stack {

char stck[size];
int tos;
char who;

public:
    stack(char c);
    void push (char ch);
    char pop();

};

stack :: stack(char c){

tos = 0 ;
who = c ;
cout <<  "constructor stack " << who << endl;


}

void stack :: push(char ch){

if(tos == size){

    cout << "stack" << who << "is full :" <<endl;
    return ;

}
stck[tos] = ch;
tos++;
}

char stack :: pop(){

if (tos == 0){

    cout << "stack" << who << "is empty" << endl;
    return 0;

}
tos--;
return stck[tos];

}
int main()
{
    stack s1('A') , s2('B');

    int i;

    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    for(i=0; i<5; i++){

        cout << "pop s1 : " <<  s1.pop() << endl;

    }

    for(i=0; i<5; i++){

        cout << "pop s2 : " <<  s2.pop()<< endl;

    }

    return 0;
}
