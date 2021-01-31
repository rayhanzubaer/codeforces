#include <iostream>
using namespace std;

int main() {
    int n = 3;
    cin >> n;
    int p[n];
    int q[n];
    int c = 0;
    for (int i = 0; i < n; ++i) {
        cin >> p[i] >> q[i];
        if (q[i] - p[i] >= 2) {
            ++c;
        }
    }
    cout << c << "\n";
    return 0;
}
