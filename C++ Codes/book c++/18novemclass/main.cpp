#‎include‬ <iostream>

using namespace std;

class shape{
int width;
int height;
public:
void seta(int x){
width = x;
}
void setb(int y){
height = y ;
}
int geta(){
return width;
}
int getb(){
return height;
}
};
class rectangle : public shape{
public:
int area(){ return geta()*getb(); }
};
class square : public shape{
public:
int area(){
return geta()*geta();
}
};
int main()
{
rectangle r;
r.seta(10);
r.setb(5);
cout << r.area() <<endl;
square s;
s.seta(10);
cout << s.area() << endl;
return 0;
}
