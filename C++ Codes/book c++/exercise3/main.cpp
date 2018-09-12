
// converting c program to c++ .....


#include <iostream>

using namespace std;

int main(void)
{
    int a , b , d , min;

    cout << "enter  tow numbers : " << endl;
    cin >> a , b ;

    min =  a > b ? b : a;

    for(d=2; d<min ; d++)
        if(((a%d)==0) && ((b%d)==0));


    if(d==min){
        cout << "no common denominators" << endl;
        return 0;
    }

    cout << "the lowest common denominator is" << d << endl;
    return 0;
}
