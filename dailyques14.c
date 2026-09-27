#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int m, n;
    cin >> m;
    vector<int> a(m);

    for (int i = 0; i < m; i++)
        cin >> a[i];

    cin >> n;
    vector<int> b(n);

    for (int i = 0; i < n; i++)
        cin >> b[i];

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0, j = 0;
    int ans = 2147483647;

    while (i < m && j < n) {
        ans = min(ans, abs(a[i] - b[j]));

        if (a[i] < b[j])
            i++;
        else
            j++;
    }

    cout << ans;
    return 0;
}
