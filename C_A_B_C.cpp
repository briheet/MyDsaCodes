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

    unordered_map<ll, ll> mpa, mpb, mpc;
    ll n; cin>>n;
    for(ll i = 0; i < n; i++) {
        ll x; cin>>x;
        mpa[x] = 1;
        
    }    
    
    ll m; cin>>m;
    for(ll i = 0; i < m; i++) {
        ll x; cin>>x;
        mpb[x] = 1;
    }

    ll o; cin>>o;
    for(ll i = 0; i < o; i++) {
        ll x; cin>>x;
        mpc[x] = 1; 
    }

    ll q; cin>>q;
    set<ll> st;
    for(auto i: mpa) {
            for(auto j: mpb) {
                for(auto k: mpc) {
                    st.insert(i.first + j.first + k.first);
                }
            }
        }
    while(q--) {
        ll x; cin>>x;

        if(st.find(x) != st.end()) {
            cout << "Yes" << endl;
        }else {
            cout << "No" << endl;
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