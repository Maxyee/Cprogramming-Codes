#include <iostream>

using namespace std;

double rect_area(double length,double width=0)
{
    if(!width) width =length;
    return length *width;
}
int main()
{
    cout << " 10 * 5.8 rectangle has a area : " <<endl;
    cout << rect_area(10,5.8)<<endl;

    cout << " 10 * 10 square has a area : " <<endl;
    cout << rect_area (10,10)<<endl;
    return 0;
}
