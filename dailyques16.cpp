#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string s;
        cin >> s;

        bool lower = false, upper = false;
        bool digit = false, special = false;

        if (s.length() >= 10) {
            for (int i = 0; i < s.length(); i++) {
                if (s[i] >= 'a' && s[i] <= 'z')
                    lower = true;

                if (i > 0 && i < s.length() - 1) {
                    if (s[i] >= 'A' && s[i] <= 'Z')
                        upper = true;

                    if (s[i] >= '0' && s[i] <= '9')
                        digit = true;

                    if (s[i] == '@' || s[i] == '#' || s[i] == '%' ||
                        s[i] == '&' || s[i] == '?')
                        special = true;
                }
            }
        }

        if (lower && upper && digit && special && s.length() >= 10)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
