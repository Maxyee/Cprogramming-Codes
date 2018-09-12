#include <iostream>

using namespace std;

template <class X >
void swapargs(X &a , X &b){

X  temp;

temp = a;
a=b;
b =temp;


}
int main()
{
    int i = 10, j=20;
    float x =10.1 , y= 23.3;

    cout << "original i, j: " << i << " " << j << endl;
    cout << "original x, y: " << x << " " << y << endl;

    swapargs(i ,j);
    swapargs(x,y);

    cout << "swaped i ,j : "<< i << " " << j <<endl;
    cout << "swaped x, y : "<< x << " " << y <<endl;

    return 0;
}
