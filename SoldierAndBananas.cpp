#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int e = 0;
    for (int i = 1; i <= w; ++i) {
        e += i * k;
    }

    if (e > n) {
        cout << (e - n) << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
