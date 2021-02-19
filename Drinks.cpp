#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    float sum = 0;
    int p;

    for (int i = 0; i < n; ++i) {
        cin >> p;
        sum += p;
    }

    cout << (sum / n) << "\n";

    return 0;
}
