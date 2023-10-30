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
    string s; cin >> s;
    ll cur = 1;
    ll ans = 1;
    for(ll i = 1; i < s.length(); i++){
        if(s[i] == s[i-1]){
            ans = ans + 1;
        }else{
            ans = 1;
        }
        if(cur <= ans){
            cur = ans;
        } 
    }
    cout << cur;
}

int main() {

    int t = 1;
    // cin >> t; // Uncomment this line if there is a test case count
    while (t--) {
        solve();
    }

    return 0;
}
