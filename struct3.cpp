#include<iostream>
using namespace std;
struct Distance{
    int feet;
    float inches;
};
struct Volume{
    Distance length;
    Distance breadth;
    Distance height;
};
int main(){
    Volume volume{
        {5,6},
        {4,9},
        {6,7}
        
    };
    float l=static_cast<float>(volume.length.feet)+volume.length.inches;
    float b=static_cast<float>(volume.breadth.feet)+volume.breadth.inches;
    float h=static_cast<float>(volume.height.feet)+volume.height.inches;
    cout<<"volume is :"<<l+b+h;
}
