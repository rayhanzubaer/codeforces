#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s = "";
    bool flag = true;

    for (int i = 1; i <= n; ++i) {
        s = flag ? s + "I hate " : s + "I love ";
        if (i != n) {
            s += "that ";
        }
        flag = !flag;
    }
    s += "it";
    cout << s << endl;

    return 0;
}
