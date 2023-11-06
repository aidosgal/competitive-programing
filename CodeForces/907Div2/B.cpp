#include <iostream>
#include <vector>
using namespace std;

#define ll long long

void solve() {
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    vector<ll> x(q);
    vector<ll> powers(63, 0); // Store powers of 2 for optimization
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        for (int j = 0; j < 63; j++) {
            if (a[i] & (1LL << j)) {
                powers[j]++;
            }
        }
    }
    for (int i = 0; i < q; i++) {
        cin >> x[i];
        ll power = 1LL << (x[i] - 1);
        for (int j = 0; j < 63; j++) {
            if (x[i] & (1LL << j)) {
                powers[j]++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        ll val = 0;
        for (int j = 0; j < 63; j++) {
            if (powers[j] > 0) {
                val |= (1LL << j);
                powers[j]--;
            }
        }
        a[i] = val;
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

