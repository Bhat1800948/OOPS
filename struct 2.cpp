#include<iostream>
using namespace std;
 struct point{
   int x;
   int y;
 };
 int main()
 {
     point p1;
     point p2;
      cout<<"enter the coordinates for p1 :"<<endl;
      cin>>p1.x>>p1.y;
      cout<<"enter the coordinates for p2:"<<endl;
      cin>>p2.x>>p2.y;
      cout<<"coordinates of p1+p2 are:"<<p1.x+p2.x<<" "<<p1.y+p2.y<<endl;
 }
