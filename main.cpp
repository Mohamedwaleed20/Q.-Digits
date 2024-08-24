#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        if (n == 0) {
            cout << 0 << endl;
        } else {
            while (n) {
                cout << n % 10 << " ";
                n /= 10;
            }
            cout << endl;
        }
    }
    return 0;
}
