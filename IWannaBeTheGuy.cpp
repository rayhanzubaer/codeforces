#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int p; cin >> p;
    int a[p]; for (int i = 0; i < p; ++i) cin >> a[i];
    int q; cin >> q;
    int b[q]; for (int i = 0; i < q; ++i) cin >> b[i];

    int c[n];
    int k = 0;

    for (int i = 0; i < p; ++i) {
        c[k] = a[i];
        ++k;
    }

    for (int i = 0; i < q; ++i) {
        bool flag = true;
        for (int j = 0; j < p; ++j) {
            if (b[i] == a[j]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            c[k] = b[i];
            ++k;
        }
    }

    if (k == n) {
        cout << "I become the guy.\n";
    } else {
        cout << "Oh, my keyboard!\n";
    }

    return 0;
}
