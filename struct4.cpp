
#include<iostream>
using namespace std;
struct Emplpoyee{
  int employeeNo;
  float compensation;
};
int main(){
    Emplpoyee e1;
    Emplpoyee e2;
    Emplpoyee e3;
    cout<<"Enter the Employee Number and compensation for Employee 1 :"<<endl;
    cin>>e1.employeeNo>>e1.compensation;
    cout<<"Enter the employeeNo and  compensation for Employee 2 :"<<endl;
    cin>>e2.employeeNo>>e2.compensation;
    cout<<"Enter the employeeNo and  compensation for Employee 3 :"<<endl;
    cin>>e3.employeeNo>>e3.compensation;
    cout<<"employeeNo and  compensation of Employee 1 "<<e1.employeeNo<<" "<<e1.compensation<<endl;
    cout<<"employeeNo and  compensation of Employee 2 "<<e2.employeeNo<<" "<<e2.compensation<<endl;
    cout<<"employeeNo and  compensation of Employee 3 "<<e3.employeeNo<<" "<<e3.compensation<<endl;
    
}
