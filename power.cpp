#include <iostream>

using namespace std;

int power(int base, int exp) {
    if (exp == 0) {
        return 1; // Base case: any number to the power of 0 is 1
    }
    return base * power(base, exp - 1); // Recursive case
}

int main(){
    int base, exp;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exp;

    int result = power(base, exp);
    cout << "Result: " << result << endl;

    return 0;
}