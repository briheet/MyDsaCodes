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
    
    ll a, b, c; cin>>a>>b>>c;

    set<ll> st;
    ll x;
    if(b < c) {
        x = 24LL;
    }else {
        x = min(b, 24LL);
    }
    for(ll i = c; i <= x; i++) {
        st.insert(i);
        //cout << i << endl;
    }

    if(c > b && b > 0) {
        for(ll i = 0; i <= b; i++) {
            st.insert(i);
        }
    }


    if(st.find(a) != st.end()) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
   

}


 

signed main() {       
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case_number = 1;
    //cin >> test_case_number;
    while (test_case_number--)
        test_case();

    return 0;
}