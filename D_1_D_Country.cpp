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
    vector<ll> x(n), p(n);

    for(ll i = 0; i < n; i++) {
        cin>>x[i];
    }

    for(ll i = 0; i < n; i++) {
        cin>>p[i];
    }

    vector<ll> pre(n+1, 0);

    for(ll i = 0; i < n; i++) {
        pre[i+1] = pre[i] + p[i];
    }

    ll q; cin >> q;

    while(q--) {
        ll l, r; cin >> l >> r;
        r++;

        ll L = lower_bound(all(x), l) - x.begin();
        ll R = lower_bound(all(x), r) - x.begin();

        cout << pre[R] - pre[L] << endl;
        
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