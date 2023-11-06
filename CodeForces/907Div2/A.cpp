#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<int> sorted_a = a;
        sort(sorted_a.begin(), sorted_a.end());

        bool possible = true;
        for (int i = 0; i < n; i++) {
            if (a[i] != sorted_a[i]) {
                possible = false;
                break;
            }
        }

        if (possible) {
            cout << "YES" << endl;
        } else {
            while (true) {
                int m = -1;
                for (int i = 0; i < n; i++) {
                    if (a[i] != 0 && pow(2, m + 1) <= (i + 1)) {
                        m = i + 1;
                    }
                }

                if (m == -1) {
                    cout << "NO" << endl;
                    break;
                }

                for (int i = 0; i < pow(2, m); i++) {
                    a[i] -= 1;
                }
            }

            cout << "YES" << endl;
        }
    }

    return 0;
}

