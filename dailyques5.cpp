#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ones = 0, zeros = 0, longest = 0, current = 0;

    while (n > 0) {
        int bit = n % 2;
        n /= 2;

        if (bit == 1) {
            ones++;
            current++;
            if (current > longest) longest = current;
        } else {
            zeros++;
            current = 0;
        }
    }

    cout << "Ones: " << ones << endl;
    cout << "Zeros: " << zeros << endl;
    cout << "Longest consecutive 1s: " << longest;
    return 0;
}
