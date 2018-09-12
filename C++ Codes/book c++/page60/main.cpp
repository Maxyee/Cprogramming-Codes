#include <iostream>

using namespace std;

//define base class

class B
{

    int i;

public:
    void set_i(int n);
    int get_i();


};

//define derive class

class D : public B
{

    int j;
public:
    void set_j(int n);
    int mul();

};

// set value i in base

void B::set_i(int n)
{

    i = n;

}

//return value of i in base.

int B :: get_i()
{

    return i;

}

// set value of j in derived.

void D :: set_j(int n)
{

    j = n;

}

//return  value of base,s i time derived,s j.

int D:: mul()
{

//derived class can call base class public member functions

    return j * get_i();


}
int main()
{
    D ob;
    ob.set_i(10);
    ob.set_j(4);

    cout << ob.mul();

    return 0;
}
