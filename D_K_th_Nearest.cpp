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

    ll n, q; cin>>n>>q;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin>>a[i];
    }

    sort(all(a));

    while(q--) {
        ll b, k; cin>>b>>k;

        auto f = [&](ll x) -> bool {
            auto lb = lower_bound(a.begin(), a.end(), b - x);
            auto ub = upper_bound(a.begin(), a.end(), b + x);
            return ub - lb >= k;
        };

        ll start = -1; ll end = 2e8;
        while(end - start > 1) {
            ll mid = (start + end)/2;
            if(f(mid)) end = mid;
            else start = mid;
        }
        cout << end << endl;

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