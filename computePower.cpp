#include<iostream>
using namespace std;
 double computePower(double n,int p=2);
 double computePower(double n,int p){
     double res=n;
     while(p-->1){
         res*=n;
     }
     return res;
 }
 int main(){
     int number;
     double power;
      cout<<"enter the number and power :"<<endl;
      cin>>number>>power;
       cout<<"default call is :"<<computePower(number)<<endl<<computePower(number,power);
       return 0;
 }
