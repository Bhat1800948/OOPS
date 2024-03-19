#include <iostream>
using namespace std;

class Shape {
public:
    virtual float calculateArea() {
    cout << "Area of the shape is calculated in base class." <<endl;
        return 0;
    }
    virtual void displayType() = 0;
};

class Rectangle : public Shape {
private:
    float length;
    float width;

public:
    Rectangle(float l, float w) : length(l), width(w) {}


    float calculateArea(){
        return length * width;
    }

    
    void displayType(){
    cout << "This is a Rectangle." <<endl;
    }
};


class Circle : public Shape {
private:
    float radius;

public:
   
    Circle(float r) : radius(r) {}

    
    float calculateArea() {
        return 3.14 * radius * radius;
    }

    
    void displayType() {
    cout << "This is a Circle." <<endl;
    }
};

int main() {
   
    Rectangle rectangle(5, 3);
    Circle circle(4);

   
    cout << "Area of the Rectangle: " << rectangle.calculateArea() <<endl;
    rectangle.displayType();

    cout << "Area of the Circle: " << circle.calculateArea() <<endl;
    circle.displayType();

    return 0;
}