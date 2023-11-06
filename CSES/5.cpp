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
    int n; cin >> n;
    vector<int> a;
    if(n == 1){
      cout << 1;
    }else if( n == 4){
      cout << 2 << " " << 4 << " " << 1 << " " << 3;
    }
    else if(n <= 3){
      cout << "NO SOLUTION";
    }else{
      for(int i = n; i > 0; i--){
        if(i % 2 == 0){
          a.push_back(i);
        }
      }
      for(int i = n; i > 0; i--){
        if(i % 2 == 1){
          a.push_back(i);
        }
      }
      for(auto x : a){
        cout << x << " ";
      }
    }
}

int main() {

    int t = 1;
    // cin >> t; // Uncomment this line if there is a test case count
    while (t--) {
        solve();
    }

    return 0;
}
