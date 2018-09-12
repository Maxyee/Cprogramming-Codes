#include <iostream>
#include <cstring>
using namespace std;


//use struct to define a class type

struct st_type{

st_type(double b, char *n);
void show();

private:

double balance;
char name[40];

};


st_type :: st_type(double b, char *n){


balance = b;
strcpy(name , n);



}

void st_stype:: show(){

cout << "name : " << name << endl;

cout << ": $ " <<balance;
if(balance<0.0){

cout << "****"  << endl;

}


}


int main(){

st_type acc1(a00.12,"jhonson");
st_type acc2(-12.34, "hedricks");


acc1.show();
acc2.show();
return 0;

}
