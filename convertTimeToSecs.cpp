#include<iostream>
using namespace std;
long convertTimeToSec(int hr,int min,int sec);
int main(){
    int hours;
    int mins;
    int secs;
     cout<<"Enter time in hours, mins and seconds"<<endl;
     cin>>hours>>mins>>secs;
      long totalSeconds=convertTimeToSec(hours,mins,secs);
      cout<<"Total seconds are:"<<totalSeconds;
      return 0;
}
long convertTimeToSec(int hr,int min,int sec)
{
    return hr*3600+min*60+sec;
}
