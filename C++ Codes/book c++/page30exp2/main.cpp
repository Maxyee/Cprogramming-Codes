// this program dont return a value . need prototype.



#include <iostream>

using namespace std;

int main()
{
    int a,b,c ;


    cout << "enter two numbers:  " << endl;

    cin >> a >> b ;

    c = sum( a , b);

    cout << "sum is  :  " << c << endl;

    return 0;
}


//this function need a prototype.


sum(int a , int b){

return a+b;

}
