#include <iostream>

using namespace std;


class batsman
{

    int bcode;
    char bname[20];
    int run;
    int innings;
    int notout;
    double bavg;

    void cal_avg()
    {

        bavg = run / (innings -notout);

    }

public:

    void read()
    {

        cin >> bcode;
        cin >> bname;
        cin >> run;
        cin >> innings;
        cin >> notout;
        cin >> bavg;
        cal_avg();

    }

    void display()
    {

        cout << "bcode : "  <<bcode<< endl;
        cout << "batsman name: " << bname << endl;
        cout <<  "Run : "<< run << endl;
        cout << "innings : "<<innings<<endl;
        cout <<  "Notout : "<< notout << endl;
        cout  << "bavg : "<< bavg <<endl;



    }

};

int main()
{

batsman obj;
obj.read();
obj.display();

return 0;


}
