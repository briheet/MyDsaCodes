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

    ll n; cin>>n; ll k; cin>>k;
    vector<ll> a(n, 0);
    map<ll, ll> mpp;
    for(ll i = 0; i < n; i++) {
        cin>>a[i];
    }    

    sort(all(a));
    ll maxi1 = a.back();
    ll maxi2 = a[a.size()-2];
    double product = static_cast<double>(maxi1) * static_cast<double>(maxi2);
    long long limit = static_cast<long long>(pow(product, 1.0 / k));
    // for(ll i = 1; i <= k; i++) {
    //     limit /= mul;
    // }
    set<ll> st;
    st.insert(1);
    for(ll i = 2; i <= limit+1; i++) {
        ll num = pow(i, k);
        st.insert(num);
    }

    ll ans = 0;
    // for(auto i: st) {
    //     cout << i << " ";
    // }
    

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