#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n, m;
    cin >> n >> m;

    long long int a[m];

    for (long long int i = 0; i < m; i++) {
        cin >> a[i];
    }

    long long int cp = 1;
    long long int t = 0;

    for (long long int i = 0; i < m; ++i) {
        if (cp > a[i]) {
            t += (n + a[i]) - cp;
        } else {
            t += a[i] - cp;
        }
        cp = a[i];
    }

    cout << t << "\n";

    return 0;
}
