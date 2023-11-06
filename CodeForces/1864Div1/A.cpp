#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>
#include <bitset>
#include <string>
#include <sstream>
#include <fstream>
#include <ctime>
#include <cassert>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <iomanip>
using namespace std;

#define ll long long
#define endl '\n'
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define vi vector<int>
#define vll vector<long long>

void solve() {
    int n, x, y;
    cin >> x >> y >> n;
    int a[n];
    a[0] = x; a[n-1] = y;
    int d = 1;
    for(int i = n-2; i >= 1; i--){
        a[i] = a[i+1] - d;
        d++;
    }
    bool ok = true;
    for(int i = 0; i + 1 < n; i++){
        if(a[i+1] <= a[i]){
            ok = false;
        }
    }
    for(int i = 0; i < n-2; i++){
        int p = a[i + 1] - a[i];
        int q = a[i+2] - a[i+1];
        if(p <= q){
            ok = false;
        }
    }
    if(ok){
        for(int i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }else{
        cout << "-1" << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    cin >> t; // Uncomment this line if there is a test case count
    while (t--) {
        solve();
    }

    return 0;
}
