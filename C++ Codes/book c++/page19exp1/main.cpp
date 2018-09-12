


/*this is a c like comment

this program determines whether
an integer is off or even

*/


#include <iostream>

using namespace std;

int main()
{
    int num; // this is a c++ single line comment .


    // read the number

    cout << "Enter number to be tested : " << endl;
    cin >>  num;

    // see if even or odd.

    if ((num%2) == 0 ){

        cout << "number is even : " << endl;

        }
        else {
            cout << "number is odd  : " <<endl;
         }

    return 0;
}
