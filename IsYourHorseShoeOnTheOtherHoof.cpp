#include <iostream>
using namespace std;

int main() {
    long long int a, b, c, d;

    cin >> a >> b >> c >> d;

    int r = 0;

    if (a == b || a == c || a == d) {
        ++r;
    }

    if (b == c || b == d) {
        ++r;
    }

    if (c == d) {
        ++r;
    }

    cout << r << endl;

    return 0;
}
