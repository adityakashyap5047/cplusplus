#include <iostream>

using namespace std;

int power(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base * power(base, exp - 1); // Recursive case
}

int powerMem(int base, int exp, int pow[]){

    if(exp == 0){
        return 1; 
    }

    if(pow[exp]){
        return pow[exp];
    }

    pow[exp] = base * powerMem(base, exp - 1, pow);

    return pow[exp];
}

int powerTab(int base, int exp){
    int *powTab = new int[exp + 1]();
    for (int i = 0; i <= exp; i++){
        if(i == 0){
            powTab[i] = 1;
        }else{
            powTab[i] = base * powTab[i - 1];
        }
    }
    delete[] powTab;
    return powTab[exp];
}

int main(){
    int base, exp;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exp;

    int* pow = new int[exp + 1]();

    int result = power(base, exp);
    cout << "Result: " << result << endl;
    cout << "Memoized Result: " << powerMem(base, exp, pow) << endl;
    cout << "Tabulated Result: " << powerTab(base, exp) << endl;

    cout << endl;

    delete[] pow;
    return 0;
}