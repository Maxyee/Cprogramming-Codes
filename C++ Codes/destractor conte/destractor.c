#include <iostream>

#define size 10
using namespace std;

class stack
{

    char stck [size];
    int tos;

public:

     stack()
    {
        cout << "c tor" <<endl;
        tos = 0;
          }
    stack(int x){tos = x;

    cout << "c tor 2" <<endl;
    }

    ~stack(){

    cout << "d tor" <<endl;
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

    stack ob, ob2(0) ;

    ob.push('A');
    ob.push('B');

for (int i = 0; i<3 ; i++){

cout<<ob.pop()<<endl;

}

    return 0;
}
