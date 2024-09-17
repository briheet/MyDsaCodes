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

    ll n, c; cin>>n>>c;
    vector<ll> a(n, 0);

    for(ll i = 0; i < n; i++) {
        cin>>a[i];
    }    

    ll start = 1; ll end = 1e9;
    ll ans = 0;
    while(start <= end) {
        ll mid = start + (end - start) / 2;
        ll sum = 0;

        for(ll i = 0; i < n; ++i) {
            sum += (2 * mid + a[i]) * (2 * mid + a[i]);
            if(sum > c) break;
        }

        if(sum == c) {
            cout << mid << endl;
            return;
        }
        if(sum > c) {
            end = mid -1;
        }else {
            start = mid + 1;
        }
    }

    cout << ans << endl;

  

}


 

signed main() {
      
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case_number = 1;
    cin >> test_case_number;
    while (test_case_number--)
        test_case();

    return 0;
}