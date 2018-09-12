#include <iostream>
#include <cstring>>
#include <cstdlib>


using namespace std;

struct strtype {

strtype(char *ptr);
~strtype();
void show();

private:
    char *p;
    int len;
};

strtype::strtype(char *ptr){

len= strlen(ptr);
p=(char *) malloc(len+1);

if(!p){
    cout <<"allocation error " <<endl;
    exit(l);
}
strcpy(p,ptr);

}

strtype :: ~strtype(){

cout << "freeing" << endl;
free(p);

}

void strtype:: show(){

cout << p << "- length : " << len <endl;

}

int main()
{
    strtype s1("this is a test.") , s2("i like c++");

    s1.show();
    s2.show();

    return 0;
}
