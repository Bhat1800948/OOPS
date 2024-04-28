#include<iostream>
using namespace std;
int main()
{
   
    try{
         int num1;
         
    int num2;
    cout<<"Enter the two numbers:"<<endl;
    cin>>num2>>num2;
    int result;
    if(num2==0)
    {
        throw runtime_error("divide By Zero is not allowed");
    }
    result=num1/num2;
    cout<<"Reuslt:"<<result<<endl;
    }
    catch(const exception &e)
    {
        cout<<"Exception:"<<e.what()<<endl;
    }
    return 0;
}
