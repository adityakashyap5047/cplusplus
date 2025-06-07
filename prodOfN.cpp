#include <iostream>
using namespace std;

int main() {
    int n;
    long long product = 1;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        product *= num;
    }

    cout << "Product of the numbers: " << product << endl;
    return 0;
}