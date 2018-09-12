#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "Enter keys, x 'to stop.. : " << endl;

    do {
        cout << " : " << endl;
        cin >> ch;

    }
    while (ch  = 'x');
    return 0;
}
