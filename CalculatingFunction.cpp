#include <iostream>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    long long int r = 0;
    if (n % 2 == 0) {
        r = n / 2;
    } else {
        r = -(n + 1) / 2;
    }
    cout << r << "\n";
    return 0;
}
