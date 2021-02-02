#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a;
    int n4 = 0, n3 = 0, n2 = 0, n1 = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a;
        if (a == 4) {
            n4++;
        } else if (a == 3) {
            n3++;
        } else if (a == 2){
            n2++;
        } else {
            n1++;
        }
    }

    n1 = (n3 - n1 >= 0) ? 0 : (n1 - n3);

    int p = ceil((double) (2 * n2 + n1) / 4);

    cout << n4 + n3 + p << "\n";

    return 0;
}
