// write a program to print natural number from 1 to n using flag controlled loop
#include<iostream>
using namespace std;

int main() {
    int i=1, n;
    cout << "Enter a positive integer: ";
    cin >> n;

    bool flag = true;

        while(flag)
            {
                cout<<i<<endl;
                 
        if(i>=n)     //  when loop will reach at i=100 it will terminate infinite loop by making flag false 
            flag = false;
          else
          i++;
               
    }

    return 0;
}
