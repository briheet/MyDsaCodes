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

    ll n, k; cin>>n>>k;
    vector<ll> a(n, 0);
    for(auto &i: a) {
        cin>>i;
    }    

    map<ll, ll> cnt;
    ll ans = 0;
    vector<ll> pre(n+1);
    for(ll i = 0; i < n; i++) {
        pre[i+1] = pre[i] + a[i];
    }

    ll now = pre[n];

    for(ll i = 0, j = 0; i < n; i++) {
        ans += cnt[(pre[i] - now % k + k)%k];
        ans += cnt[pre[i] % k]++;
    }

    cout << ans << endl;




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