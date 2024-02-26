#include <iostream>

using namespace std;

struct fraction {
    int numerator;
    int denominator;
};

// Function to find the greatest common divisor
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to simplify a fraction
void simplify(fraction &f) {
    int common_divisor = gcd(f.numerator, f.denominator);
    f.numerator /= common_divisor;
    f.denominator /= common_divisor;
}

// Function to add two fractions
fraction fadd(const fraction &a, const fraction &b) {
    fraction result;
    result.numerator = (a.numerator * b.denominator) + (b.numerator * a.denominator);
    result.denominator = a.denominator * b.denominator;
    simplify(result);
    return result;
}

// Function to subtract two fractions
fraction fsub(const fraction &a, const fraction &b) {
    fraction result;
    result.numerator = (a.numerator * b.denominator) - (b.numerator * a.denominator);
    result.denominator = a.denominator * b.denominator;
    simplify(result);
    return result;
}

// Function to multiply two fractions
fraction fmul(const fraction &a, const fraction &b) {
    fraction result;
    result.numerator = a.numerator * b.numerator;
    result.denominator = a.denominator * b.denominator;
    simplify(result);
    return result;
}

// Function to divide two fractions
fraction fdiv(const fraction &a, const fraction &b) {
    fraction result;
    result.numerator = a.numerator * b.denominator;
    result.denominator = a.denominator * b.numerator;
    simplify(result);
    return result;
}

int main() {
    fraction fraction1, fraction2;
    cout << "Enter the first fraction (numerator/denominator): ";
    cin >> fraction1.numerator >> fraction1.denominator;
    cout << "Enter the second fraction (numerator/denominator): ";
    cin >> fraction2.numerator >> fraction2.denominator;

    fraction result;
    result = fadd(fraction1, fraction2);
    cout << "Sum: " << result.numerator << "/" << result.denominator << endl;

    result = fsub(fraction1, fraction2);
    cout << "Difference: " << result.numerator << "/" << result.denominator << endl;

    result = fmul(fraction1, fraction2);
    cout << "Product: " << result.numerator << "/" << result.denominator << endl;

    result = fdiv(fraction1, fraction2);
    cout << "Quotient: " << result.numerator << "/" << result.denominator << endl;

    return 0;
}
