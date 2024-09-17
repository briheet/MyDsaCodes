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

const int mx = 1e5+1;
ll dp[mx];
ll w[101], v[101];


inline void test_case() {

    ll n, amount; cin>>n>>amount;

    for(ll i = 0; i < n; i++) {
        cin>>w[i]>>v[i];
    }    

    for(ll i = 0; i <= mx; i++) {
        dp[i] = 1e18;
    }

    dp[0] = 0;

    for(ll i = 0; i < n; i++) {
        for(ll j = mx-1; j >= 0; j--) {
            if(dp[j] + w[i] <= amount) {
                dp[j+v[i]] = min(dp[j+v[i]], dp[j] + w[i]);
            }
        }
    }

    for(ll i = mx; i >= 0; i--) {
        if(dp[i] != 1e18) {
            cout << i << endl;
            return;
        }
    }

   


    
  

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