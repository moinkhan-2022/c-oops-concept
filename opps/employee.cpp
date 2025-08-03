#include<iostream>
using namespace std;
class employee{
    private:
    int eid;
    string name;
    public:
    employee(int e,int n){
         eid=e;
         name=n;
    }
    int getEmpolyeeID(){return eid};
    int getName(){return name;}
};
class fulltimeemployee:public employee{
    private:
    int salary;
    public:
   fulltimeemployee(string n,int e,int sal):employee(e,n){
    salary=sal;
   } intgetSalary(){return salary;}
};
class parttimeemployee:public employee{
    private :
    int wages;
    public:
    parttimeemployee(string n,int e,int w):employee(e,n){
        wages=w;
    }
    intgetWages(){return wages;}
};
int main(){
    parttimeemployee p1(1,"sambhav",250);
    fulltimeemployee p2(2,"Abhay",25000);
    cout<<"slary of"<<p2.getName<<"is"<<p2.getSalary<<endl;
    cout<<"daily wages of"<<p1.getName<<"is"<<p1.getwages<<endl;
}