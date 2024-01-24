#include<iostream>

using namespace std;
// Program to convert old Pound's-Shillings-Pence format to Decimal Pound
int main(){ 
 
	float pounds, shillings, pence;
	cout << "Enter pounds: ";
	cin >> pounds;
	cout << "Enter shillings: ";
	cin >> shillings;
	cout << "Enter pence: ";
	cin >> pence;

	float totalPence =  (pence / (12 * 20)) + shillings / 20;
	float totalPounds = pounds + totalPence;
	
	cout << "Decimal Pounds: " << totalPounds;
	return 0;
}
