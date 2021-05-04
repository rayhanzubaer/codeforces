 #include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l;
    scanf("%d %d", &n, &l);
    int a[n];

    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    sort(a, a + n);

    float d = 0, tmp = 0;

    for (int i = 1; i < n; ++i) {
        tmp = (float) (a[i] - a[i-1]) / 2;
        if (tmp > d) {
            d = tmp;
        }
    }

    tmp = (float) (a[0] - 0);
    if (tmp > d) {
        d = tmp;
    }

    tmp = (float) (l - a[n-1]);
    if (tmp > d) {
        d = tmp;
    }

    printf("%.10f\n", d);

    return 0;
}
