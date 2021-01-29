#include <iostream>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    int l = 0;

    while (n != 0) {
        int r = n % 10;
        n = n / 10;

        if (r == 4 || r == 7) {
            ++l;
        }
    }

    if (l == 4 || l == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
