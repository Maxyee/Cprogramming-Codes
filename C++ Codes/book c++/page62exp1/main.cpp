// An example of class inheritance
#include <iostream>
#include <cstring>

using namespace std;

enum yn {no,yes};
enum color {red,yellow,green,orange};

void out (enum yn x);

char *c[] = {

"red" , "yellow" , "green" , "orange"

};

//generic fruit class.

class fruit{

//in the base all elements are public

public:

    enum yn annual;
    enum yn perennial;
    enum yn tree;
    enum yn tropical;
    enum color clr;
    char name[40];



};

// derive apple class.

class apple : public fruit {

enum yn cooking;
enum yn crunchy;
enum yn eating;

public:
    void seta(char *n, enum color c, enum yn ck, enum yn crchy , enum yn e);

    void show();


};

//derive class orange

class orange: public fruit{

enum yn juice;
enum yn sour;
enum yn eating;

public:
    void seto(char *n, enum color c, enum yn j, enum yn sr, enum yn e);

    void show();

};

void apple ::seta(char *n, enum color c, enum yn ck, enum yn crchy , enum yn e){

strcpy(name, n);
annual = no;
perennial = yes;

tree = yes;

tropical = no;
clr = c;
cooking = ck;
crunchy = crchy;
eating = e;

}

void orange :: seto(char *n, enum color c, enum yn ck, enum yn crchy , enum yn e){

strcpy(name, n);
annual = no;
perennial = yes;
tree = yes;
tropical = yes;
clr =c;
juice = j;
sour =sr;
eating =e;



}

void apple ::show(){

cout << name << " apple is :  " << endl;
cout << "annual : " ;out (annual);
cout << "perennial : " ;out(perennial);
cout << "tree : " ;out(tree);
cout << "tropical : " ;out(tropical);
cout << "color : " << c[clr] <<endl;
cout << "good for cooking : "; out(cooking);
cout << "crunchy : " ; out(crunchy);
cout << "good for eating : " ; out(eating);
cout << "\n" ;




}

void orange :: show(){

cout << name << " orange is :  " << endl;
cout << "annual : " ;out (annual);
cout << "perennial : " ;out(perennial);
cout << "tree : " ;out(tree);
cout << "tropical : " ;out(tropical);
cout << "color : " << c[clr] <<endl;
cout << "good for juice : " ; out(juice);
cout << "sour : " ;out(sour);
cout << "good for eating : " ; out(eating);
cout << "\n";
}


void out(enum yn x){

if(x == no){
    cout << "no" << endl;
}
    else{
        cout << "yes" << endl;
    }



}
int main()
{
    apple a1, a2;
    orange o1, o2;

    a1.seta("red delicious" , red ,no, yes, yes);
    a1.seta("jonathan", red,yes, no,yes);

    o1.seto("navel" , orange, no, no, yes);
    o2.seto("valencia", orange, yes,yes , no);

    a1.show();
    a2.show();

    o1.show();
    o2.show();

    return 0;
}
