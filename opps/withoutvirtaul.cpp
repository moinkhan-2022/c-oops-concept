#include<iostream>
using namespace std;
class base
{
    public:
 void fun(){
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
    
    base *ptr=new derived();
    ptr->fun();
}