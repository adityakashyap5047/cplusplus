#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    // Calculate sum of first n natural numbers
    sum = n * (n + 1) / 2;

    cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}