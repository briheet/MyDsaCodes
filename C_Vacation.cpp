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

    ll n; 
    cin >> n;

    vector<ll> a(n), b(n), c(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }    

    vector<vector<ll>> dp(n+1, vector<ll>(3, 0));
    
    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = c[0];

    for (ll i = 1; i <= n; i++) {
        dp[i][0] = max(dp[i-1][1] + a[i], dp[i-1][2] + a[i]); 
        dp[i][1] = max(dp[i-1][0] + b[i], dp[i-1][2] + b[i]); 
        dp[i][2] = max(dp[i-1][0] + c[i], dp[i-1][1] + c[i]); 
    }

    cout << max({dp[n-1][0], dp[n-1][1], dp[n-1][2]}) << endl;

  

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