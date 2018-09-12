#include <iostream>
#include <list>
using namespace std;

int main(){

list <char> lst;
int i;

for(i = 0 ; i<10 ; i ++){
    lst.push_back('A'+i);
}

cout << "size = " << lst.size() <<endl;

list<char>::iterator p;

cout << "contents: " << endl;

while(!lst.empty()){

    p =lst.begin();
    cout << *p << endl;
    lst.pop_front();

    return 0;
}






}
