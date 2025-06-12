#include <iostream>
using namespace std;

int productOfDigits(int n) {
    int product = 1;
    if (n == 0) return 0;
    n = abs(n);
    while (n > 0) {
        product *= (n % 10);
        n /= 10;
    }
    return product;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Product of digits: " << productOfDigits(num) << endl;
    return 0;
}