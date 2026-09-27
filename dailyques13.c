#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) cin >> a[i];

    int left = 0, right = n - 1;
    int leftMax = 0, rightMax = 0, water = 0;

    while (left < right) {
        if (a[left] <= a[right]) {
            if (a[left] >= leftMax) leftMax = a[left];
            else water += leftMax - a[left];
            left++;
        } else {
            if (a[right] >= rightMax) rightMax = a[right];
            else water += rightMax - a[right];
            right--;
        }
    }

    cout << water;
    return 0;
}
