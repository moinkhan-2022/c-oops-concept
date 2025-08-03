#include<iostream>
using namespace std;
class student
{
    public:
    int math;
    int chem;
    int phy;
    int totalmarks(){
        return math+chem+phy;
    }
};
int main(){
    student s1;
    s1.math=80;
    s1.chem=90;
    s1.phy=100;
    cout<<s1.totalmarks()<<endl;
}