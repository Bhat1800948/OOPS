
#include<iostream>
using namespace std;
  struct phone{
      int areaCode;
      int exchange;
      int number;
  };
  int main(){
       phone myphone;
       phone yourPhone;
         
         
         myphone.areaCode=212;
         myphone.exchange=767;
         myphone.number=8900;
          
          
          cout<<"Enter your areaCode, exchange,number"<<endl;
          cin>>yourPhone.areaCode>>yourPhone.exchange>>yourPhone.number;
          
          
          cout<<"My number is ( "<<myphone.areaCode<<")"<< " "<<myphone.exchange<<"-"<<myphone.number<<endl;
  cout<<"Your number is ( "<<yourPhone.areaCode<<")"<< " "<<yourPhone.exchange<<"-"<<yourPhone.number<<endl;
  }
