#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;

    int r = 0;

    r = r + (x / 5);
    x = x % 5;

    r = r + (x / 4);
    x = x % 4;

    r = r + (x / 3);
    x = x % 3;

    r = r + (x / 2);
    x = x % 2;

    r = r + (x / 1);
    x = x % 1;

    cout << r << endl;

    return 0;
}
