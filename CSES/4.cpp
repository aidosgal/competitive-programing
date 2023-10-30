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
    ll n; cin >> n;
    ll a[n];
    for(ll i = 0; i < n; ++i){
        cin >> a[i];
    }
    ll ans = 0;
    for(ll i = 1; i < n; ++i){
        if(a[i] < a[i-1]){
            ans = ans + (a[i-1] - a[i]);
            a[i] = a[i-1];
        }
    }
    cout << ans;
}

int main() {

    int t = 1;
    // cin >> t; // Uncomment this line if there is a test case count
    while (t--) {
        solve();
    }

    return 0;
}
