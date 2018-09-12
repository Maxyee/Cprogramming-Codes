#include <iostream>
#include <string>

using namespace std;

class student
{
    int id;
    string first_name;
    double cgpa;
public:
    int set_id(int i){id = i;}
    string set_name();
    double set_cgpa(double c){cgpa = c;}

    int get_id(){return id;}
    string get_name();
    double get_cgpa(){return cgpa;}

};

