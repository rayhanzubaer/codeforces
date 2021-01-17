#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int i = 1;
    while (true) {
        a *= 3;
        b *= 2;
        if (a > b) {
            break;
        }
        ++i;
    }

    cout << i << endl;

    return 0;
}
