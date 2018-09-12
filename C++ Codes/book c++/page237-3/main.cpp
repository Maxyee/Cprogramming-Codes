#include <iostream>

using namespace std;

class base
{

    int x;
public:

    void setx(int a)
    {

        x=a;

    }
    int getx()
    {

        return x;
    }

};

class derived : private base
{

    int y;

public:
    void sety(int a)
    {

        y=a;

    }

    int gety()
    {
        return y;

    }

};

int main()
{

    derived b;
    b.sety(15);
    cout << b.gety();
    //b.setx(100);
    //cout << b.getx();
    return 0;




}

