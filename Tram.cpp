#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int m = 0;
    int e = 0;
    int a, b;

    while (n--) {
        cin >> a >> b;

        e = (e + b) - a;

        if (m < e) {
            m = e;
        }
    }

    cout << m << endl;

    return 0;
}
