#include <iostream>
#define size 10
using namespace std;


class stack{

char stck[size]; // holds the stack
int tos;
public:
    stack(); // constructor
    void push(char ch); //push character on stack

    char pop(); // pop character from stack




};


//initialize the stack;


stack :: stack(){

cout << "constructing a stack" << endl;

tos = 0;



}

// push a character

void stack :: push(char ch){

if(tos == size){

    cout << " stack is full" << endl;
    return;
}
stck[tos] = ch;
tos++;

}

// pop a character

char stack :: pop(){

if(tos == 0){

    cout << "stack is empty " << endl;
    return 0;
}

tos -- ;
return stck[tos];
}



int main()
{
    stack s1, s2;

    s1.push('a');
    s2.push('x');
    s1.push('b');
    s2.push('y');
    s1.push('c');
    s2.push('z');

    for(int i=0; i<3; i++){

        cout << "pop s1 :" << s1.pop() << endl;

    }

    for(int i=0 ; i<3 ; i++){

        cout << "pop s2 : " << s2.pop() << endl;

    }
    return 0;
}
