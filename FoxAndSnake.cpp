#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int x;

    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            if (i % 4 == 0) {
                x = 1;
            } else {
                x = m;
            }
        }

        for (int j = 1; j <= m; ++j) {
            if (i % 2 != 0) {
                cout <<"#";
            } else {
                if (j == x) {
                    cout << "#";
                } else {
                    cout << ".";
                }
            }
        }
        cout << "\n";
    }

    return 0;
}
