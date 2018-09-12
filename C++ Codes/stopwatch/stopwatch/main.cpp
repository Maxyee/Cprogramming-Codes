#include <iostream>
#include <ctime>

using namespace std;

class Stopwatch
{

    double begin,end;

public:
    inline Stopwatch()
    {
        begin=end=0;
    }
    ~Stopwatch()
    {
        cout<< "destractor"<<endl;

        show();

    }

    void start();
    void stop();
    void show();
};

void Stopwatch::start()
{

    begin = (double) clock()/CLOCKS_PER_SEC;
}

void Stopwatch::stop()
{

    end = (double) clock()/CLOCKS_PER_SEC;
}

void Stopwatch::show()
{

    cout<< "Elapsed time:" << end-begin <<endl;
}

int main()
{
    Stopwatch watch;
    watch.start();
    // for ( int i=0; i<64000; i++)
    int i;
    cin >> i ;
    watch.stop();
    watch.show();
    return 0;
}
