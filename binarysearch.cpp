// write a program to implement binary search using c++
#include<iostream>
using namespace std;
int main() {
        int arr[]={1,2,3,4,5,6};
        int x;
        int n=sizeof(arr)/sizeof(arr[0]);
        cout<<"Enter the element you want to find:";
        
        cin>>x;
        int first = 0;
        int last = n-1;
        while (first <=last) {
            int mid = first + (last - first )/2;
            if(arr[mid] == x){
                cout << "Element found at index:" << mid ;
                break;
                }
                else if (arr[mid] < x )
                {

                first = mid+1;
                }
                else{
                    last = mid-1;
                    }
                    }

                    return 0;
                    }





