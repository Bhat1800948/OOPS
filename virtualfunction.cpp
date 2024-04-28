#include<iostream>
using namespace std;
class Shape{
    public:
    virtual void draw(){
        cout<<"i am drawing"<<endl;
    }
};
class Circle:public Shape{
    public:
    void draw(){
        cout<<"drawing a circle"<<endl;
    }
};
class Rectangle:public Shape{
    public:
    void draw(){
        cout<<"drawing a Rectangle"<<endl;
    }
};
int main(){
    Circle c;
    Rectangle r;
    Shape *cricptr=&c;
    Shape *recptr=&r;
    cricptr->draw();
    recptr->draw();
    
    
}
