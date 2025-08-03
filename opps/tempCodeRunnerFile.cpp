#include<iostream>
using namespace std;
class base
{
    public:
   virtual void fun(){
        cout<<"base"<<endl;
    }
};
class derived:public base{
public:
    void fun(){
        cout<<"derived"<<endl;
    }
};
int main(){
    derived d;
    base *ptr=&d;
    ptr->fun();
}