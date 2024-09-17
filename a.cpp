#include <bits/stdc++.h>
using namespace std;

#define ll        long long
#define all(x)    x.begin(), x.end()
#define pb        push_back
#define rot(x,k)  x.begin(), x.begin()+k, a.end()

const ll MOD = 998244353;
const int INF = (int)4e18;
const int n1 = 1e9 + 7;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


inline void test_case() {
    
    ll n; cin>>n;

    vector<ll> dp(n+1, 0);
    dp[0] = 1;
    dp[1] = 0;
    dp[2] = 3;
    dp[3] = 0;
    for(ll i = 4; i <= n; i++) {
        if(i%2 != 0) continue;
        dp[i] += (4 * dp[i-2]) - dp[i-4]; 
    }    

    cout << dp[n] << endl;




}


 

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif        
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case_number = 1;
    cin >> test_case_number;
    while (test_case_number--)
        test_case();

    return 0;
}