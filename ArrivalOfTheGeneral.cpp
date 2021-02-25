#include <bits/stdc++.h>
using namespace std;

void print(int a[]) {
    for (int i = 0; a[i]; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    //int a[n] = {10, 10, 58, 31, 63, 40, 76};
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];

    int mx = INT_MIN ,mn = INT_MAX;
    int maxIndex = -1, minIndex = -1;
    int swapCount = 0;
//print(a);
    for (int i = 0; i < n; ++i) {
        if (mx < a[i]) {  // sorbo prothom boro songkha
            mx = a[i];
            maxIndex = i;
        }
    }

    for (int i = maxIndex; i > 0; --i) {
        int tmp = a[i];
        a[i] = a[i-1];
        a[i-1] = tmp;
        ++swapCount;
    }
//print(a);
    for (int i = 0; i < n; ++i) {
        if (mn >= a[i]) { // sorbo shesh choto songkha
            mn = a[i];
            minIndex = i;
        }
    }

    for (int i = minIndex; i < n-1; ++i) {
        int tmp = a[i];
        a[i] = a[i + 1];
        a[i+1] = tmp;
        ++swapCount;
    }

//print(a);
    cout << swapCount << endl;
    return 0;
}
