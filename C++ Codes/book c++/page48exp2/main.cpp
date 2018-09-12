#include <iostream>
#include <cstring>
#include <cstdlib>
#define size 255

using namespace std;

class strtype{

char *p;
int len;
public:
    strtype(); // constructor function
    ~strtype(); // destructor function
    void set (char *ptr);
    void show();


};

// initialize a string object

strtype :: strtype(){

p = (char *) malloc(size);
if(!p){

    cout << "Allocation " <<  endl;
    exit(1);


}
*p = '\0';
len = 0;


}

// free memory when destroying string object

strtype :: ~strtype(){

cout << "freeing p \n" ;
free(p);


}
void strtype:: set(char *ptr){

if(strlen (p) >= size){


    cout << "string too big \n" << endl;
    return;

}
strcpy(p,ptr);
len = strlen(p);
}

void strtype :: show(){

cout << p << " - length : " <<  len << endl;
cout << "\n";


}

int main()
{
    strtype s1, s2;

    s1.set("this is a test");
    s2.set("i like c++ ");

    s1.show();
    s2.show();
    return 0;
}
