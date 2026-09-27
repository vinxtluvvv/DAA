#include <iostream>
#include <string>
using namespace std;

int main() {
    string password, correctPassword = "12345";

    while (password != correctPassword) {
        cout << "Enter password: ";
        cin >> password;
    }

    cout << "Login successful!";
    return 0;
}
