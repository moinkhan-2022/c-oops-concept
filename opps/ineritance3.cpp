#include<iostream>
using namespace std;
class rectangle{
    private:
    int length;
    int breadth;
    public:
    rectangle();
    rectangle(int l,int b);
    rectangle(rectangle &r);
    int getLength(){return length;}
    int getBreadth(){return breadth;}
    void setLength(int l);
    void setBreadth(int b);
    int area();
    bool perimeter();
    int issqaure();
    ~rectangle();    
};
class cuboid:public rectangle{
    private:
    int height;
    public:
    cuboid (int h){
        height=h;
        int getHeight(){return height;}
        void setHeight(int h)
        int volume()
        return{getLength()*getBreadth()*height};
    }
};
int main(){
    cuboid c(5);
    c.setLength(10);
    c.setbreadth(8);
    cout<<"volume is "<<c.volume()<<endl;
}
