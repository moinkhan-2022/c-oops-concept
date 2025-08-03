#include<iostream>
using namespace std;
class student {
    private:
    int roll;
    string name;
    int mathmarks;
    int chemmarks;
    int phymarks;
    public:
    student (int r,string n,int m,int p,int c){
    roll=r;
    name=n;
    mathmarks=m;
    phymarks=p;
    chemmarks=c;
}
int total(){
    return mathmarks+phymarks+chemmarks;
}
char grade(){
    float average=total()/3;
    if(average>60)
    return 'A';
    else if (average>=40 && average<60)
    return 'B';
    else 
    return 'C';
}};
int main(){
    int roll;
    string name;
    int c,m,p;
    cout<<"Enter student Roll number"<<endl;
    cin>>roll;
    cout<<"Enter student name"<<endl;
    cin>>name;
    cout<<"Enter 3 subject marks"<<endl;
    cin>>m>>p>>c;
    student s(roll,name,m,p,c);
    cout<<"Total marks"<<s.total()<<endl;
    cout<<"Grade of student"<<s.grade()<<endl;
}