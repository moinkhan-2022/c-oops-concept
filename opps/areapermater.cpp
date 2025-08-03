#include<iostream>
using namespace std;
class rectangle{
public:
int length;
int breadth;
int area(){
    return length*breadth;
}
int perimeter(){    
    return 2*(length+breadth);
}   
};
int main(){
    rectangle r1,r2,r3,r4;
    r1.length=50;
    r1.breadth=100;
    r2.length=20;
    r2.breadth=10;
    cout<<"area 1 is"<<r1.area()<<endl<<"area 2 is"<<r2.area()<<endl;
    cout<<"peri 1 is"<<r1.perimeter()<<endl<<"peri 2 is"<<r2.perimeter()<<endl;
    
    
}