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

bool f1(ll n, ll m) {
    if(n == m) {
        return true;
    } else if(n % 3 != 0) {
        return false;
    } else {
        return {f1(n/3, m) || f1(2*n/3, m)};
    }
}


inline void test_case() {
    
    ll x, y; cin>>x>>y;

    cout << (f1(x, y) ? "YES": "NO") << endl;

   

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