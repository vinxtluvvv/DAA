#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) cin >> a[i];

    int low = 0, high = n - 1;

    while (low < high) {
        int mid = low + (high - low) / 2;

        if (mid % 2 == 1) mid--;

        if (a[mid] == a[mid + 1]) low = mid + 2;
        else high = mid;
    }

    cout << a[low];
    return 0;
}
