#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<char> a;
    string s;
    cin >> s;
    
    int i = 0;
    
    while (s[i] != '\0') {
        if (s[i] != '+') {
            a.push_back(s[i]);
        }
        ++i;
    }

    int n = a.size();
    
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[i] > a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i];
        if (i != n - 1) {
            cout << "+";
        }
    }

    return 0;
}
