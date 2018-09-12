#include <iostream>
#define size 10

using namespace std;


class queue{

char que[size];     // holds the que.
int tos;            // index top of que

public:
    queue(){

    cout << "constructor " << endl;
    tos = 0;

    }
    queue(int x){tos = x;

    cout << "constructor " << endl;


    }                                // constructor
    ~queue(){

    cout << " destructor " << endl;

    }                        //destructor

    void enqueue(char ch);  // enqueue character on queue;
    char dequeue ();        // dequeue character on queue;

};

// enqueue a character .

void queue :: enqueue(char ch){

if(tos==size){

    cout << "queue is full" << endl;
    return;
}
que[tos] = ch;
tos++ ;


}

//dequeue a character .

char queue :: dequeue(){

if(tos==0){

    cout << "queue is empty" << endl;
    return 0;         // return null on empty queue
}
tos--;
return que[tos];


}

int main()
{
    queue ob1,ob2;
    ob1.enqueue('A');
    ob2.enqueue('X');
    ob1.enqueue('B');
    ob2.enqueue('Y');
    ob1.enqueue('C');
    ob2.enqueue('Z');

    for(int i=0; i<3; i++){

        cout << ob1.dequeue() << endl;

    }
    for(int i=0;i<3 ; i++){

        cout << ob2.dequeue() << endl;
    }

    return 0;
}
