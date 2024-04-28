// creating the obejct  of structure in Heap
#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
 struct Rectangle
 {
     int length;
     int breadth;
     
 };
 
 
int main(){
    struct Rectangle *r;
    r=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    r->length=50;
    r->breadth=40;
    cout<<"area of Rectangle:"<<r->length*r->breadth;   
}
