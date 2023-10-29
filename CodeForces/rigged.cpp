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
    int n;
    cin >> n;
    int s[n];
    int e[n];
    for(int i = 0; i < n; i++){
        cin >> s[i] >> e[i];
    }
    bool ok = true;
    for(int i = 1; i < n; i++){
        if(s[i] >= s[0] && e[i] >= e[0]){
            ok = false;
        }
    }
    if(!ok){
        cout << "-1" << endl;
        return;
    }
    cout << s[0] << endl;
}

int main() {

    int t = 1;
    cin >> t; // Uncomment this line if there is a test case count
    while (t--) {
        solve();
    }

    return 0;
}
