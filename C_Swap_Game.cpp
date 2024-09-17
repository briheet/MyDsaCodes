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
    ll mini1 = LLONG_MAX;
    ll mini2 = LLONG_MAX;
    vector<ll> a;
    for(ll i = 0; i < n; i++) {
        ll x; cin>>x;
        a.pb(x);
    }    
    a[0]--;

    sort(all(a));
    mini1 = a[0];
    mini2 = a[1];

    if((mini1 + mini2) % 2 == 0) {
        cout << "Alice" << endl;
    } else {
        cout << "Bob"
    }

    return ;
  

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