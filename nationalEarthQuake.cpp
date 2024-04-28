#include<iostream>
using namespace std;
int main()
{
    float n; // n will hold the value of richter scale number
    cout<<"Enter the richter scale number"<<endl;
    cin>>n;
    if(n<=5.0)
    cout<<"Little or no Demage"<<endl;
    else if(n>5.0 && n<=5.5)
    cout<<"Some Demage"<<endl;
    else if(n>5.5 &&n<=6.5)
    cout<<"Serious Demage:walls may crack or fall"<<endl;
    else if(n>6.5 && n<=7.5)
    cout<<"Disaster:houses and Buildings may collapse"<<endl;
    else
    cout<<"Catastrophe: most of the Buildings destroyed"<<endl;
    
}
