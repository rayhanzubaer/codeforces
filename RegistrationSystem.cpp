#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    map <string, int> m;
    string s;

    while (n--) {
        cin >> s;

        if (m.empty()) {
            m[s] = 0;
            cout << "OK\n";
            continue;
        }

        if (m.find(s) != m.end()) {
            ++m[s];
            cout << s << m[s] << endl;
        } else {
            m[s] = 0;
            cout << "OK" << "\n";
        }
    }

    return 0;
}

