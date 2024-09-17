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
    vector<ll> ans(n, 0);
    map<ll, ll> mpp;
    mpp[0] = n;
    ll q; cin>>q;
    for(ll i = 0; i < q; i++) {
        ll a, b; cin>>a>>b;
        --a;
        if(--mpp[ans[a]] == 0) mpp.erase(ans[a]);
        ans[a] += b;
        ++mpp[ans[a]];
        cout << mpp.size() << endl;
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