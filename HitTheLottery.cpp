#include <iostream>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    int b[5] = {100, 20, 10, 5, 1};
    int r = 0;
    int i = 0;

    while (n != 0) {
        r = r + n / b[i];
        n = n % b[i];
        ++i;
        i = i % 5;
    }

    cout << r << endl;

    return 0;
}
