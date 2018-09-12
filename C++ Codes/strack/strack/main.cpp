#include <iostream>
#define size 10
using namespace std;

class stack
{

    char stck [size];
    int tos;

public:

    void init()
    {
        tos = 0;
          }
    void push(char);
    char pop();
};

void stack :: push(char ch)
{

    if(tos== size)
    {

        cout<< "stack full"<< endl;
        return ;

    }

    stck [tos] = ch;
    tos++;
}

char stack :: pop()
{

    if(tos==0)
    {
        cout<< "stack empty" << endl;
        return 0;

    }

    tos -- ;
    return stck[tos];
}

int main()
{

    stack ob ;
    ob.init();
    ob.push('A');
    ob.push('B');

for (int i = 0; i<3 ; i++){

cout<<ob.pop()<<endl;

}

    return 0;
}




