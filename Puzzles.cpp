#include <bits/stdc++.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[m];

    for (int i = 0; i < m; ++i) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < m - 1; ++i) {
        for (int j = i + 1; j < m; ++j) {
            if (a[i] > a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }

    int mn = INT_MAX;
    for (int i = 0, j = n - 1; j < m; ++i, ++j) {
        int d = a[j] - a[i];
        if (mn > d) {
            mn = d;
        }
    }

    printf("%d\n", mn);

    return 0;
}
