#include <iostream>

using namespace std;

int main()
{
    int i; // local variable declared at start of blocks

    cout << "enter number: " ;

    cin >> i;

    // compute factorial

    int j , fact = 1;  // vars declared after action statements

    for(j=i; j>=1; j--){

        fact = fact * j ;
    }

    cout << "Factorial is : " << fact << endl;

    return 0;
}
