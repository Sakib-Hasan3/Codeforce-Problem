#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        long long sum = 0;

        // Input the array and calculate sum
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }

        // Check if sum is divisible by n
        if (sum % n != 0) {
            cout << "NO" << endl;
            continue;
        }

        long long target = sum / n, balance = 0;
        bool possible = true;

        // Check if balancing the array is possible
        for (int i = 0; i < n; ++i) {
            balance += a[i] - target;
            if (balance < 0) {
                possible = false;
                break;
            }
        }

        // Output the result
        cout << (possible ? "YES" : "NO") << endl;
    }

    return 0;
}
