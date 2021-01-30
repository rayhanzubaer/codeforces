#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, d = 0;
    int i = 0;
    while (s[i]) {
        if (s[i] == 'A') {
            ++a;
        } else {
            ++d;
        }
        ++i;
    }
    if (a == d) {
        cout << "Friendship\n";
    } else if (a > d) {
        cout << "Anton\n";
    } else {
        cout << "Danik\n";
    }
    return 0;
}
