#include<iostream>
using namespace std;
int main()
{
    float bmi;
    float kg;
    float height;
    cout<<"enter your weight in kilos"<<endl;
    cin>>kg;
    cout<<"enter your height in cm's"<<endl;
    cin>>height;
    float pounds=kg*2.205;   // here converting the kilograms into pounds for better conversion
    float inchs=height/2.54; // here converting the centimeters into inchs for better conversion
    
    
   
    if(pounds<=0||height<=0)
    {
        cout<<"invalid input";
        }
        else
        {
            bmi=(pounds/(inchs*inchs))*703;
            cout<<"your BMI is "<<bmi<<endl;
            }
            
            if(bmi<=18.5)
            {
                cout<<" You are Under Weight"<<endl;
            }
            else if(bmi>18.5 && bmi<=24.9)
            {
                cout<<"You are Normal"<<endl;
            }
            else if (bmi>24.9 && bmi<29.9)
            {
             cout<<"You are OverWeight"<<endl;
            }
            else
            {
                cout<<"you are Obese"<<endl;
            
            }
            
            
}
