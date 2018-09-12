#include <iostream>


using namespace std;
int main()
{
int num1;
int num2;
int oparation;
int Result;
cout << "Enter number-1 : " << endl;
cin >> num1;
cout << "Enter number-2 : " << endl;
cin >> num2;
cout << "Enter oparation(1-4) : 1 for add , 2 for sub , 3 for multi,4 for divide " << endl;
cin >> oparation;
if (oparation == 1)
{
Result = num1 + num2;
}
else if (oparation == 2)
{
Result = num1- num2;
}
else if (oparation == 3)
{
Result = num1 * num2;
}
else if (oparation ==4 )
{
Result = num1 / num2;
}
cout << "result is : " << Result <<endl;
return 0;
}
