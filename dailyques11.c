#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], ans[n];

    for (int i = 0; i < n; i++) cin >> a[i];

    int left = 0, right = n - 1;

    for (int i = n - 1; i >= 0; i--) {
        if (abs(a[left]) > abs(a[right])) {
            ans[i] = a[left] * a[left];
            left++;
        } else {
            ans[i] = a[right] * a[right];
            right--;
        }
    }

    for (int i = 0; i < n; i++) cout << ans[i] << " ";

    return 0;
}
