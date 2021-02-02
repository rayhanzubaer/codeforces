#include <bits/stdc++.h>

int main() {
    int n;
    scanf("%d", &n);

    int tmp = -99;
    int a;
    int g = 0;

    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a);
        if (tmp != a) {
            g++;
        }
        tmp = a;
    }

    printf("%d\n", g);

    return 0;
}
