#include<iostream>
using namespace std;
class base
{
    public:
    int a;
    void display(){
        cout<<"BASE KA JALWA"<<endl<<a<<endl;
    }
};
class derived: public base{
    public:
    void show(){
        cout<<"SHOW KA JALWA"<<endl;
    }
};
int main(){
derived d;
   // base b;
   d.a=100;
    d.display();
    d.show();
}