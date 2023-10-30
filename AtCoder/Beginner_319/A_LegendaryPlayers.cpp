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
    map<string, int> scores;
    scores["tourist"] = 3858;
    scores["ksun48"] = 3679;
    scores["Benq"] = 3658;
    scores["Um_nik"] = 3648;
    scores["apiad"] = 3638;
    scores["Stonefeang"] = 3630;
    scores["ecnerwala"] = 3613;
    scores["mnbvmar"] = 3555;
    scores["newbiedmy"] = 3516;
    scores["semiexp"] = 3481;
    string n;
    cin >> n;
    cout << scores[n];
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
    // cin >> t; // Uncomment this line if there is a test case count
    while (t--) {
        solve();
    }

    return 0;
}
