#include <iostream>

using namespace std;

class myclass{

int a;
public:
    myclass(); //constructor
    ~myclass(); //destructor
    void show();

};

myclass :: myclass(){

cout << "in constructor" << endl;
a=10;

}

myclass :: ~myclass(){

cout << "destructing....." << endl;

}

void myclass :: show(){

cout << a << endl;


}

int main()
{
    myclass ob;
    ob.show();
    return 0;
}
