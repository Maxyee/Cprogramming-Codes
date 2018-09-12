#include<iostream>
using namespace std;

class base{
int x;
public:
void setx(int a){x=a;}
int getx(){return x;}
virtual void show(){cout<<"base"<<x<<endl;}
};

class derived:public base{
int y;
public:
void sety(int b){y=b;}
int gety(){return y;}
void show(){cout<<"base"<<y<<endl;}
};

int main()
{
    base *p;
    base ob_b;
    p=&ob_b;
    p->setx(10);
    p->show();

    derived ob_d;
    p=&ob_d;
    p->setx(100);
    ob_d.sety(50);
    p->show();
 //   cout<<"derived object x"<<p->getx()<<endl;
    cout<<"derived object y"<<ob_d.gety()<<endl;

}
