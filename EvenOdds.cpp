#include <iostream>
using namespace std;

typedef long long int ll;

int main() {
    ll n;
    ll k;

    cin >> n >> k;

    ll no = (n % 2 == 0) ? n / 2 : (n / 2) + 1;
    ll ne = n - ne;

    if (k <= no) {
        cout << (2 * k - 1) << "\n";
    } else {
        cout << 2 * (k - no) << "\n";
    }

    return 0;
}
