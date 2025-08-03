#include<iostream>
using namespace std;
class base
{
    public:
    void display(){
        cout<<"BASE KA JALWA"<<endl;
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
    d.display();
    d.show();
}