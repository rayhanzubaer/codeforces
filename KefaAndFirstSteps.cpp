#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    int c = 1;
    int r = INT_MIN;

    for (int i = 1; i < n ; ++i) {
        if (a[i-1] <= a[i]) {
            ++c;
        } else {
            c = 1;
        }

        if (c > r) {
            r = c;
        }
    }

    cout << r << endl;

    return 0;
}