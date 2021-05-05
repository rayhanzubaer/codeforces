#include <bits/stdc++.h>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    if (a.first < b.first) {
        return true;
    }
    return false;
}

int main() {
    int s, n;
    scanf("%d %d", &s, &n);

    pair<int, int> p[n];

    for (int i = 0; i < n; ++i) {
        scanf("%d %d", &p[i].first, &p[i].second);
    }

    sort(p, p+n, compare);

    bool b = true;

    for (int i = 0; i < n; ++i) {
        if (s > p[i].first) {
            s += p[i].second;
        } else {
            b = false;
            break;
        }
    }

    printf("%s", (b ? "YES" : "NO"));

    return 0;
}
