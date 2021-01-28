#include <iostream>
using namespace std;

int sum(int a[], int start_index, int end_index) {
    int s = 0;
    for (int i = start_index; i < end_index; ++i) {
        s += a[i];
    }
    return s;
}

int main() {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[i] < a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    int i = 0, m = 0, y = 0;

    for (i = 1; i <= n; ++i) {
        m = sum(a, 0, i);
        y = sum(a, i, n);

        if (m > y) {
            break;
        }
    }

    cout << i << "\n";

    return 0;
}
