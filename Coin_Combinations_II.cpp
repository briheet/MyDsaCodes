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
    ll amount; cin>>amount;

    vector<ll> coins(n, 0);
    for(ll i = 0; i < n; i++) {
        cin>>coins[i];
    }    

    vector<ll> dp(amount+1, 0);
    dp[0] = 1;

    for(ll i = 0; i < coins.size(); i++) {
        for(ll j = 0; j <= amount; j++) {
            if(j - coins[i] >= 0) {
                dp[j] += dp[j-coins[i]];
                dp[j] %= MOD;
            }
        }
    }

    cout << dp[amount] << endl;

  

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