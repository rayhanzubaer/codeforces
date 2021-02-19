#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int mx = -1;

    int tmp = a + b + c;

    if (mx <= tmp) mx = tmp;

    tmp = a * b * c;

    if (mx <= tmp) mx = tmp;

    tmp = (a + b) * c;

    if (mx <= tmp) mx = tmp;

    tmp = (a * b) + c;

    if (mx <= tmp) mx = tmp;

    tmp = a + (b * c);

    if (mx <= tmp) mx = tmp;

    tmp = a * (b + c);

    if (mx <= tmp) mx = tmp;

    cout << mx << "\n";

    return 0;
}
