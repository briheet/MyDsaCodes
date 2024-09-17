#include <bits/stdc++.h>
using namespace std;

#define ll        long long
#define all(x)    x.begin(), x.end()
#define pb        push_back
#define rot(x,k)  x.begin(), x.begin()+k, a.end()

const int INF = (int)4e18;
const int n1 = 1e9 + 7;

mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


inline void test_case() {

    ll n, m, k; cin>>n>>m>>k;
    unordered_set<ll> r;
    unordered_set<ll> rn;
    ll mini = LLONG_MAX;
    ll ent = 0;
    for (ll i = 0; i < m; i++) {
        ll ci;
        cin >> ci;
        vector<ll> a(ci);
        for (ll j = 0; j < ci; j++) {
            cin >> a[i];
        }
        char ch; cin>>ch;
        if(ch == 'o') {
            for(auto i: a) {
                r.insert(i);
            }
            ent++;
        }else if(ch == 'x'){
            ll count = 0;
            for(auto i: a) {
                rn.insert(i);
            }
            mini = min(count, mini);
        }
    }

    for(auto i: rn) {
        if(r.find(i) != r.end()) {
            ent++;
        }
    }

    // if(ent > k) {
    //     cout << 0 << endl;
    //     return;
    // }

    cout << ent << endl;

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

    ll n, m; cin>>n>>m;

    if(n == 0) {
        cout << __builtin_popcountll(m) << endl;
        return;
    }

    ll ans = 1;
    vector<ll> a(62, 0);
    for(ll i = 0; i < 62; i++) {
        a[i] = (m & (1LL<<i)) ? 1: 0;
    }

    for(ll i = 0; i < 62; i++) {
        ll num = (((1LL << i) + MOD) - ((1LL << (i - 1)%MOD)) + MOD) % MOD;
        if(i == 0) num = 1;
        if(a[i] != 0) {
            if(ans == 0) {
                ans += num * ans;
            }else{
                ans = (ans + num * ans % MOD) % MOD;
            }
        }
    }

    cout << ans%MOD << endl;

}


 

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif        
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case_number = 1;
    //cin >> test_case_number;
    while (test_case_number--)
        test_case();

    return 0;
}

    

                
 
}


 

signed main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif        
    ios::sync_with_stdio(0);
    cin.tie(0);
    int test_case_number = 1;
    //cin >> test_case_number;
    while (test_case_number--)
        test_case();

    return 0;
}