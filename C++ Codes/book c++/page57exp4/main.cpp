#include <iostream>

using namespace std;

class myclass{

int i , j ;
public:
    myclass(int a, int b);
    void show();


};

myclass :: myclass(int a ,int b){

i=a ;
j=b ;

}

void myclass :: show(){

cout << i << " " << j << endl;

}

int main(){

    int x , y ;

    cout << "enter two integers : "  ;
    cin >> x >> y;

    myclass ob(x ,y);

    ob.show();

    return 0;
}
