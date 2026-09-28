

#include <iostream>
using namespace std;

// Simple approach
long long powerSimple(long long base, long long exp) {
    long long result = 1;
    for (long long i = 0; i < exp; i++)
        result *= base;
    return result;
}

// Fast approach (exponentiation by squaring), handles negative exponents too
double fastPower(double base, long long exp) {
    if (exp < 0) {
        base = 1.0 / base;
        exp = -exp;
    }
    double result = 1.0;
    while (exp > 0) {
        if (exp & 1)          // if current bit is set, multiply result by base
            result *= base;
        base *= base;         // square the base
        exp >>= 1;            // move to next bit
    }
    return result;
}

// Modular version: (base^exp) % mod, useful for large numbers
long long powerMod(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp & 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

int main() {
    double base;
    long long exp;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;

    cout << base << "^" << exp << " = " << fastPower(base, exp) << endl;

    cout << "2^10 (simple)  = " << powerSimple(2, 10) << endl;
    cout << "3^200 mod 1000000007 = " << powerMod(3, 200, 1000000007) << endl;
    return 0;
}
