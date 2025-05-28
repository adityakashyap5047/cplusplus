#include <iostream>
#include "gcd.cpp"

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}