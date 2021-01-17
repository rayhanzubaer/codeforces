#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    while (k--) {
        int r = n % 10;
        if (r > 0) {
            n -= 1;
        } else {
            n /= 10;
        }
    }

    cout << n << endl;

    return 0;
}
