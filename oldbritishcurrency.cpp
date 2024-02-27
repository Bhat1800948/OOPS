#include <iostream>
using namespace std;

// Structure to represent old-style British currency
struct Sterling {
    int pounds;
    int shillings;
    int pence;
};

// Function to obtain a pounds-shillings-pence value from the user
Sterling getPoundsShillingsPence() {
    Sterling money;

    cout << "Enter pounds: ";
    cin >> money.pounds;

    cout << "Enter shillings: ";
    cin >> money.shillings;

    cout << "Enter pence: ";
    cin >> money.pence;

    return money;
}

// Function to add two Sterling values
Sterling addSterling(Sterling s1, Sterling s2) {
    Sterling result;

    result.pounds = s1.pounds + s2.pounds;
    result.shillings = s1.shillings + s2.shillings;
    result.pence = s1.pence + s2.pence;

    return result;
}

// Function to display a Sterling value
void displaySterling(Sterling s) {
    cout << "£" << s.pounds << ":" << s.shillings << ":" << s.pence << endl;
}

int main() {
    // Obtain two money amounts from the user
    cout << "Enter first amount:" << endl;
    Sterling amount1 = getPoundsShillingsPence();

    cout << "Enter second amount:" << endl;
    Sterling amount2 = getPoundsShillingsPence();

    // Add the two amounts
    Sterling sum = addSterling(amount1, amount2);

    // Display the result
    cout << "The sum is: ";
    displaySterling(sum);

    return 0;
}