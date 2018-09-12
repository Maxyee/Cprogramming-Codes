#include <iostream>

using namespace std;

class Card
{

    /*
    int ID number;
    int Card number;
    int PIN;
    int Expiration date;
    */
public:
    Card();
    Card (string n);
    virtual int is_expired();
    virtual void print();

};

Card::Card()
{
    name=" ";
}

Card::Card(string n)
{
    name =n;
}

int Card::is_expired()
{
    return false;
}

class ID_card : public Card
{
    int ID_number;
public:
    ID_number(int ID):Card(ID)
    {

    }
    void print();


};


class Calling_Card : public Card
{
    int Card_number , PIN;
public:
    Card_PIN(int C ,int P):Card(C,P)
    {

    }
    void print();

};

class Driver_Licence : public Card
{
    int Expiration_date;
public:
    Expiration_date(int E):Card(E)
    {

    }
    void print();


};

int main()
{
    ID_card ob1(13);
    Calling_Card ob2(14,15);
    Driver_Licence ob3(16);

    ob1.print();
    ob2.print();
    ob3.print();

    return 0;
}
