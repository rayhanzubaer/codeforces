#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a;
    bool r = true;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        if (a == 1) {
            r = false;
        }
    }
    cout << (r ? "EASY" : "HARD") << endl;
    return 0;
}
