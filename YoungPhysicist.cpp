#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sx = 0;
    int sy = 0;
    int sz = 0;

    int x, y, z;

    for (int i = 0; i < n; ++i) {
        cin >> x >> y >> z;

        sx += x;
        sy += y;
        sz += z;
    }

    if (sx == 0 && sy == 0 && sz == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
