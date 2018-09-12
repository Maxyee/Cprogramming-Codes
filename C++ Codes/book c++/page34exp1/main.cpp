#include <iostream>

using namespace std;
//overload abs() three
int abs(int n);
long abs(long n);
double abs(double n);


int main()
{
    cout << "Absolute value of -10 : " << abs(-10) << endl;
    cout << "Absolute value of -10L : " << abs(-10L) << endl;
    cout << "Absolute value of -10.01 : " << abs(-10.01) << endl;

    return 0;
}

// abs() for ints

int abs(int n){

cout << "in integer abs()" << endl;

return n<0 ? -n : n;


}

//abs() for longs

long abs(long n){

cout << "in long abs() : " <<endl;

return n<0 ? -n: n;

}

//abs() for doubles

double abs(double n){

cout << " in double abs() : " << endl;

return n<0 ? -n : n ;

}
