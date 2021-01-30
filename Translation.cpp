#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    string t;
    cin >> t;

    bool flag = true;

    for (int i = 0, j = s.size() - 1; s[i]; ++i, --j) {
        if (s[i] != t[j]) {
            flag = false;
        }
    }

    if (flag) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
