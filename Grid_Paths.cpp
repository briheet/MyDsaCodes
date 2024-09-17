#include <bits/stdc++.h>
using namespace std;

#define ll        long long
#define all(x)    x.begin(), x.end()
#define pb        push_back
#define rot(x,k)  x.begin(), x.begin()+k, a.end()

#define PI        3.141592653589793238
#define INF       LONG_LONG_MAX
#define MOD       1000000007


mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


inline void test_case() {

    ll n; cin>>n;
    vector<vector<char>> grid(n, vector<char>(n));

    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            cin>>grid[i][j];
        }
    }    

    if(grid[0][0] == '*') {
        cout << 0 << endl;
        return;
    }


    vector<vector<ll>> dp(n+1, vector<ll>(n+1, 0));

    dp[0][0] = 1;

    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < n; j++) {
            if(i > 0 && grid[i][j] != '*') {
                dp[i][j] += dp[i-1][j];
                dp[i][j] %= MOD;
            }
            if(j > 0 && grid[i][j] != '*') {
                dp[i][j] += dp[i][j-1];
                dp[i][j] %= MOD;
            }
        }
    }

    cout << dp[n-1][n-1] << endl;
  

}


 

signed main() {
      
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case_number = 1;
 //   cin >> test_case_number;
    while (test_case_number--)
        test_case();

    return 0;
}