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
	
	ll n, k; cin>>n>>k;

    ll start = 0; ll end = n;
    ll ans = n * (k + k + n - 1) / 2;
    ll sum = ans;
   // cout << sum << endl;
    while(start < end) {
        ll x = (start + end + 1) / 2;
        ll s = x * (k + k + x - 1) / 2;
        //cout << s << endl;
        //cout << sum - s << endl;
        if(s <= sum - s) {
            start = x;
        } else {
            end = x - 1;
    }}
    ll count = 0;
    for (auto x : {start, start + 1}) {
        if (x > n) {
            continue;
        }
        ll s = x * (k + k + x - 1) / 2;
        ans = min(ans, std::abs(s - (sum - s)));
    }
    cout << count << endl;
    
   

}


 

signed main() {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     freopen("output.txt","w",stdout);
// #endif        
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case_number = 1;
    cin >> test_case_number;
    while (test_case_number--)
        test_case();

    return 0;
}