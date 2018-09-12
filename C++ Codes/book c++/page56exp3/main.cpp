#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class strtype{

char *p;
int len;
public:
    strtype(char *ptr);
    ~strtype();
    void show();


};

strtype :: strtype(char *ptr){

len = strlen(ptr);
p = (char *) mallc(len+1);
if(!p){
    cout << "Allocation error" <<endl;
    exit(1);
}
strcpy(p,ptr);

}

strtype :: ~strtype(){

cout << "Freeing p :" <<endl;
free(p);

}

void strtype :: show(){

cout << p << "- length : " << len;
cout << " \n";

}
int main()
{
    strtype s1("This is a test : ");

    strtype s2("I like c++");

    s1.show();
    s2.show();

    return 0;
}
